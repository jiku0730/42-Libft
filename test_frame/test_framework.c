/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_framework.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:50:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/30 01:41:46 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_framework.h"
#include <stdio.h>
#include <string.h>

/* Global test counters */
int	g_test_count = 0;
int	g_pass_count = 0;

void	test_section(const char *name)
{
	printf(C_BLUE "=== %s ===" C_RESET "\n", name);
}

void	assert_int_eq(int expected, int actual, const char *expr)
{
	g_test_count++;
	if (expected == actual)
	{
		g_pass_count++;
		printf(C_GREEN "✓ " C_RESET "%s\n", expr);
	}
	else
	{
		printf(C_RED "✗ " C_RESET "%s\n", expr);
		printf("  Expected: %d\n", expected);
		printf("  Actual:   %d\n", actual);
	}
}

void	assert_str_eq(const char *expected, const char *actual)
{
	const char	*exp;
	const char	*act;

	exp = expected ? expected : "(null)";
	act = actual ? actual : "(null)";
	g_test_count++;
	if (strcmp(exp, act) == 0)
	{
		g_pass_count++;
		printf(C_GREEN "✓ " C_RESET "strings equal\n");
	}
	else
	{
		printf(C_RED "✗ " C_RESET "strings differ\n");
		printf("  Expected: \"%s\"\n", exp);
		printf("  Actual:   \"%s\"\n", act);
	}
}

void	assert_null(void *ptr, const char *expr)
{
	g_test_count++;
	if (ptr == NULL)
	{
		g_pass_count++;
		printf(C_GREEN "✓ " C_RESET "%s is NULL\n", expr);
	}
	else
	{
		printf(C_RED "✗ " C_RESET "%s is not NULL: %p\n", expr, ptr);
	}
}

void	assert_not_null(void *ptr, const char *expr)
{
	g_test_count++;
	if (ptr != NULL)
	{
		g_pass_count++;
		printf(C_GREEN "✓ " C_RESET "%s is not NULL\n", expr);
	}
	else
	{
		printf(C_RED "✗ " C_RESET "%s is NULL\n", expr);
	}
}

void	assert_true(int cond, const char *expr)
{
	g_test_count++;
	if (cond)
	{
		g_pass_count++;
		printf(C_GREEN "✓ " C_RESET "%s\n", expr);
	}
	else
	{
		printf(C_RED "✗ " C_RESET "%s is false\n", expr);
	}
}

void	assert_false(int cond, const char *expr)
{
	g_test_count++;
	if (!cond)
	{
		g_pass_count++;
		printf(C_GREEN "✓ " C_RESET "!(%s)\n", expr);
	}
	else
	{
		printf(C_RED "✗ " C_RESET "%s is true\n", expr);
	}
}

int	test_summary(void)
{
	printf("\n" C_BLUE "=== Test Summary ===" C_RESET "\n");
	if (g_test_count == 0)
	{
		printf("No tests were run\n");
		return (1);
	}
	printf("Passed: %s%d%s/%d tests (%.1f%%)\n",
		(g_pass_count == g_test_count) ? C_GREEN : C_RED,
		g_pass_count, C_RESET, g_test_count,
		(100.0 * g_pass_count) / g_test_count);
	return (g_pass_count == g_test_count) ? 0 : 1;
}

int	test_ctype_all(const char *name, t_ctype_func std_func,
		t_ctype_func ft_func)
{
	int	c;

	printf("ft_%s Test Suite\n", name);
	printf("=====================\n\n");
	test_section("Testing all characters (0-255)");
	c = 0;
	while (c <= 255)
	{
		assert_int_eq(std_func(c), ft_func(c), "");
		c++;
	}
	return (test_summary());
}
