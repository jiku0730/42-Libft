/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:17:29 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/13 18:31:06 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef __GNUC__
static inline void	print_char(unsigned char c)
#else
static void	print_char(unsigned char c)
#endif
{
	printf("%d/", (int)c);
	if (ft_isgraph(c))
		printf("'%c'", c);
	else
		printf("'\\%.3o'", c);
}

#define ISLOWER(c) (('a' <= (c) && (c) <= 'z'))
#define TOUPPER(c) (ISLOWER(c) ? 'A' + ((c) - 'a') : (c))
#define XOR(e, f) (((e) && !(f)) || (!(e) && (f)))

/* 標準ctypeとの比較テスト関数 */
static int	test_ctype_compatibility(void)
{
	int	failures;
	int	c;

	failures = 0;
	printf("=== Testing compatibility with standard ctype.h ===\n");
	for (c = 0; c <= 255; c++)
	{
		// isalnum
		if (!!isalnum(c) != !!ft_isalnum(c))
		{
			printf("FAIL: isalnum(%d) - std: %d, ft: %d\n", c, !!isalnum(c),
				!!ft_isalnum(c));
			failures++;
		}
		// isalpha
		if (!!isalpha(c) != !!ft_isalpha(c))
		{
			printf("FAIL: isalpha(%d) - std: %d, ft: %d\n", c, !!isalpha(c),
				!!ft_isalpha(c));
			failures++;
		}
		// isascii
		if (!!isascii(c) != !!ft_isascii(c))
		{
			printf("FAIL: isascii(%d) - std: %d, ft: %d\n", c, !!isascii(c),
				!!ft_isascii(c));
			failures++;
		}
		// iscntrl
		if (!!iscntrl(c) != !!ft_iscntrl(c))
		{
			printf("FAIL: iscntrl(%d) - std: %d, ft: %d\n", c, !!iscntrl(c),
				!!ft_iscntrl(c));
			failures++;
		}
		// isdigit
		if (!!isdigit(c) != !!ft_isdigit(c))
		{
			printf("FAIL: isdigit(%d) - std: %d, ft: %d\n", c, !!isdigit(c),
				!!ft_isdigit(c));
			failures++;
		}
		// isgraph
		if (!!isgraph(c) != !!ft_isgraph(c))
		{
			printf("FAIL: isgraph(%d) - std: %d, ft: %d\n", c, !!isgraph(c),
				!!ft_isgraph(c));
			failures++;
		}
		// islower
		if (!!islower(c) != !!ft_islower(c))
		{
			printf("FAIL: islower(%d) - std: %d, ft: %d\n", c, !!islower(c),
				!!ft_islower(c));
			failures++;
		}
		// isprint
		if (!!isprint(c) != !!ft_isprint(c))
		{
			printf("FAIL: isprint(%d) - std: %d, ft: %d\n", c, !!isprint(c),
				!!ft_isprint(c));
			failures++;
		}
		// ispunct
		if (!!ispunct(c) != !!ft_ispunct(c))
		{
			printf("FAIL: ispunct(%d) - std: %d, ft: %d\n", c, !!ispunct(c),
				!!ft_ispunct(c));
			failures++;
		}
		// isspace
		if (!!isspace(c) != !!ft_isspace(c))
		{
			printf("FAIL: isspace(%d) - std: %d, ft: %d\n", c, !!isspace(c),
				!!ft_isspace(c));
			failures++;
		}
		// isupper
		if (!!isupper(c) != !!ft_isupper(c))
		{
			printf("FAIL: isupper(%d) - std: %d, ft: %d\n", c, !!isupper(c),
				!!ft_isupper(c));
			failures++;
		}
		// isxdigit
		if (!!isxdigit(c) != !!ft_isxdigit(c))
		{
			printf("FAIL: isxdigit(%d) - std: %d, ft: %d\n", c, !!isxdigit(c),
				!!ft_isxdigit(c));
			failures++;
		}
		// isblank
		if (!!isblank(c) != !!ft_isblank(c))
		{
			printf("FAIL: isblank(%d) - std: %d, ft: %d\n", c, !!isblank(c),
				!!ft_isblank(c));
			failures++;
		}
		// tolower
		if (tolower(c) != ft_tolower(c))
		{
			printf("FAIL: tolower(%d) - std: %d, ft: %d\n", c, tolower(c),
				ft_tolower(c));
			failures++;
		}
		// toupper
		if (toupper(c) != ft_toupper(c))
		{
			printf("FAIL: toupper(%d) - std: %d, ft: %d\n", c, toupper(c),
				ft_toupper(c));
			failures++;
		}
	}
	// EOF テスト
	if (!!isascii(EOF) != !!ft_isascii(EOF))
	{
		printf("FAIL: isascii(EOF) - std: %d, ft: %d\n", !!isascii(EOF),
			!!ft_isascii(EOF));
		failures++;
	}
	if (tolower(EOF) != ft_tolower(EOF))
	{
		printf("FAIL: tolower(EOF) - std: %d, ft: %d\n", tolower(EOF),
			ft_tolower(EOF));
		failures++;
	}
	if (toupper(EOF) != ft_toupper(EOF))
	{
		printf("FAIL: toupper(EOF) - std: %d, ft: %d\n", toupper(EOF),
			ft_toupper(EOF));
		failures++;
	}
	if (failures == 0)
	{
		printf("PASS: All compatibility tests passed!\n");
	}
	else
	{
		printf("FAIL: %d compatibility test(s) failed\n", failures);
	}
	printf("=== End of compatibility tests ===\n\n");
	return (failures);
}

int	main(void)
{
	unsigned short	c;
	int				failures;

	failures = 0;
	/* 標準ctype.hとの互換性テストを最初に実行 */
	failures += test_ctype_compatibility();
	printf("=== Detailed character analysis ===\n");
/* マクロ TRY を定義して出力 */
#define TRY(func) \
	if (func(c))  \
	printf(" %s", #func)
/* 判定関数をまとめて呼び出すマクロ */
#define TRYEM             \
	do                    \
	{                     \
		TRY(ft_isascii);  \
		TRY(ft_isalnum);  \
		TRY(ft_isalpha);  \
		TRY(ft_iscntrl);  \
		TRY(ft_isdigit);  \
		TRY(ft_isgraph);  \
		TRY(ft_islower);  \
		TRY(ft_isprint);  \
		TRY(ft_ispunct);  \
		TRY(ft_isspace);  \
		TRY(ft_isupper);  \
		TRY(ft_isxdigit); \
		TRY(ft_isblank);  \
	} while (0)
	for (c = 0; c <= UCHAR_MAX; ++c)
	{
		print_char(c);
		TRYEM;
		/* 小文字判定＆変換チェック */
		if (XOR(ISLOWER(c), ft_islower(c)) || ft_toupper(c) != TOUPPER(c))
		{
			printf(" BOGUS");
			failures++;
		}
		/* 変換結果の表示 */
		printf("; lower = ");
		print_char((unsigned char)ft_tolower(c));
		printf("; upper = ");
		print_char((unsigned char)ft_toupper(c));
		putchar('\n');
	}
	/* EOF チェック */
	if (ft_tolower(EOF) != EOF || ft_toupper(EOF) != EOF)
	{
		printf("EOF BOGUS_conv");
		failures++;
	}
	/* EOF に対する判定関数チェック */
	print_char((unsigned char)EOF);
#undef TRY
#define TRY(func)             \
	if (func(EOF))            \
	{                         \
		printf(" %s", #func); \
		failures++;           \
	}
	TRY(ft_isascii);
	TRYEM;
	putchar('\n');
	return (failures ? EXIT_FAILURE : EXIT_SUCCESS);
}
