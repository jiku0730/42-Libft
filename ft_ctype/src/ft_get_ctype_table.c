/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_ctype_table.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:30:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 15:43:03 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

const t_ctype_mask	*ft_get_ctype_table(void)
{
	static const t_ctype_mask	table[256] = {
	[0 ...8] = FT_IS_CNTRL, [14 ...31] = FT_IS_CNTRL, [127] = FT_IS_CNTRL,
	[' '] = FT_IS_SPACE | FT_IS_BLANK | FT_IS_PRINT,
	['\t'] = FT_IS_SPACE | FT_IS_BLANK | FT_IS_CNTRL,
	['\n'] = FT_IS_SPACE | FT_IS_CNTRL, ['\r'] = FT_IS_SPACE | FT_IS_CNTRL,
	['\v'] = FT_IS_SPACE | FT_IS_CNTRL, ['\f'] = FT_IS_SPACE | FT_IS_CNTRL,
	['0' ...'9'] = FT_IS_DIGIT | FT_IS_XDIGIT | FT_IS_ALNUM | FT_IS_PRINT
		| FT_IS_GRAPH,
	['A' ...'F'] = FT_IS_UPPER | FT_IS_ALPHA | FT_IS_XDIGIT | FT_IS_ALNUM
		| FT_IS_PRINT | FT_IS_GRAPH,
	['G' ...'Z'] = FT_IS_UPPER | FT_IS_ALPHA | FT_IS_ALNUM | FT_IS_PRINT
		| FT_IS_GRAPH,
	['a' ...'f'] = FT_IS_LOWER | FT_IS_ALPHA | FT_IS_XDIGIT | FT_IS_ALNUM
		| FT_IS_PRINT | FT_IS_GRAPH,
	['g' ...'z'] = FT_IS_LOWER | FT_IS_ALPHA | FT_IS_ALNUM | FT_IS_PRINT
		| FT_IS_GRAPH,
	[33 ...47] = FT_IS_PUNCT | FT_IS_PRINT | FT_IS_GRAPH,
	[58 ...64] = FT_IS_PUNCT | FT_IS_PRINT | FT_IS_GRAPH,
	[91 ...96] = FT_IS_PUNCT | FT_IS_PRINT | FT_IS_GRAPH,
	[123 ...126] = FT_IS_PUNCT | FT_IS_PRINT | FT_IS_GRAPH,
	};

	return (table);
}
