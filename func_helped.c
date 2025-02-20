/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_helped.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:01:29 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/14 18:02:43 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_list(t_list *head)
{
	t_list	*lst;
	int		counter;

	lst = head;
	counter = 0;
	while (lst)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}

t_list	*min_value(t_list *head)
{
	t_list	*lst;
	t_list	*min;

	int i, (min_index);
	if (!head)
		return (NULL);
	min = head;
	lst = head;
	i = 0;
	min_index = 0;
	while (lst)
	{
		i++;
		if (lst->value < min->value)
		{
			min = lst;
			min_index = i;
		}
		lst = lst->next;
	}
	min->index = min_index;
	return (min);
}

void	find_and_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;

	min = min_value(*stack_a);
	if (min->index > 2)
	{
		while ((*stack_a)->value != (min)->value)
			rra(stack_a, 1);
		pb(stack_a, stack_b, 1);
	}
	else if (min->index <= 2)
	{
		while ((*stack_a)->value != (min)->value)
			ra(stack_a, 1);
		pb(stack_a, stack_b, 1);
	}
}

void	bubble_sort(int *arr, int size)
{
	int i, (j), (tmp);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*sorted_array(t_list *stack_a)
{
	t_list	*tmp;
	int		size;
	int		*arr;

	tmp = stack_a;
	size = count_list(stack_a);
	arr = (int *)malloc(sizeof(int) * size);
	size = 0;
	while (tmp)
	{
		arr[size] = tmp->value;
		tmp = tmp->next;
		size++;
	}
	bubble_sort(arr, size);
	return (arr);
}
