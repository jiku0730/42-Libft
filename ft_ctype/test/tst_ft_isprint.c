/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 01:00:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/30 01:48:18 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "test_framework.h"
#include <ctype.h>

int	main(void)
{
	return (test_ctype_all("isprint", isprint, ft_isprint));
}
