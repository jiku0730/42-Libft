/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_framework.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:04:22 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/30 01:41:45 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_FRAMEWORK_H
# define TEST_FRAMEWORK_H

# include <stdio.h>
# include <string.h>

/* Color codes for terminal output */
# define C_GREEN "\033[32m"
# define C_RED "\033[31m"
# define C_BLUE "\033[34m"
# define C_RESET "\033[0m"


/* Test result tracking */
extern intg_test_count;
extern intg_pass_count;

/* Test functions */
void	test_section(const char *name);
void	assert_int_eq(int expected, int actual, const char *expr);
void	assert_str_eq(const char *expected, const char *actual);
void	assert_null(void *ptr, const char *expr);
void	assert_not_null(void *ptr, const char *expr);
void	assert_true(int cond, const char *expr);
void	assert_false(int cond, const char *expr);
int		test_summary(void);

/* Ctype test template */
typedef int	(*t_ctype_func)(int);
int		test_ctype_all(const char *name, t_ctype_func std_func,
			t_ctype_func ft_func);

#endif
