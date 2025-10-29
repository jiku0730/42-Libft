/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_percentage.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:11:16 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 22:50:09 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

void	ft_handle_percentage(t_conv_spec *conv_info)
{
	char	*str;

	str = ft_strdup_printf("%");
	if (!str)
		return (conv_info->validation = -1, (void)0);
	conv_info->output_str = str;
	conv_info->output_length = ft_strlen_printf(str);
}
