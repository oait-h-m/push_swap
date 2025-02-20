/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_elements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:14:42 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/08 15:15:42 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_a, t_list **stack_b)
{
	t_list	*second;
	t_list	*first;

	if (*stack_a == NULL)
		return ;
	if (*stack_b == NULL)
	{
		*stack_b = *stack_a;
		*stack_a = (*stack_b)->next;
		(*stack_b)->next = NULL;
	}
	else
	{
		second = (*stack_a)->next;
		first = *stack_a;
		(*stack_a)->next = *stack_b;
		*stack_a = second;
		*stack_b = first;
	}
}

void	pa(t_list **stack_a, t_list **stack_b, int a)
{
	if (*stack_b == NULL)
		return ;
	push(stack_b, stack_a);
	if (a)
		write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b, int a)
{
	if (*stack_a == NULL)
		return ;
	push(stack_a, stack_b);
	if (a)
		write(1, "pb\n", 3);
}
