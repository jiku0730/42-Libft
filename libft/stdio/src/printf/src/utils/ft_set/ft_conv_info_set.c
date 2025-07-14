/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_info_set_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:25:38 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/07/14 10:42:16 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

void	conv_info_set(char **str, t_conv_spec *conv_info)
{
	set_flags(str, conv_info->flags);
	set_field_width(str, conv_info);
	if (**str == '.')
	{
		(*str)++;
		set_precision(str, conv_info);
	}
	set_specifier(str, conv_info);
}
