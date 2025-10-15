/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isxdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:30:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 17:30:00 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "test_framework.h"
#include <ctype.h>

static void	test_comprehensive(t_test *ctx)
{
	int				c;
	unsigned char	uc;

	test_section("Comprehensive Test (-255 to +300)");
	c = -255;
	while (c <= 300)
	{
		uc = (unsigned char)c;
		assert_eq_int(ctx, isxdigit(uc), ft_isxdigit(uc));
		c++;
	}
}

int	main(void)
{
	t_test	ctx;

	test_init(&ctx);
	test_comprehensive(&ctx);
	return (test_summary(&ctx));
}
