/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstclear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:20:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 17:13:17 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "test_framework.h"
#include <string.h>

static int	g_del_count;

static void	del_function(void *content)
{
	g_del_count++;
	free(content);
}

static void	test_clear_empty_list(t_test *ctx)
{
	t_list	*lst;

	test_section("Clear Empty List");
	lst = NULL;
	g_del_count = 0;
	ft_lstclear(&lst, del_function);
	assert_null(ctx, lst);
	assert_eq_int(ctx, 0, g_del_count);
}

static void	test_clear_single_node(t_test *ctx)
{
	t_list	*lst;
	char	*str;

	test_section("Clear Single Node");
	str = malloc(10);
	if (str)
		strcpy(str, "Test");
	lst = ft_lstnew(str);
	g_del_count = 0;
	ft_lstclear(&lst, del_function);
	assert_null(ctx, lst);
	assert_eq_int(ctx, 1, g_del_count);
}

static void	test_clear_multiple_nodes(t_test *ctx)
{
	t_list	*lst;
	char	*str1;
	char	*str2;
	char	*str3;

	test_section("Clear Multiple Nodes");
	str1 = malloc(10);
	str2 = malloc(10);
	str3 = malloc(10);
	if (str1)
		strcpy(str1, "First");
	if (str2)
		strcpy(str2, "Second");
	if (str3)
		strcpy(str3, "Third");
	lst = ft_lstnew(str1);
	lst->next = ft_lstnew(str2);
	lst->next->next = ft_lstnew(str3);
	g_del_count = 0;
	ft_lstclear(&lst, del_function);
	assert_null(ctx, lst);
	assert_eq_int(ctx, 3, g_del_count);
}

int	main(void)
{
	t_test	ctx;

	test_init(&ctx);
	test_clear_empty_list(&ctx);
	test_clear_single_node(&ctx);
	test_clear_multiple_nodes(&ctx);
	return (test_summary(&ctx));
}
