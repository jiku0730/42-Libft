/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_partition_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 02:33:07 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/11/11 02:33:11 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	median_of_three(int *array, int left, int right)
{
	int	mid;

	mid = left + (right - left) / 2;
	if (array[left] > array[mid])
		ft_swap(&array[left], &array[mid]);
	if (array[left] > array[right])
		ft_swap(&array[left], &array[right]);
	if (array[mid] > array[right])
		ft_swap(&array[mid], &array[right]);
	ft_swap(&array[mid], &array[right - 1]);
	return (array[right - 1]);
}

int	ft_partition_int(int *array, int left, int right)
{
	int	pivot;
	int	i;
	int	j;

	if (right - left < 3)
		pivot = array[right];
	else
		pivot = median_of_three(array, left, right);
	i = left - 1;
	j = left;
	while (j < right)
	{
		if (array[j] <= pivot)
		{
			i++;
			ft_swap(&array[i], &array[j]);
		}
		j++;
	}
	ft_swap(&array[i + 1], &array[right]);
	return (i + 1);
}
