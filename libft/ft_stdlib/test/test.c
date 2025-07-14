/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:58:19 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/14 16:59:07 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stdlib.h"

int main(void) {
	printf("abs(-5) = %d\n", ft_abs(-5));
	printf("labs(-123456789L) = %ld\n", ft_labs(-123456789L));
	printf("llabs(-123456789012345LL) = %lld\n", ft_llabs(-123456789012345LL));

	ft_div_t  d1 = ft_div( 10,  3);
	ft_div_t  d2 = ft_div(-10,  3);
	ft_div_t  d3 = ft_div( 10, -3);
	printf("div(10,3): quot=%d, rem=%d\n", d1.quot, d1.rem);
	printf("div(-10,3): quot=%d, rem=%d\n", d2.quot, d2.rem);
	printf("div(10,-3): quot=%d, rem=%d\n", d3.quot, d3.rem);

	/* 同様に ft_ldiv, ft_lldiv もテスト */
	ft_ldiv_t ld1 = ft_ldiv(1000000L, 300000L);
	ft_ldiv_t ld2 = ft_ldiv(-1000000L, 300000L);
	ft_ldiv_t ld3 = ft_ldiv(1000000L, -300000L);
	printf("ldiv(1000000L, 300000L): quot=%ld, rem=%ld\n", ld1.quot, ld1.rem);
	printf("ldiv(-1000000L, 300000L): quot=%ld, rem=%ld\n", ld2.quot, ld2.rem);
	printf("ldiv(1000000L, -300000L): quot=%ld, rem=%ld\n", ld3.quot, ld3.rem);
	ft_lldiv_t lld1 = ft_lldiv(10000000000LL, 3000000000LL);
	ft_lldiv_t lld2 = ft_lldiv(-10000000000LL, 3000000000LL);
	ft_lldiv_t lld3 = ft_lldiv(10000000000LL, -3000000000LL);
	printf("lldiv(10000000000LL, 3000000000LL): quot=%lld, rem=%lld\n", lld1.quot, lld1.rem);
	printf("lldiv(-10000000000LL, 3000000000LL): quot=%lld, rem=%lld\n", lld2.quot, lld2.rem);
	printf("lldiv(10000000000LL, -3000000000LL): quot=%lld, rem=%lld\n", lld3.quot, lld3.rem);
	return 0;
}
