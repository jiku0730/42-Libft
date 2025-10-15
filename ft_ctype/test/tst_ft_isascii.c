/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:30:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 16:46:04 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "test_framework.h"
#include <ctype.h>

static void	test_ascii_characters(t_test *ctx)
{
	test_section("ASCII Characters");
	assert_eq_int(ctx, isascii(0), ft_isascii(0));
	assert_eq_int(ctx, isascii(65), ft_isascii(65));
	assert_eq_int(ctx, isascii(127), ft_isascii(127));
	assert_eq_int(ctx, isascii('A'), ft_isascii('A'));
}

static void	test_non_ascii_characters(t_test *ctx)
{
	test_section("Non-ASCII Characters");
	assert_eq_int(ctx, isascii(128), ft_isascii(128));
	assert_eq_int(ctx, isascii(200), ft_isascii(200));
	assert_eq_int(ctx, isascii(255), ft_isascii(255));
	assert_eq_int(ctx, isascii(-1), ft_isascii(-1));
	assert_eq_int(ctx, isascii(-128), ft_isascii(-128));
	assert_eq_int(ctx, isascii(256), ft_isascii(256));
}

static void	test_boundary_values(t_test *ctx)
{
	test_section("Boundary Values");
	assert_eq_int(ctx, isascii(-1), ft_isascii(-1));
	assert_eq_int(ctx, isascii(0), ft_isascii(0));
	assert_eq_int(ctx, isascii(127), ft_isascii(127));
	assert_eq_int(ctx, isascii(128), ft_isascii(128));
}

static void	test_standard_compatibility(t_test *ctx)
{
	int	c;

	test_section("Standard Library Compatibility");
	c = 0;
	while (c <= 255)
	{
		assert_eq_int(ctx, isascii(c), ft_isascii(c));
		c++;
	}
}

int	main(void)
{
	t_test	ctx;

	test_init(&ctx);
	test_ascii_characters(&ctx);
	test_non_ascii_characters(&ctx);
	test_boundary_values(&ctx);
	test_standard_compatibility(&ctx);
	return (test_summary(&ctx));
}
