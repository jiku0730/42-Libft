/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 01:30:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/11/11 02:33:12 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_qsort_int(int *array, int left, int right)
{
	int	pivot_idx;

	if (left < right)
	{
		pivot_idx = ft_partition_int(array, left, right);
		ft_qsort_int(array, left, pivot_idx - 1);
		ft_qsort_int(array, pivot_idx + 1, right);
	}
}
