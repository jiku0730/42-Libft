/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:24:36 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 15:36:25 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

int	ft_iscntrl(int c)
{
	return ((ft_get_ctype_table()[(unsigned char)(c)] & FT_IS_CNTRL) != 0);
}
