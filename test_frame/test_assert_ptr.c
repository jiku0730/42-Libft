/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_assert_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:40:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 16:35:03 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_framework.h"

void	assert_str_eq(t_test *ctx, const char *expected, const char *actual)
{
	const char	*exp_str;
	const char	*act_str;

	ctx->test_count++;
	exp_str = expected;
	if (!exp_str)
		exp_str = "NULL";
	act_str = actual;
	if (!act_str)
		act_str = "NULL";
	if (strcmp(exp_str, act_str) == 0)
	{
		ctx->pass_count++;
		printf(COLOR_GREEN "✓ PASS: strings match" COLOR_RESET "\n");
	}
	else
	{
		printf(COLOR_RED "✗ FAIL: string mismatch" COLOR_RESET "\n");
		printf("  Expected: \"%s\"\n", exp_str);
		printf("  Actual:   \"%s\"\n", act_str);
	}
}

void	assert_ptr_eq(t_test *ctx, void *expected, void *actual)
{
	ctx->test_count++;
	if (expected == actual)
	{
		ctx->pass_count++;
		printf(COLOR_GREEN "✓ PASS: pointers match" COLOR_RESET "\n");
	}
	else
	{
		printf(COLOR_RED "✗ FAIL: pointer mismatch" COLOR_RESET "\n");
		printf("  Expected: %p\n", expected);
		printf("  Actual:   %p\n", actual);
	}
}
