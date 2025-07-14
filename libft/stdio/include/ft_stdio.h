/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:59:56 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/14 12:23:17 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <stdio.h>
# include <stdarg.h>
#include "ft_printf_utils.h"

int		ft_getchar(void);
int		ft_getc(FILE *stream);
int		ft_fgetc(FILE *stream);
int		ft_putc(int c, FILE *stream);
int		ft_puts(const char *s, FILE *stream);
int		ft_printf(const char *format, ...);
int		ft_vprintf(const char *format, va_list *ap);
int		ft_dprintf(int fd, const char *format, ...);
int		ft_vdprintf(int fd, const char *format, va_list *ap);

#endif
