/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fgetc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 21:01:15 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 17:18:54 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#define _GNU_SOURCE
#include <unistd.h>

int	ft_fgetc(FILE *stream)
{
	unsigned char	c;
	ssize_t			bytes_read;

	bytes_read = fread(&c, 1, 1, stream);
	if (bytes_read == 1)
		return (c);
	return (EOF);
}
