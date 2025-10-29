/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:11:48 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 22:50:09 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

void	ft_handle_char(t_conv_spec *conv_info, int c)
{
	unsigned char	*casted_uc;

	casted_uc = malloc(sizeof(unsigned char) * 2);
	if (!casted_uc)
		return (conv_info->validation = -1, (void)0);
	casted_uc[0] = (unsigned char)c;
	casted_uc[1] = '\0';
	conv_info->output_str = (char *)casted_uc;
	conv_info->output_length = 1;
}
