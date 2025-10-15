/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstadd_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:20:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 17:10:10 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "test_framework.h"

static void	test_add_to_empty_list(t_test *ctx)
{
	t_list	*lst;
	t_list	*new;

	test_section("Add to Empty List");
	lst = NULL;
	new = ft_lstnew("First");
	ft_lstadd_front(&lst, new);
	assert_ptr_eq(ctx, new, lst);
	assert_str_eq(ctx, "First", (char *)lst->content);
	assert_null(ctx, lst->next);
	free(lst);
}

static void	test_add_to_existing_list(t_test *ctx)
{
	t_list	*lst;
	t_list	*first;
	t_list	*second;

	test_section("Add to Existing List");
	first = ft_lstnew("First");
	lst = first;
	second = ft_lstnew("Second");
	ft_lstadd_front(&lst, second);
	assert_ptr_eq(ctx, second, lst);
	assert_str_eq(ctx, "Second", (char *)lst->content);
	assert_ptr_eq(ctx, first, lst->next);
	assert_str_eq(ctx, "First", (char *)lst->next->content);
	free(first);
	free(second);
}

static void	test_multiple_adds(t_test *ctx)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	test_section("Multiple Sequential Adds");
	lst = NULL;
	node1 = ft_lstnew("1");
	node2 = ft_lstnew("2");
	node3 = ft_lstnew("3");
	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node3);
	assert_ptr_eq(ctx, node3, lst);
	assert_str_eq(ctx, "3", (char *)lst->content);
	assert_str_eq(ctx, "2", (char *)lst->next->content);
	assert_str_eq(ctx, "1", (char *)lst->next->next->content);
	assert_null(ctx, lst->next->next->next);
	free(node1);
	free(node2);
	free(node3);
}

int	main(void)
{
	t_test	ctx;

	test_init(&ctx);
	test_add_to_empty_list(&ctx);
	test_add_to_existing_list(&ctx);
	test_multiple_adds(&ctx);
	return (test_summary(&ctx));
}
