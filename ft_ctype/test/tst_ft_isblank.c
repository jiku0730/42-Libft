/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isblank.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:33:46 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/30 00:33:47 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "test_framework.h"
#include <ctype.h>

TEST_INIT();

static void	test_blank_characters(void)
{
	TEST_SECTION("Blank Characters");
	ASSERT_EQ(isblank(' '), ft_isblank(' '), "%d");
	ASSERT_EQ(isblank('\t'), ft_isblank('\t'), "%d");
}

static void	test_non_blank_characters(void)
{
	TEST_SECTION("Non-Blank Characters");
	ASSERT_EQ(isblank('a'), ft_isblank('a'), "%d");
	ASSERT_EQ(isblank('0'), ft_isblank('0'), "%d");
	ASSERT_EQ(isblank('\n'), ft_isblank('\n'), "%d");
	ASSERT_EQ(isblank('\r'), ft_isblank('\r'), "%d");
	ASSERT_EQ(isblank('\v'), ft_isblank('\v'), "%d");
}

static void	test_other_whitespace(void)
{
	TEST_SECTION("Other Whitespace Characters");
	ASSERT_EQ(isblank('\n'), ft_isblank('\n'), "%d");
	ASSERT_EQ(isblank('\r'), ft_isblank('\r'), "%d");
	ASSERT_EQ(isblank('\f'), ft_isblank('\f'), "%d");
	ASSERT_EQ(isblank('\v'), ft_isblank('\v'), "%d");
}

static void	test_standard_compatibility(void)
{
	int	c;

	TEST_SECTION("Standard Library Compatibility");
	c = 0;
	while (c <= 255)
	{
		if (!!isblank(c) != !!ft_isblank(c))
		{
			printf("FAIL at char %d: std=%d, ft=%d\n", c, !!isblank(c),
				!!ft_isblank(c));
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
	printf("ft_isblank Automated Test Suite\n");
	printf("===============================\n\n");
	test_blank_characters();
	test_non_blank_characters();
	test_other_whitespace();
	test_standard_compatibility();
	TEST_SUMMARY();
}
