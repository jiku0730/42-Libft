/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strtoll.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 00:00:00 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/16 16:43:02 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "test_framework.h"
#include <stdlib.h>
#include <limits.h>
#include <errno.h>

TEST_INIT();

static void test_basic_conversion(void)
{
    TEST_SECTION("Basic Conversion");

    ASSERT_EQ(123LL, ft_strtoll("123", NULL, 10), "%lld");
    ASSERT_EQ(-456LL, ft_strtoll("-456", NULL, 10), "%lld");
    ASSERT_EQ(789LL, ft_strtoll("+789", NULL, 10), "%lld");
    ASSERT_EQ(0LL, ft_strtoll("0", NULL, 10), "%lld");
}

static void test_different_bases(void)
{
    TEST_SECTION("Different Bases");

    ASSERT_EQ(5LL, ft_strtoll("101", NULL, 2), "%lld");      // binary
    ASSERT_EQ(511LL, ft_strtoll("777", NULL, 8), "%lld");    // octal
    ASSERT_EQ(255LL, ft_strtoll("ff", NULL, 16), "%lld");    // hex
    ASSERT_EQ(255LL, ft_strtoll("FF", NULL, 16), "%lld");    // hex uppercase
}

static void test_auto_base_detection(void)
{
    TEST_SECTION("Auto Base Detection");

    ASSERT_EQ(123LL, ft_strtoll("123", NULL, 0), "%lld");     // decimal
    ASSERT_EQ(83LL, ft_strtoll("0123", NULL, 0), "%lld");     // octal
    ASSERT_EQ(291LL, ft_strtoll("0x123", NULL, 0), "%lld");   // hex
}

static void test_endptr(void)
{
    TEST_SECTION("End Pointer Tests");

    char *endptr;
    long long result;

    result = ft_strtoll("987654321xyz", &endptr, 10);
    ASSERT_EQ(987654321LL, result, "%lld");
    ASSERT_STR_EQ("xyz", endptr);

    result = ft_strtoll("  456def", &endptr, 10);
    ASSERT_EQ(456LL, result, "%lld");
    ASSERT_STR_EQ("def", endptr);
}

static void test_whitespace(void)
{
    TEST_SECTION("Whitespace Handling");

    ASSERT_EQ(123LL, ft_strtoll(" \t123", NULL, 10), "%lld");
    ASSERT_EQ(456LL, ft_strtoll("  456", NULL, 10), "%lld");
    ASSERT_EQ(-789LL, ft_strtoll("  -789", NULL, 10), "%lld");
}

static void test_overflow(void)
{
    TEST_SECTION("Overflow Tests");

    // Compare with standard library
    long long std_result1 = strtoll("9223372036854775807", NULL, 10);  // LLONG_MAX
    long long ft_result1 = ft_strtoll("9223372036854775807", NULL, 10);
    ASSERT_EQ(std_result1, ft_result1, "%lld");

    long long std_result2 = strtoll("9223372036854775808", NULL, 10);  // LLONG_MAX + 1
    long long ft_result2 = ft_strtoll("9223372036854775808", NULL, 10);
    ASSERT_EQ(std_result2, ft_result2, "%lld");
}

int main(void)
{
    printf("ft_strtoll Automated Test Suite\n");
    printf("===============================\n\n");

    test_basic_conversion();
    test_different_bases();
    test_auto_base_detection();
    test_endptr();
    test_whitespace();
    test_overflow();

    TEST_SUMMARY();
}
