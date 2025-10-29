/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:59:56 by kei2003730        #+#    #+#             */
/*   Updated: 2025/10/29 21:12:06 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <stddef.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <errno.h>
# include "ft_printf_utils.h"

int		ft_getchar(void);
int		ft_printf(const char *format, ...);
int		ft_vprintf(const char *format, va_list *ap);
int		ft_dprintf(int fd, const char *format, ...);
int		ft_vdprintf(int fd, const char *format, va_list *ap);
#endif
