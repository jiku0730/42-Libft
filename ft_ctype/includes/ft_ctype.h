/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:13:00 by kjikuhar        #+#    #+#             */
/*   Updated: 2025/10/29 22:17:29 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

# include <stddef.h>

typedef unsigned short	t_ctype_mask;

/* Bit definitions for character classification */
enum {
	IS_UPPER = 1u << 0,
	IS_LOWER = 1u << 1,
	IS_ALPHA = 1u << 2,
	IS_DIGIT = 1u << 3,
	IS_XDIGIT = 1u << 4,
	IS_SPACE = 1u << 5,
	IS_PRINT = 1u << 6,
	IS_GRAPH = 1u << 7,
	IS_BLANK = 1u << 8,
	IS_CNTRL = 1u << 9,
	IS_PUNCT = 1u << 10,
	IS_ALNUM = 1u << 11
};

/* Table access function */
const t_ctype_mask		*ft_get_ctype_table(void);

/* Character classification functions */
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isblank(int c);
int						ft_iscntrl(int c);
int						ft_isdigit(int c);
int						ft_isgraph(int c);
int						ft_islower(int c);
int						ft_isprint(int c);
int						ft_ispunct(int c);
int						ft_isspace(int c);
int						ft_isupper(int c);
int						ft_isxdigit(int c);

/* Character conversion functions */
int						ft_tolower(int c);
int						ft_toupper(int c);

#endif
