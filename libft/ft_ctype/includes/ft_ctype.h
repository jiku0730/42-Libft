/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:13:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 16:05:38 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

# include <stddef.h>

typedef unsigned short	t_ctype_mask;

/*
** Bit flags for character type classification
** Uses the same bit layout as standard C library (with byte swapping)
*/
enum	e_ctype_bits
{
	FT_IS_UPPER = ((1u << 0) << 8),
	FT_IS_LOWER = ((1u << 1) << 8),
	FT_IS_ALPHA = ((1u << 2) << 8),
	FT_IS_DIGIT = ((1u << 3) << 8),
	FT_IS_XDIGIT = ((1u << 4) << 8),
	FT_IS_SPACE = ((1u << 5) << 8),
	FT_IS_PRINT = ((1u << 6) << 8),
	FT_IS_GRAPH = ((1u << 7) << 8),
	FT_IS_BLANK = ((1u << 8) >> 8),
	FT_IS_CNTRL = ((1u << 9) >> 8),
	FT_IS_PUNCT = ((1u << 10) >> 8),
	FT_IS_ALNUM = ((1u << 11) >> 8)
};

/*
** Table getter function
** Returns a pointer to the ctype table initialized once with static variable
*/
const t_ctype_mask	*ft_get_ctype_table(void);

/*
** Function declarations
*/
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isblank(int c);
int					ft_iscntrl(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_ispunct(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_isxdigit(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

#endif
