/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lldiv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 00:00:00 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/16 16:53:20 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "test_framework.h"
#include <stdlib.h>

TEST_INIT();

static void test_basic_division(void)
{
    TEST_SECTION("Basic Division");

    lldiv_t std_result = lldiv(100000LL, 9LL);
    ft_lldiv_t ft_result = ft_lldiv(100000LL, 9LL);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%lld");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%lld");

    std_result = lldiv(200000LL, 7LL);
    ft_result = ft_lldiv(200000LL, 7LL);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%lld");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%lld");
}

static void test_negative_division(void)
{
    TEST_SECTION("Negative Division");

    lldiv_t std_result = lldiv(-100000LL, 9LL);
    ft_lldiv_t ft_result = ft_lldiv(-100000LL, 9LL);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%lld");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%lld");

    std_result = lldiv(100000LL, -9LL);
    ft_result = ft_lldiv(100000LL, -9LL);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%lld");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%lld");
}

static void test_zero_dividend(void)
{
    TEST_SECTION("Zero Dividend");

    lldiv_t std_result = lldiv(0LL, 5LL);
    ft_lldiv_t ft_result = ft_lldiv(0LL, 5LL);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%lld");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%lld");
}

static void test_large_numbers(void)
{
    TEST_SECTION("Large Numbers");

    lldiv_t std_result = lldiv(123456789012345LL, 12345LL);
    ft_lldiv_t ft_result = ft_lldiv(123456789012345LL, 12345LL);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%lld");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%lld");
}

int main(void)
{
    printf("ft_lldiv Automated Test Suite\n");
    printf("=============================\n\n");

    test_basic_division();
    test_negative_division();
    test_zero_dividend();
    test_large_numbers();

    TEST_SUMMARY();
}
