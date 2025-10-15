/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstlast.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:20:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 17:13:16 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "test_framework.h"

static void	test_empty_list(t_test *ctx)
{
	test_section("Empty List");
	assert_null(ctx, ft_lstlast(NULL));
}

static void	test_single_node(t_test *ctx)
{
	t_list	*lst;
	t_list	*last;

	test_section("Single Node");
	lst = ft_lstnew("Only");
	last = ft_lstlast(lst);
	assert_ptr_eq(ctx, lst, last);
	assert_str_eq(ctx, "Only", (char *)last->content);
	free(lst);
}

static void	test_multiple_nodes(t_test *ctx)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	test_section("Multiple Nodes");
	node1 = ft_lstnew("First");
	node2 = ft_lstnew("Second");
	node3 = ft_lstnew("Third");
	node1->next = node2;
	node2->next = node3;
	last = ft_lstlast(node1);
	assert_ptr_eq(ctx, node3, last);
	assert_str_eq(ctx, "Third", (char *)last->content);
	assert_null(ctx, last->next);
	free(node1);
	free(node2);
	free(node3);
}

int	main(void)
{
	t_test	ctx;

	test_init(&ctx);
	test_empty_list(&ctx);
	test_single_node(&ctx);
	test_multiple_nodes(&ctx);
	return (test_summary(&ctx));
}
