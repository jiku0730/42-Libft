/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:20:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/15 17:07:57 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "test_framework.h"

static void	test_basic_creation(t_test *ctx)
{
	t_list	*node;
	char	*str;

	test_section("Basic Node Creation");
	str = "Hello";
	node = ft_lstnew(str);
	assert_not_null(ctx, node);
	assert_ptr_eq(ctx, str, node->content);
	assert_null(ctx, node->next);
	free(node);
}

static void	test_null_content(t_test *ctx)
{
	t_list	*node;

	test_section("Node with NULL Content");
	node = ft_lstnew(NULL);
	assert_not_null(ctx, node);
	assert_null(ctx, node->content);
	assert_null(ctx, node->next);
	free(node);
}

static void	test_different_types(t_test *ctx)
{
	t_list	*node_int;
	t_list	*node_str;
	int		*num;
	char	*str;

	test_section("Different Content Types");
	num = malloc(sizeof(int));
	*num = 42;
	node_int = ft_lstnew(num);
	assert_not_null(ctx, node_int);
	assert_ptr_eq(ctx, num, node_int->content);
	assert_eq_int(ctx, 42, *(int *)node_int->content);
	str = "Test";
	node_str = ft_lstnew(str);
	assert_not_null(ctx, node_str);
	assert_ptr_eq(ctx, str, node_str->content);
	free(num);
	free(node_int);
	free(node_str);
}

int	main(void)
{
	t_test	ctx;

	test_init(&ctx);
	test_basic_creation(&ctx);
	test_null_content(&ctx);
	test_different_types(&ctx);
	return (test_summary(&ctx));
}
