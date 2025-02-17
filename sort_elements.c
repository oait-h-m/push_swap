/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:24:13 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/10 15:50:49 by oait-h-m         ###   ########.fr       */
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
	if (num1 < num2 && num2 < num3)
		return ;
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

void sort_four_elements(t_list **stack_a, t_list **stack_b)
{
	find_and_pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void sort_five_elements(t_list **stack_a, t_list **stack_b)
{
	find_and_pb(stack_a, stack_b);
	find_and_pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
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

int *sorted_array(t_list *stack_a)
{
	int size, (*arr);
	t_list *tmp;

	tmp = stack_a;
	size = count_list(stack_a);
	arr = (int *)malloc (sizeof(int) * size);	
	size = 0;
	while (tmp)	
	{
		arr[size] = tmp->value;	
		tmp = tmp->next;
		size++;
	}
	bubble_sort(arr, size);
	return arr;
}

void	sort_more_numbers(t_list **stack_a, t_list **stack_b)
{
	int min, (max) , (size);	

	int *arr = sorted_array(*stack_a);	
	while (*stack_a)
	{

	}


}
