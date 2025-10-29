/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:12:03 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 22:50:09 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

static int	is_flag(char c)
{
	return (c == '#' || c == ' ' || c == '+' || c == '-' || c == '0');
}

void	set_flags(char **str, t_flags *flags)
{
	while (is_flag(**str))
	{
		if (**str == '-')
			flags->minus = 1;
		if (**str == '0')
			flags->zero = 1;
		if (**str == '#')
			flags->sharp = 1;
		if (**str == ' ')
			flags->space = 1;
		if (**str == '+')
			flags->plus = 1;
		(*str)++;
	}
}
