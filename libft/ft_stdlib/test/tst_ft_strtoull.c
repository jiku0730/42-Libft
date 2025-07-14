/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strtoull.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:59:19 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/14 20:54:03 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char				*endptr;
	unsigned long long	ull_result;

    /* Test ft_strtoull */
    printf("\n=== Testing ft_strtoull ===\n");
    /* Basic decimal tests */
    printf("strtoull(\"123\", NULL, 10) = %llu\n", ft_strtoull("123", NULL, 10));
    printf("strtoull(\"456\", NULL, 10) = %llu\n", ft_strtoull("456", NULL, 10));
    printf("strtoull(\"+789\", NULL, 10) = %llu\n", ft_strtoull("+789", NULL, 10));

    /* Negative number tests (should return ULLONG_MAX) */
    printf("strtoull(\"-123\", NULL, 10) = %llu (ERANGE)\n", ft_strtoull("-123", NULL, 10));
    printf("strtoull(\"-1\", NULL, 10) = %llu (ERANGE)\n", ft_strtoull("-1", NULL, 10));

    /* Auto base detection (base = 0) */
    printf("strtoull(\"123\", NULL, 0) = %llu (decimal)\n", ft_strtoull("123", NULL, 0));
    printf("strtoull(\"0123\", NULL, 0) = %llu (octal)\n", ft_strtoull("0123", NULL, 0));
    printf("strtoull(\"0x123\", NULL, 0) = %llu (hex)\n", ft_strtoull("0x123", NULL, 0));
    printf("strtoull(\"0X123\", NULL, 0) = %llu (hex)\n", ft_strtoull("0X123", NULL, 0));

    /* Different bases */
    printf("strtoull(\"101\", NULL, 2) = %llu (binary)\n", ft_strtoull("101", NULL, 2));
    printf("strtoull(\"777\", NULL, 8) = %llu (octal)\n", ft_strtoull("777", NULL, 8));
    printf("strtoull(\"ff\", NULL, 16) = %llu (hex)\n", ft_strtoull("ff", NULL, 16));
    printf("strtoull(\"FF\", NULL, 16) = %llu (hex)\n", ft_strtoull("FF", NULL, 16));
    printf("strtoull(\"0xFF\", NULL, 16) = %llu (hex with prefix)\n",
        ft_strtoull("0xFF", NULL, 16));

    /* Whitespace handling */
    printf("strtoull(\" \t123\", NULL, 10) = %llu\n", ft_strtoull(" \t123", NULL, 10));
    printf("strtoull(\"  456\", NULL, 10) = %llu\n", ft_strtoull("  456", NULL, 10));

    /* endptr tests */
    ull_result = ft_strtoull("123abc", &endptr, 10);
    printf("strtoull(\"123abc\", &endptr, 10) = %llu, endptr = \"%s\"\n", ull_result, endptr);

    ull_result = ft_strtoull("  456def", &endptr, 10);
    printf("strtoull(\"  456def\", &endptr, 10) = %llu, endptr = \"%s\"\n", ull_result, endptr);

    /* Error cases */
    ull_result = ft_strtoull("", &endptr, 10);
    printf("strtoull(\"\", &endptr, 10) = %llu, endptr = \"%s\"\n", ull_result, endptr);

    ull_result = ft_strtoull("abc", &endptr, 10);
    printf("strtoull(\"abc\", &endptr, 10) = %llu, endptr = \"%s\"\n", ull_result, endptr);

    /* Invalid base */
    ull_result = ft_strtoull("123", &endptr, 1);
    printf("strtoull(\"123\", &endptr, 1) = %llu (EINVAL)\n", ull_result);

    ull_result = ft_strtoull("123", &endptr, 37);
    printf("strtoull(\"123\", &endptr, 37) = %llu (EINVAL)\n", ull_result);

    /* Large number tests (unique to unsigned) */
    printf("strtoull(\"9223372036854775808\", NULL, 10) = %llu (LLONG_MAX+1)\n",
        ft_strtoull("9223372036854775808", NULL, 10));

    printf("strtoull(\"18446744073709551614\", NULL, 10) = %llu (ULLONG_MAX-1)\n",
        ft_strtoull("18446744073709551614", NULL, 10));

    printf("strtoull(\"18446744073709551615\", NULL, 10) = %llu (ULLONG_MAX)\n",
        ft_strtoull("18446744073709551615", NULL, 10));

    /* Overflow tests */
    ull_result = ft_strtoull("18446744073709551616", &endptr, 10);  /* ULLONG_MAX + 1 */
    printf("strtoull(\"18446744073709551616\", &endptr, 10) = %llu (ERANGE)\n", ull_result);

    ull_result = ft_strtoull("99999999999999999999", &endptr, 10);  /* Much larger */
    printf("strtoull(\"99999999999999999999\", &endptr, 10) = %llu (ERANGE)\n", ull_result);

    /* Hex overflow tests */
    printf("strtoull(\"0xFFFFFFFFFFFFFFFF\", NULL, 16) = %llu (ULLONG_MAX)\n",
        ft_strtoull("0xFFFFFFFFFFFFFFFF", NULL, 16));

    ull_result = ft_strtoull("0x10000000000000000", &endptr, 16);  /* ULLONG_MAX + 1 in hex */
    printf("strtoull(\"0x10000000000000000\", &endptr, 16) = %llu (ERANGE)\n", ull_result);

    /* Mixed sign/space tests */
    printf("strtoull(\"  +123\", NULL, 10) = %llu\n", ft_strtoull("  +123", NULL, 10));
    printf("strtoull(\"  -456\", NULL, 10) = %llu (ERANGE)\n", ft_strtoull("  -456", NULL, 10));

    return (0);
}
