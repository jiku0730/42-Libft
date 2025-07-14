/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_str_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:18:13 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/07/14 10:48:02 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

void	ft_output_str(int fd, t_conv_spec *conv_info)
{
	t_flags	*flags;

	flags = conv_info->flags;
	if (flags->sharp == 1)
		return (conv_info->validation = -1, (void)0);
	ft_output_field_width(fd, conv_info);
}
