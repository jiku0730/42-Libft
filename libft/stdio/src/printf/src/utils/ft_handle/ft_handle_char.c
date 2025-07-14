/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_char_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:11:48 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/07/14 10:42:16 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

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
