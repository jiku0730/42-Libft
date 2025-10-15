/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstmap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:20:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 17:13:18 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "test_framework.h"
#include <string.h>

static void	*duplicate_content(void *content)
{
	char	*str;
	char	*new_str;

	str = (char *)content;
	new_str = malloc(strlen(str) + 1);
	if (new_str)
		strcpy(new_str, str);
	return (new_str);
}

static void	del_function(void *content)
{
	free(content);
}

static void	test_map_empty_list(t_test *ctx)
{
	t_list	*result;

	test_section("Map Empty List");
	result = ft_lstmap(NULL, duplicate_content, del_function);
	assert_null(ctx, result);
}

static void	test_map_single_node(t_test *ctx)
{
	t_list	*lst;
	t_list	*result;

	test_section("Map Single Node");
	lst = ft_lstnew("Test");
	result = ft_lstmap(lst, duplicate_content, del_function);
	assert_not_null(ctx, result);
	assert_str_eq(ctx, "Test", (char *)result->content);
	assert_null(ctx, result->next);
	free(lst);
	ft_lstclear(&result, del_function);
}

static void	test_map_multiple_nodes(t_test *ctx)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*result;

	test_section("Map Multiple Nodes");
	node1 = ft_lstnew("First");
	node2 = ft_lstnew("Second");
	node3 = ft_lstnew("Third");
	node1->next = node2;
	node2->next = node3;
	result = ft_lstmap(node1, duplicate_content, del_function);
	assert_not_null(ctx, result);
	assert_str_eq(ctx, "First", (char *)result->content);
	assert_str_eq(ctx, "Second", (char *)result->next->content);
	assert_str_eq(ctx, "Third", (char *)result->next->next->content);
	free(node1);
	free(node2);
	free(node3);
	ft_lstclear(&result, del_function);
}

int	main(void)
{
	t_test	ctx;

	test_init(&ctx);
	test_map_empty_list(&ctx);
	test_map_single_node(&ctx);
	test_map_multiple_nodes(&ctx);
	return (test_summary(&ctx));
}
