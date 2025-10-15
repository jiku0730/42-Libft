/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstiter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:20:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 17:13:17 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "test_framework.h"

static int	g_iter_count;

static void	iter_function(void *content)
{
	g_iter_count++;
	(void)content;
}

static void	test_iter_empty_list(t_test *ctx)
{
	test_section("Iterate Empty List");
	g_iter_count = 0;
	ft_lstiter(NULL, iter_function);
	assert_eq_int(ctx, 0, g_iter_count);
}

static void	test_iter_single_node(t_test *ctx)
{
	t_list	*lst;

	test_section("Iterate Single Node");
	lst = ft_lstnew("Test");
	g_iter_count = 0;
	ft_lstiter(lst, iter_function);
	assert_eq_int(ctx, 1, g_iter_count);
	free(lst);
}

static void	test_iter_multiple_nodes(t_test *ctx)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	test_section("Iterate Multiple Nodes");
	node1 = ft_lstnew("First");
	node2 = ft_lstnew("Second");
	node3 = ft_lstnew("Third");
	node1->next = node2;
	node2->next = node3;
	g_iter_count = 0;
	ft_lstiter(node1, iter_function);
	assert_eq_int(ctx, 3, g_iter_count);
	free(node1);
	free(node2);
	free(node3);
}

int	main(void)
{
	t_test	ctx;

	test_init(&ctx);
	test_iter_empty_list(&ctx);
	test_iter_single_node(&ctx);
	test_iter_multiple_nodes(&ctx);
	return (test_summary(&ctx));
}
