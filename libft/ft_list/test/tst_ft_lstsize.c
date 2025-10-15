/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:20:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 17:09:40 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "test_framework.h"

static void	test_empty_list(t_test *ctx)
{
	test_section("Empty List");
	assert_eq_int(ctx, 0, ft_lstsize(NULL));
}

static void	test_single_node(t_test *ctx)
{
	t_list	*lst;

	test_section("Single Node");
	lst = ft_lstnew("Single");
	assert_eq_int(ctx, 1, ft_lstsize(lst));
	free(lst);
}

static void	test_multiple_nodes(t_test *ctx)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	test_section("Multiple Nodes");
	node1 = ft_lstnew("1");
	node2 = ft_lstnew("2");
	node3 = ft_lstnew("3");
	lst = node1;
	node1->next = node2;
	node2->next = node3;
	assert_eq_int(ctx, 3, ft_lstsize(lst));
	free(node1);
	free(node2);
	free(node3);
}

static void	test_many_nodes(t_test *ctx)
{
	t_list	*lst;
	t_list	*nodes[10];
	int		i;

	test_section("Many Nodes (10)");
	i = 0;
	while (i < 10)
	{
		nodes[i] = ft_lstnew("Node");
		if (i > 0)
			nodes[i - 1]->next = nodes[i];
		i++;
	}
	lst = nodes[0];
	assert_eq_int(ctx, 10, ft_lstsize(lst));
	i = 0;
	while (i < 10)
	{
		free(nodes[i]);
		i++;
	}
}

int	main(void)
{
	t_test	ctx;

	test_init(&ctx);
	test_empty_list(&ctx);
	test_single_node(&ctx);
	test_multiple_nodes(&ctx);
	test_many_nodes(&ctx);
	return (test_summary(&ctx));
}
