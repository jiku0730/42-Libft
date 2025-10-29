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

/* Standard includes: must be at the top for norminette */
# include <stddef.h>
# include <stdio.h>
# include <endian.h>

typedef unsigned short	t_ctype_mask;

/* Define masks per endianness. We avoid macro-functions; each mask is a
 * compile-time constant defined by a preprocessor branch. This matches the
 * layout used by the system ctype implementation while keeping the header
 * free of macro functions (norminette rule).
 */
/* Use literal constants only (norminette: PREPROC_CONSTANT). */
# if __BYTE_ORDER == __BIG_ENDIAN
#  define IS_UPPER  0x0100
#  define IS_LOWER  0x0200
#  define IS_ALPHA  0x0400
#  define IS_DIGIT  0x0800
#  define IS_XDIGIT 0x1000
#  define IS_SPACE  0x2000
#  define IS_PRINT  0x4000
#  define IS_GRAPH  0x8000
#  define IS_BLANK  0x0001
#  define IS_CNTRL  0x0002
#  define IS_PUNCT  0x0004
#  define IS_ALNUM  0x0008
# else
#  define IS_UPPER  0x0100
#  define IS_LOWER  0x0200
#  define IS_ALPHA  0x0400
#  define IS_DIGIT  0x0800
#  define IS_XDIGIT 0x1000
#  define IS_SPACE  0x2000
#  define IS_PRINT  0x4000
#  define IS_GRAPH  0x8000
#  define IS_BLANK  0x0001
#  define IS_CNTRL  0x0002
#  define IS_PUNCT  0x0004
#  define IS_ALNUM  0x0008
# endif

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
