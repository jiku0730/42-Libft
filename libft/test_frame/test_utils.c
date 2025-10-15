/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:40:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 16:35:03 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_framework.h"

void	test_init(t_test *ctx)
{
	ctx->test_count = 0;
	ctx->pass_count = 0;
}

void	test_section(const char *name)
{
	printf(COLOR_BLUE "=== %s ===" COLOR_RESET "\n", name);
}

int	test_summary(t_test *ctx)
{
	double	percentage;

	printf("\n" COLOR_BLUE "=== Test Summary ===" COLOR_RESET "\n");
	if (ctx->test_count > 0)
		percentage = (double)ctx->pass_count / ctx->test_count * 100;
	else
		percentage = 0;
	if (ctx->pass_count == ctx->test_count)
		printf("Passed: " COLOR_GREEN "%d" COLOR_RESET "/%d tests (%.1f%%)\n",
			ctx->pass_count, ctx->test_count, percentage);
	else
		printf("Passed: " COLOR_RED "%d" COLOR_RESET "/%d tests (%.1f%%)\n",
			ctx->pass_count, ctx->test_count, percentage);
	if (ctx->pass_count == ctx->test_count)
		return (0);
	return (1);
}
