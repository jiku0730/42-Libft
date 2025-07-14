/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fgetc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 21:01:15 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/14 12:39:22 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

// int	ft_fgetc(FILE *stream)
// {
// 	unsigned char	c;

// 	return ((fread(&c, 1, 1, stream) == 1) ? c : EOF);
// }

// #define _GNU_SOURCE
// #include <errno.h>
// #include <sys/syscall.h>
// #include <unistd.h>

// /* read の再実装 */
// ssize_t	my_read(int fd, void *buf, size_t count)
// {
// 	long	ret;

// 	ret = syscall(SYS_read, fd, buf, count);
// 	if (ret < 0)
// 	{
// 		/* syscall が負のエラーコードを返す場合、それを errno にセット */
// 		errno = -ret;
// 		return (-1);
// 	}
// 	return (ret);
// }

// /* write の再実装 */
// ssize_t	my_write(int fd, const void *buf, size_t count)
// {
// 	long	ret;

// 	ret = syscall(SYS_write, fd, buf, count);
// 	if (ret < 0)
// 	{
// 		errno = -ret;
// 		return (-1);
// 	}
// 	return (ret);
// }
