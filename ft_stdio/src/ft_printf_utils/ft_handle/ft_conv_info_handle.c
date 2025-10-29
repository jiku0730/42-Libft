/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_info_handle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:46:45 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 22:50:09 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

void	conv_info_handle(t_conv_spec *conv_info, va_list args)
{
	if (conv_info->specifier == 'c')
		ft_handle_char(conv_info, va_arg(args, int));
	else if (conv_info->specifier == 's')
		ft_handle_str(conv_info, va_arg(args, char *));
	else if (conv_info->specifier == 'p')
		ft_handle_ptr(conv_info, va_arg(args, void *));
	else if (conv_info->specifier == 'd' || conv_info->specifier == 'i')
		ft_handle_int(conv_info, va_arg(args, int));
	else if (conv_info->specifier == 'u')
		ft_handle_int_u(conv_info, va_arg(args, unsigned int));
	else if (conv_info->specifier == 'x')
		ft_handle_hex_lower(conv_info, va_arg(args, unsigned int));
	else if (conv_info->specifier == 'X')
		ft_handle_hex_upper(conv_info, va_arg(args, unsigned int));
	else if (conv_info->specifier == '%')
		ft_handle_percentage(conv_info);
	else
		return (conv_info->validation = -1, (void)0);
}
