/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:33:24 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/30 01:42:00 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "test_framework.h"
#include <ctype.h>

int	main(void)
{
	return (test_ctype_all("isalnum", isalnum, ft_isalnum));
}
