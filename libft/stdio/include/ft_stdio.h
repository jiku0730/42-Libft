/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:59:56 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/13 21:00:04 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <stdio.h>

int		ft_getchar(void);
int		ft_putc(int c, FILE *stream);
int		ft_puts(const char *s, FILE *stream);

#endif
