/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_sa_sb_ss.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyojun <jaeyojun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:36:12 by jaeyojun          #+#    #+#             */
/*   Updated: 2023/06/22 16:19:26 by jaeyojun         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./checker.h"

void	sa(t_stack **a)
{
	t_node	*change;
	int		tmp;

	if (!((*a)->top))
		return ;
	change = (*a)->top;
	if (!(change->next))
		return ;
	change = change->next;
	tmp = change->content;
	change->content = (*a)->top->content;
	(*a)->top->content = tmp;
}

void	sb(t_stack **b)
{
	t_node	*change;
	int		tmp;

	if (!((*b)->top))
		return ;
	change = (*b)->top;
	if (!(change->next))
		return ;
	change = change->next;
	tmp = change->content;
	change->content = (*b)->top->content;
	(*b)->top->content = tmp;
}

void	ss(t_stack **a, t_stack **b)
{
	t_node	*change_a;
	t_node	*change_b;
	int		tmp;

	if (!((*a)->top))
		return ;
	change_a = (*a)->top;
	if (!(change_a->next))
		return ;
	change_a = change_a->next;
	tmp = change_a->content;
	change_a->content = (*a)->top->content;
	(*a)->top->content = tmp;
	if (!((*b)->top))
		return ;
	change_b = (*b)->top;
	if (!(change_b->next))
		return ;
	change_b = change_b->next;
	tmp = change_b->content;
	change_b->content = (*b)->top->content;
	(*b)->top->content = tmp;
}
