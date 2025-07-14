/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:45:53 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/14 11:45:56 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "ft_printf_utils.h"

int			ft_dprintf(int fd, const char *format, ...);
int			ft_vdprintf(int fd, const char *format, va_list *ap);
int			ft_printf(const char *format, ...);
int			ft_vprintf(const char *format, va_list *ap);

#endif
