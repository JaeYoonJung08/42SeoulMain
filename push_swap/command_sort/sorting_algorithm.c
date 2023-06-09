/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyojun <jaeyojun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:38:25 by jaeyojun          #+#    #+#             */
/*   Updated: 2023/06/09 20:31:55 by jaeyojun         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../head/push_swap.h"

void	sort_algorithm(t_stack **a, t_stack **b, int array_size)
{
	printf("b size  : %d %d\n",(*b)->size, array_size);

	ra(a);
	ra(a);
    t_node *s;
    s = (*a)->top;
    int i = 0;
    while (i < array_size + 1)
    {
        printf("a[%d] : %d\n", i , s->content);
        i++;
        s = s->next;
    }
    // printf("b->top->content : %d\n", (*a)->top->content);
	// printf("stack_b_bottom : %d\n", (*b)->bottom->content);
}