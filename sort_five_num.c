/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:19:19 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/18 00:23:05 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack_a)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	int num1, (num2), (num3);
	num1 = (*stack_a)->value;
	num2 = (*stack_a)->next->value;
	num3 = (*stack_a)->next->next->value;
	if (num1 < num2 && num2 > num3 && num3 > num1)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (num1 > num2 && num1 > num3 && num2 < num3)
		ra(stack_a);
	else if (num1 > num2 && num2 > num3 && num3 < num1)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (num1 > num2 && num2 < num3 && num3 > num1)
		sa(stack_a);
	else
		rra(stack_a);
}

void	sort_four_elements(t_list **stack_a, t_list **stack_b)
{
	find_and_pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five_elements(t_list **stack_a, t_list **stack_b)
{
	find_and_pb(stack_a, stack_b);
	find_and_pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

int	is_sorted(t_list *stack_a)
{
	t_list	*tmp;

	tmp = stack_a;
	while (tmp)
	{
		if (tmp->next && tmp->value > tmp->next->value)
			return (0);
		else
			tmp = tmp->next;
	}
	return (1);
}
