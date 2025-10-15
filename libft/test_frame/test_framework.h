/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_framework.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:04:22 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 16:35:05 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_FRAMEWORK_H
# define TEST_FRAMEWORK_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

# define COLOR_GREEN "\033[32m"
# define COLOR_RED "\033[31m"
# define COLOR_BLUE "\033[34m"
# define COLOR_RESET "\033[0m"

typedef struct s_test
{
	int	test_count;
	int	pass_count;
}	t_test;

void	test_section(const char *name);
void	assert_eq_int(t_test *ctx, int expected, int actual);
void	assert_str_eq(t_test *ctx, const char *expected, const char *actual);
void	assert_ptr_eq(t_test *ctx, void *expected, void *actual);
void	assert_null(t_test *ctx, void *ptr);
void	assert_not_null(t_test *ctx, void *ptr);
int		test_summary(t_test *ctx);
void	test_init(t_test *ctx);

#endif
