/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_framework.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:04:22 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/30 00:50:00 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_FRAMEWORK_H
# define TEST_FRAMEWORK_H

# include <stdio.h>
# include <string.h>

/* Test result tracking */
extern intg_test_count;
extern intg_pass_count;

/* Test functions */
voidtest_section(const char *name);
voidassert_int_eq(int expected, int actual, const char *expr);
voidassert_str_eq(const char *expected, const char *actual);
voidassert_null(void *ptr, const char *expr);
voidassert_not_null(void *ptr, const char *expr);
voidassert_true(int cond, const char *expr);
voidassert_false(int cond, const char *expr);
inttest_summary(void);

/* Convenience macros */
# define TEST_SECTION(name) test_section(name)
# define ASSERT_EQ(exp, act, fmt) assert_int_eq((exp), (act), #exp " == " #act)
# define ASSERT_STR_EQ(exp, act) assert_str_eq((exp), (act))
# define ASSERT_NULL(ptr) assert_null((void *)(ptr), #ptr)
# define ASSERT_NOT_NULL(ptr) assert_not_null((void *)(ptr), #ptr)
# define ASSERT_TRUE(cond) assert_true((cond), #cond)
# define ASSERT_FALSE(cond) assert_false((cond), #cond)
# define TEST_SUMMARY() test_summary()

#endif
