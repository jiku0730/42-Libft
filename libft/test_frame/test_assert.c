/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_assert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:40:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 16:35:02 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_framework.h"

void	assert_eq_int(t_test *ctx, int expected, int actual)
{
	ctx->test_count++;
	if (expected == actual)
	{
		ctx->pass_count++;
		printf(COLOR_GREEN "✓ PASS" COLOR_RESET "\n");
	}
	else
	{
		printf(COLOR_RED "✗ FAIL" COLOR_RESET "\n");
		printf("  Expected: %d\n", expected);
		printf("  Actual:   %d\n", actual);
	}
}

void	assert_null(t_test *ctx, void *ptr)
{
	ctx->test_count++;
	if (ptr == NULL)
	{
		ctx->pass_count++;
		printf(COLOR_GREEN "✓ PASS: is NULL" COLOR_RESET "\n");
	}
	else
	{
		printf(COLOR_RED "✗ FAIL: is not NULL (%p)" COLOR_RESET "\n", ptr);
	}
}

void	assert_not_null(t_test *ctx, void *ptr)
{
	ctx->test_count++;
	if (ptr != NULL)
	{
		ctx->pass_count++;
		printf(COLOR_GREEN "✓ PASS: is not NULL" COLOR_RESET "\n");
	}
	else
	{
		printf(COLOR_RED "✗ FAIL: is NULL" COLOR_RESET "\n");
	}
}
