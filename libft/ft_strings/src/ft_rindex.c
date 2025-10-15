/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rindex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:00:01 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 15:25:33 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

char	*ft_rindex(const char *s, int c)
{
	const char	*last;
	char		target;

	if (s == NULL)
		return (NULL);
	target = (char)c;
	last = NULL;
	while (*s)
	{
		if (*s == target)
			last = s;
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return ((char *)last);
}
