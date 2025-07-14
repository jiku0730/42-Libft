/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:53:07 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/14 17:04:40 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

typedef struct
{
	int	quot;
	int	rem;
}	ft_div_t;

typedef struct
{
	long	quot;
	long	rem;
}	ft_ldiv_t;

typedef struct
{
	long long	quot;
	long long	rem;
}	ft_lldiv_t;

int			ft_abs(int i);
long		ft_labs(long i);
long long	ft_llabs(long long i);
ft_div_t	ft_div(int numer, int denom);
ft_ldiv_t	ft_ldiv(long numer, long denom);
ft_lldiv_t	ft_lldiv(long long numer, long long denom);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);

#endif
