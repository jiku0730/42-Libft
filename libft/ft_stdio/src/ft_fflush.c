/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fflush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:37:38 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 15:25:33 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

int	my_fflush(file_t *f)
{
	pthread_mutex_lock(&f->lock);
	if (f->pos > 0)
	{
		if (write(f->fd, f->buf, f->pos) < 0)
		{
			f->flags |= 1;
			pthread_mutex_unlock(&f->lock);
			return (-1);
		}
		f->pos = 0;
	}
	pthread_mutex_unlock(&f->lock);
	return (0);
}
