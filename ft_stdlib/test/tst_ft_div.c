/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_div.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 00:00:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 22:50:59 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "test_framework.h"
#include <stdio.h>
#include <stdlib.h>

TEST_INIT();

static void	test_basic_division(void)
{
	div_t		std_result;
	ft_div_t	ft_result;

	TEST_SECTION("Basic Division");
	std_result = div(10, 3);
	ft_result = ft_div(10, 3);
	ASSERT_EQ(std_result.quot, ft_result.quot, "%d");
	ASSERT_EQ(std_result.rem, ft_result.rem, "%d");
	std_result = div(20, 4);
	ft_result = ft_div(20, 4);
	ASSERT_EQ(std_result.quot, ft_result.quot, "%d");
	ASSERT_EQ(std_result.rem, ft_result.rem, "%d");
}

static void	test_negative_division(void)
{
	div_t		std_result;
	ft_div_t	ft_result;

	TEST_SECTION("Negative Division");
	std_result = div(-10, 3);
	ft_result = ft_div(-10, 3);
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

static void	test_zero_dividend(void)
{
	div_t		std_result;
	ft_div_t	ft_result;

	TEST_SECTION("Zero Dividend");
	std_result = div(0, 5);
	ft_result = ft_div(0, 5);
	ASSERT_EQ(std_result.quot, ft_result.quot, "%d");
	ASSERT_EQ(std_result.rem, ft_result.rem, "%d");
}

static void	test_exact_division(void)
{
	div_t		std_result;
	ft_div_t	ft_result;

	TEST_SECTION("Exact Division");
	std_result = div(15, 5);
	ft_result = ft_div(15, 5);
	ASSERT_EQ(std_result.quot, ft_result.quot, "%d");
	ASSERT_EQ(std_result.rem, ft_result.rem, "%d");
}

int	main(void)
{
	printf("ft_div Automated Test Suite\n");
	printf("===========================\n\n");
	test_basic_division();
	test_negative_division();
	test_zero_dividend();
	test_exact_division();
	TEST_SUMMARY();
}
