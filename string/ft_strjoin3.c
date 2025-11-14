/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:16:39 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/11/14 17:22:23 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin3(const char *s1, const char *s2, const char *s3)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	s3_len;
	char	*s1_s2_s3;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3_len = ft_strlen(s3);
	s1_s2_s3 = malloc(sizeof(char) * (s1_len + s2_len + s3_len + 1));
	if (!s1_s2_s3)
		return (NULL);
	ft_strlcpy(s1_s2_s3, s1, s1_len + 1);
	ft_strlcpy(s1_s2_s3 + s1_len, s2, s2_len + 1);
	ft_strlcpy(s1_s2_s3 + s1_len + s2_len, s3, s3_len + 1);
	return (s1_s2_s3);
}
