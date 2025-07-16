/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strtol.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:04:22 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/16 16:27:59 by kei2003730       ###   ########.fr       */
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

    ASSERT_EQ(123L, ft_strtol("123", NULL, 10), "%ld");
    ASSERT_EQ(-456L, ft_strtol("-456", NULL, 10), "%ld");
    ASSERT_EQ(789L, ft_strtol("+789", NULL, 10), "%ld");
    ASSERT_EQ(0L, ft_strtol("0", NULL, 10), "%ld");
}

static void test_different_bases(void)
{
    TEST_SECTION("Different Bases");

    ASSERT_EQ(5L, ft_strtol("101", NULL, 2), "%ld");      // binary
    ASSERT_EQ(511L, ft_strtol("777", NULL, 8), "%ld");    // octal
    ASSERT_EQ(255L, ft_strtol("ff", NULL, 16), "%ld");    // hex
    ASSERT_EQ(255L, ft_strtol("FF", NULL, 16), "%ld");    // hex uppercase
}

static void test_auto_base_detection(void)
{
    TEST_SECTION("Auto Base Detection");

    ASSERT_EQ(123L, ft_strtol("123", NULL, 0), "%ld");     // decimal
    ASSERT_EQ(83L, ft_strtol("0123", NULL, 0), "%ld");     // octal
    ASSERT_EQ(291L, ft_strtol("0x123", NULL, 0), "%ld");   // hex
}

static void test_endptr(void)
{
    TEST_SECTION("End Pointer Tests");

    char *endptr;
    long result;

    result = ft_strtol("123abc", &endptr, 10);
    ASSERT_EQ(123L, result, "%ld");
    ASSERT_STR_EQ("abc", endptr);

    result = ft_strtol("  456def", &endptr, 10);
    ASSERT_EQ(456L, result, "%ld");
    ASSERT_STR_EQ("def", endptr);
}

static void test_overflow(void)
{
    TEST_SECTION("Overflow Tests");

    // Compare with standard library
    long std_result1 = strtol("9223372036854775807", NULL, 10);  // LONG_MAX
    long ft_result1 = ft_strtol("9223372036854775807", NULL, 10);
    ASSERT_EQ(std_result1, ft_result1, "%ld");

    long std_result2 = strtol("9223372036854775808", NULL, 10);  // LONG_MAX + 1
    long ft_result2 = ft_strtol("9223372036854775808", NULL, 10);
    ASSERT_EQ(std_result2, ft_result2, "%ld");
}

int main(void)
{
    printf("ft_strtol Automated Test Suite\n");
    printf("==============================\n\n");

    test_basic_conversion();
    test_different_bases();
    test_auto_base_detection();
    test_endptr();
    test_overflow();

    TEST_SUMMARY();
}
