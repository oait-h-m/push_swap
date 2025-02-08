/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 21:35:08 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/07 21:36:07 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*sa(t_list **stack_a)
{
	t_list	*last;

	if (stack_a == NULL || *stack_a == NULL || (*stack_a)->next == NULL)
		return (NULL);
	last = (*stack_a)->next;
	(*stack_a)->next = last->next;
	last->next = *stack_a;
	*stack_a = last;
	write (1, "sa\n", 3);
	return (*stack_a);
}

t_list	*sb(t_list **stack_b)
{
	t_list	*last;

	if (stack_b == NULL || *stack_b == NULL || (*stack_b)->next == NULL)
		return (NULL);
	last = (*stack_b)->next;
	(*stack_b)->next = last->next;
	last->next = *stack_b;
	*stack_b = last;
	write (1, "sb\n", 3);
	return (*stack_b);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write (1, "ss\n", 3);
}
