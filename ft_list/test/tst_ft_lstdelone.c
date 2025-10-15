/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstdelone.c                                 :+:      :+:    :+:   */
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

static int	g_del_called;

static void	del_function(void *content)
{
	g_del_called++;
	free(content);
}

static void	test_delete_node_with_content(t_test *ctx)
{
	t_list	*node;
	char	*str;

	test_section("Delete Node with Content");
	g_del_called = 0;
	str = malloc(10);
	if (str)
		strcpy(str, "Test");
	node = ft_lstnew(str);
	ft_lstdelone(node, del_function);
	assert_eq_int(ctx, 1, g_del_called);
}

static void	test_delete_node_null_content(t_test *ctx)
{
	t_list	*node;

	test_section("Delete Node with NULL Content");
	g_del_called = 0;
	node = ft_lstnew(NULL);
	ft_lstdelone(node, del_function);
	assert_eq_int(ctx, 0, g_del_called);
}

int	main(void)
{
	t_test	ctx;

	test_init(&ctx);
	test_delete_node_with_content(&ctx);
	test_delete_node_null_content(&ctx);
	return (test_summary(&ctx));
}
