/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:09:48 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 22:22:09 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

const t_ctype_mask	*ft_get_ctype_table(void)
{
	static const t_ctype_mask	table[256] = {
	[0 ...8] = IS_CNTRL,
	[14 ...31] = IS_CNTRL,
	[127] = IS_CNTRL,
	[' '] = IS_SPACE | IS_BLANK | IS_PRINT,
	['\t'] = IS_SPACE | IS_BLANK | IS_CNTRL,
	['\n'] = IS_SPACE | IS_CNTRL,
	['\r'] = IS_SPACE | IS_CNTRL,
	['\v'] = IS_SPACE | IS_CNTRL,
	['\f'] = IS_SPACE | IS_CNTRL,
	['0' ...'9'] = IS_DIGIT | IS_XDIGIT | IS_ALNUM | IS_PRINT | IS_GRAPH,
	['A' ...'F'] = IS_UPPER | IS_ALPHA | IS_XDIGIT | IS_ALNUM | IS_PRINT \
| IS_GRAPH,
	['G' ...'Z'] = IS_UPPER | IS_ALPHA | IS_ALNUM | IS_PRINT | IS_GRAPH,
	['a' ...'f'] = IS_LOWER | IS_ALPHA | IS_XDIGIT | IS_ALNUM | IS_PRINT \
| IS_GRAPH,
	['g' ...'z'] = IS_LOWER | IS_ALPHA | IS_ALNUM | IS_PRINT | IS_GRAPH,
	[33 ...47] = IS_PUNCT | IS_PRINT | IS_GRAPH,
	[58 ...64] = IS_PUNCT | IS_PRINT | IS_GRAPH,
	[91 ...96] = IS_PUNCT | IS_PRINT | IS_GRAPH,
	[123 ...126] = IS_PUNCT | IS_PRINT | IS_GRAPH,
	};

	return (table);
}
