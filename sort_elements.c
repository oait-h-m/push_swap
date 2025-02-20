/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_elements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:24:13 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/17 19:29:44 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_of(int value, int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

int	position_in_stack(int value, t_list *stack)
{
	int	position;

	position = 0;
	while (stack)
	{
		if (stack->value == value)
			return (position);
		stack = stack->next;
		position++;
	}
	return (position);
}

void	push_sorted_numbers(t_list **stack_a, t_list **stack_b, int *arr)
{
	int half, (index), (size);
	size = count_list(*stack_b);
	while (*stack_b)
	{
		index = position_in_stack(arr[size - 1], *stack_b);
		half = size / 2;
		if (index <= half)
		{
			while ((*stack_b)->value != arr[size - 1])
				rb(stack_b, 1);
		}
		else
		{
			while ((*stack_b)->value != arr[size - 1])
				rrb(stack_b, 1);
		}
		pa(stack_a, stack_b, 1);
		size--;
	}
}

void	best_moves(t_list **stack_a, t_list **stack_b, int size, int max)
{
	int *arr, (min), (index);
	arr = sorted_array(*stack_a);
	min = 0;
	while (*stack_a)
	{
		index = index_of((*stack_a)->value, arr, size);
		if (index <= min && index != -1)
		{
			pb(stack_a, stack_b, 1);
			rb(stack_b, 1);
			min++;
			max++;
		}
		else if (index <= max && index != -1)
		{
			pb(stack_a, stack_b, 1);
			if ((*stack_b)->next && (*stack_b)->value < (*stack_b)->next->value)
				sb(stack_b, 1);
			min++;
			max++;
		}
		else
			ra(stack_a, 1);
	}
	free(arr);
}

void	sort_more_numbers(t_list **stack_a, t_list **stack_b)
{
	int max, (size), (*arr);
	arr = sorted_array(*stack_a);
	size = count_list(*stack_a);
	if (size > 100)
		max = size / 14;
	else
		max = size / 6;
	best_moves(stack_a, stack_b, size, max);
	push_sorted_numbers(stack_a, stack_b, arr);
	free(arr);
}
