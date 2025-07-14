/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:59:19 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/14 19:59:47 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_stdlib.h"
// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	ft_div_t	d1;
// 	ft_div_t	d2;
// 	ft_div_t	d3;
// 	ft_ldiv_t	ld1;
// 	ft_ldiv_t	ld2;
// 	ft_ldiv_t	ld3;
// 	ft_lldiv_t	lld1;
// 	ft_lldiv_t	lld2;
// 	ft_lldiv_t	lld3;
// 	char		*endptr;
// 	long long	result;

// 	/* Test abs functions */
// 	printf("=== Testing abs functions ===\n");
// 	printf("abs(-5) = %d\n", ft_abs(-5));
// 	printf("labs(-123456789L) = %ld\n", ft_labs(-123456789L));
// 	printf("llabs(-123456789012345LL) = %lld\n", ft_llabs(-123456789012345LL));
// 	/* Test div functions */
// 	printf("\n=== Testing div functions ===\n");
// 	d1 = ft_div(10, 3);
// 	d2 = ft_div(-10, 3);
// 	d3 = ft_div(10, -3);
// 	printf("div(10,3): quot=%d, rem=%d\n", d1.quot, d1.rem);
// 	printf("div(-10,3): quot=%d, rem=%d\n", d2.quot, d2.rem);
// 	printf("div(10,-3): quot=%d, rem=%d\n", d3.quot, d3.rem);
// 	/* Test ldiv functions */
// 	ld1 = ft_ldiv(1000000L, 300000L);
// 	ld2 = ft_ldiv(-1000000L, 300000L);
// 	ld3 = ft_ldiv(1000000L, -300000L);
// 	printf("ldiv(1000000L, 300000L): quot=%ld, rem=%ld\n", ld1.quot, ld1.rem);
// 	printf("ldiv(-1000000L, 300000L): quot=%ld, rem=%ld\n", ld2.quot, ld2.rem);
// 	printf("ldiv(1000000L, -300000L): quot=%ld, rem=%ld\n", ld3.quot, ld3.rem);
// 	/* Test lldiv functions */
// 	lld1 = ft_lldiv(10000000000LL, 3000000000LL);
// 	lld2 = ft_lldiv(-10000000000LL, 3000000000LL);
// 	lld3 = ft_lldiv(10000000000LL, -3000000000LL);
// 	printf("lldiv(10000000000LL, 3000000000LL): quot=%lld,rem=%lld\n",
// 		lld1.quot, lld1.rem);
// 	printf("lldiv(-10000000000LL, 3000000000LL): quot=%lld,rem=%lld\n",
// 		lld2.quot, lld2.rem);
// 	printf("lldiv(10000000000LL, -3000000000LL): quot=%lld,rem=%lld\n",
// 		lld3.quot, lld3.rem);
// 	/* Test ft_strtoll */
// 	printf("\n=== Testing ft_strtoll ===\n");
// 	/* Basic decimal tests */
// 	printf("strtoll(\"123\", NULL, 10) = %lld\n", ft_strtoll("123", NULL, 10));
// 	printf("strtoll(\"-456\", NULL, 10) = %lld\n", ft_strtoll("-456", NULL,
// 			10));
// 	printf("strtoll(\"+789\", NULL, 10) = %lld\n", ft_strtoll("+789", NULL,
// 			10));
// 	/* Auto base detection (base = 0) */
// 	printf("strtoll(\"123\", NULL, 0) = %lld (decimal)\n", ft_strtoll("123",
// 			NULL, 0));
// 	printf("strtoll(\"0123\", NULL, 0) = %lld (octal)\n", ft_strtoll("0123",
// 			NULL, 0));
// 	printf("strtoll(\"0x123\", NULL, 0) = %lld (hex)\n", ft_strtoll("0x123",
// 			NULL, 0));
// 	printf("strtoll(\"0X123\", NULL, 0) = %lld (hex)\n", ft_strtoll("0X123",
// 			NULL, 0));
// 	/* Different bases */
// 	printf("strtoll(\"101\", NULL, 2) = %lld (binary)\n", ft_strtoll("101",
// 			NULL, 2));
// 	printf("strtoll(\"777\", NULL, 8) = %lld (octal)\n", ft_strtoll("777", NULL,
// 			8));
// 	printf("strtoll(\"ff\", NULL, 16) = %lld (hex)\n", ft_strtoll("ff", NULL,
// 			16));
// 	printf("strtoll(\"FF\", NULL, 16) = %lld (hex)\n", ft_strtoll("FF", NULL,
// 			16));
// 	printf("strtoll(\"0xFF\", NULL, 16) = %lld (hex with prefix)\n",
// 		ft_strtoll("0xFF", NULL, 16));
// 	/* Whitespace handling */
// 	printf("strtoll(\" \t123\", NULL, 10) = %lld\n", ft_strtoll(" \t123", NULL,
// 			10));
// 	printf("strtoll(\"  -456\", NULL, 10) = %lld\n", ft_strtoll("  -456", NULL,
// 			10));
// 	/* endptr tests */
// 	result = ft_strtoll("123abc", &endptr, 10);
// 	printf("strtoll(\"123abc\", &endptr, 10) = %lld,endptr = \"%s\"\n", result,
// 		endptr);
// 	result = ft_strtoll("  456def", &endptr, 10);
// 	printf("strtoll(\"  456def\", &endptr, 10) = %lld,endptr = \"%s\"\n",
// 		result, endptr);
// 	/* Error cases */
// 	result = ft_strtoll("", &endptr, 10);
// 	printf("strtoll(\"\", &endptr, 10) = %lld, endptr =\"%s\"\n", result,
// 		endptr);
// 	result = ft_strtoll("abc", &endptr, 10);
// 	printf("strtoll(\"abc\", &endptr, 10) = %lld, endptr =\"%s\"\n", result,
// 		endptr);
// 	/* Invalid base */
// 	result = ft_strtoll("123", &endptr, 1);
// 	printf("strtoll(\"123\", &endptr, 1) = %lld (EINVAL)\n", result);
// 	result = ft_strtoll("123", &endptr, 37);
// 	printf("strtoll(\"123\", &endptr, 37) = %lld (EINVAL)\n", result);
// 	/* Overflow tests */
// 	result = ft_strtoll("9223372036854775808", &endptr, 10);
// 	printf("strtoll(\"9223372036854775808\", &endptr, 10) = %lld\n", result);
// 	result = ft_strtoll("-9223372036854775809", &endptr, 10);
// 	printf("strtoll(\"-9223372036854775809\", &endptr, 10) = %lld\n", result);
// 	/* Large valid values */
// 	printf("strtoll(\"9223372036854775807\", NULL, 10) = %lld (LLONG_MAX)\n",
// 		ft_strtoll("9223372036854775807", NULL, 10));
// 	printf("strtoll(\"-9223372036854775808\", NULL, 10) = %lld (LLONG_MIN)\n",
// 		ft_strtoll("-9223372036854775808", NULL, 10));
// 	return (0);
// }
