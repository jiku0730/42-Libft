/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isgraph.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:30:00 by kjikuhar        #+#    #+#             */
/*   Updated: 2025/07/16 17:42:13 by kjikuhar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "test_framework.h"
#include <ctype.h>

TEST_INIT();

static void	test_graphic_characters(void)
{
	TEST_SECTION("Graphic Characters (33-126)");
	ASSERT_EQ(isgraph('!'), ft_isgraph('!'), "%d");
	ASSERT_EQ(isgraph('A'), ft_isgraph('A'), "%d");
	ASSERT_EQ(isgraph('z'), ft_isgraph('z'), "%d");
	ASSERT_EQ(isgraph('0'), ft_isgraph('0'), "%d");
	ASSERT_EQ(isgraph('~'), ft_isgraph('~'), "%d");
}

static void	test_non_graphic_characters(void)
{
	TEST_SECTION("Non-Graphic Characters");
	ASSERT_EQ(isgraph(' '), ft_isgraph(' '), "%d");
	ASSERT_EQ(isgraph('\t'), ft_isgraph('\t'), "%d");
	ASSERT_EQ(isgraph('\n'), ft_isgraph('\n'), "%d");
	ASSERT_EQ(isgraph(0), ft_isgraph(0), "%d");
	ASSERT_EQ(isgraph(127), ft_isgraph(127), "%d");
}

static void	test_boundary_values(void)
{
	TEST_SECTION("Boundary Values");
	ASSERT_EQ(isgraph(32), ft_isgraph(32), "%d");
	ASSERT_EQ(isgraph(33), ft_isgraph(33), "%d");
	ASSERT_EQ(isgraph(126), ft_isgraph(126), "%d");
	ASSERT_EQ(isgraph(127), ft_isgraph(127), "%d");
}

static void	test_standard_compatibility(void)
{
	int	c;

	TEST_SECTION("Standard Library Compatibility");
	c = 0;
	while (c <= 255)
	{
		if (!!isgraph(c) != !!ft_isgraph(c))
		{
			printf("FAIL at char %d: std=%d, ft=%d\n", c, !!isgraph(c),
				!!ft_isgraph(c));
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
	printf("ft_isgraph Automated Test Suite\n");
	printf("===============================\n\n");
	test_graphic_characters();
	test_non_graphic_characters();
	test_boundary_values();
	test_standard_compatibility();
	TEST_SUMMARY();
}
