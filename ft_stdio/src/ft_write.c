/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:55:01 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 15:25:33 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <sys/syscall.h>
#include <errno.h>

/* write の再実装 */
ssize_t	ft_write(int fd, const void *buf, size_t count)
{
	long	ret;

	ret = syscall(SYS_write, fd, buf, count);
	if (ret < 0)
	{
		errno = -ret;
		return (-1);
	}
	return (ret);
}
