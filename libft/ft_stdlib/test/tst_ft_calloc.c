/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_calloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:04:22 by kei2003730        #+#    #+#             */
/*   Updated: 2025/07/16 16:44:15 by kei2003730       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "test_framework.h"
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

TEST_INIT();

static void test_basic_allocation(void)
{
    TEST_SECTION("Basic Allocation");

    void *ptr = ft_calloc(10, sizeof(int));
    ASSERT_NOT_NULL(ptr);

    // Check if memory is zeroed
    int *int_ptr = (int*)ptr;
    for (int i = 0; i < 10; i++) {
        ASSERT_EQ(0, int_ptr[i], "%d");
    }

    free(ptr);
}

static void test_zero_allocation(void)
{
    TEST_SECTION("Zero Allocation");

    void *ptr1 = ft_calloc(0, sizeof(int));
    void *ptr2 = ft_calloc(10, 0);
    void *ptr3 = ft_calloc(0, 0);

    // Behavior may vary, but should not crash
    if (ptr1) free(ptr1);
    if (ptr2) free(ptr2);
    if (ptr3) free(ptr3);
}

static void test_large_allocation(void)
{
    TEST_SECTION("Large Allocation");

    void *ptr = ft_calloc(1000, sizeof(char));
    ASSERT_NOT_NULL(ptr);

    // Check if memory is zeroed
    char *char_ptr = (char*)ptr;
    for (int i = 0; i < 1000; i++) {
        ASSERT_EQ(0, char_ptr[i], "%d");
    }

    free(ptr);
}

static void test_overflow_protection(void)
{
    TEST_SECTION("Overflow Protection");

    // Test for size_t overflow
    void *ptr = ft_calloc(SIZE_MAX, 2);
    ASSERT_NULL(ptr);

    ptr = ft_calloc(SIZE_MAX / 2 + 1, 2);
    ASSERT_NULL(ptr);
}

int main(void)
{
    printf("ft_calloc Automated Test Suite\n");
    printf("==============================\n\n");

    test_basic_allocation();
    test_zero_allocation();
    test_large_allocation();
    test_overflow_protection();

    TEST_SUMMARY();
}
