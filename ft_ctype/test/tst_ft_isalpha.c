/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:30:00 by kei2003730        #+#    #+#             */
/*   Updated: 2025/10/30 00:25:58 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "test_framework.h"
#include <ctype.h>

TEST_INIT();

static void	test_lowercase_letters(void)
{
	TEST_SECTION("Lowercase Letters");
	ASSERT_EQ(isalpha('a'), ft_isalpha('a'), "%d");
	ASSERT_EQ(isalpha('m'), ft_isalpha('m'), "%d");
	ASSERT_EQ(isalpha('z'), ft_isalpha('z'), "%d");
}

static void	test_uppercase_letters(void)
{
	TEST_SECTION("Uppercase Letters");
	ASSERT_EQ(isalpha('A'), ft_isalpha('A'), "%d");
	ASSERT_EQ(isalpha('M'), ft_isalpha('M'), "%d");
	ASSERT_EQ(isalpha('Z'), ft_isalpha('Z'), "%d");
}

static void	test_non_alphabetic(void)
{
	TEST_SECTION("Non-Alphabetic Characters");
	ASSERT_EQ(isalpha('0'), ft_isalpha('0'), "%d");
	ASSERT_EQ(isalpha('9'), ft_isalpha('9'), "%d");
	ASSERT_EQ(isalpha(' '), ft_isalpha(' '), "%d");
	ASSERT_EQ(isalpha('!'), ft_isalpha('!'), "%d");
	ASSERT_EQ(isalpha('@'), ft_isalpha('@'), "%d");
	ASSERT_EQ(isalpha('['), ft_isalpha('['), "%d");
	ASSERT_EQ(isalpha('`'), ft_isalpha('`'), "%d");
	ASSERT_EQ(isalpha('{'), ft_isalpha('{'), "%d");
}

static void	test_standard_compatibility(void)
{
	int	c;

	TEST_SECTION("Standard Library Compatibility");
	c = 0;
	while (c <= 255)
	{
		if (!!isalpha(c) != !!ft_isalpha(c))
		{
			printf("FAIL at char %d: std=%d, ft=%d\n", c, !!isalpha(c),
				!!ft_isalpha(c));
			g_test_count++;
		}
		else
		{
			g_test_count++;
			g_pass_count++;
		}
		c++;
	}
}

int	main(void)
{
	printf("ft_isalpha Automated Test Suite\n");
	printf("===============================\n\n");
	test_lowercase_letters();
	test_uppercase_letters();
	test_non_alphabetic();
	test_standard_compatibility();
	TEST_SUMMARY();
}
