/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_div.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 00:00:00 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/16 16:46:32 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "test_framework.h"
#include <stdlib.h>
#include <stdio.h>

TEST_INIT();

static void test_basic_division(void)
{
    TEST_SECTION("Basic Division");

    div_t std_result = div(10, 3);
    ft_div_t ft_result = ft_div(10, 3);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%d");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%d");

    std_result = div(20, 4);
    ft_result = ft_div(20, 4);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%d");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%d");
}

static void test_negative_division(void)
{
    TEST_SECTION("Negative Division");

    div_t std_result = div(-10, 3);
    ft_div_t ft_result = ft_div(-10, 3);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%d");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%d");

    std_result = div(10, -3);
    ft_result = ft_div(10, -3);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%d");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%d");

    std_result = div(-10, -3);
    ft_result = ft_div(-10, -3);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%d");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%d");
}

static void test_zero_dividend(void)
{
    TEST_SECTION("Zero Dividend");

    div_t std_result = div(0, 5);
    ft_div_t ft_result = ft_div(0, 5);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%d");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%d");
}

static void test_exact_division(void)
{
    TEST_SECTION("Exact Division");

    div_t std_result = div(15, 5);
    ft_div_t ft_result = ft_div(15, 5);
    ASSERT_EQ(std_result.quot, ft_result.quot, "%d");
    ASSERT_EQ(std_result.rem, ft_result.rem, "%d");
}

int main(void)
{
    printf("ft_div Automated Test Suite\n");
    printf("===========================\n\n");

    test_basic_division();
    test_negative_division();
    test_zero_dividend();
    test_exact_division();

    TEST_SUMMARY();
}
