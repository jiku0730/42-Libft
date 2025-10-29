/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_template.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:46:43 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 23:26:57 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

int	test_ctype_and_ftctype(int (*ctype_f)(int), int (*ft_ctype_f)(int))
{
	int	i;
	int	mismatched;

	mismatched = 0;
	if (ctype_f(EOF) != ft_ctype_f(EOF))
		mismatched++;
	i = 0;
	while (i < 256)
	{
		if (ctype_f((unsigned char)i) != ft_ctype_f((unsigned char)i))
		{
			printf("%uc\n", (unsigned char)i);
			mismatched++;
		}
		i++;
	}
	return (mismatched);
}
