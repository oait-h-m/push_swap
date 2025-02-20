/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:15:58 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/08 15:18:34 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rotate(t_list **head)
{
	t_list	*node;
	t_list	*last;
	t_list	*second_node;

	node = (*head);
	last = find_last_node(node);
	second_node = (*head)->next;
	(*head)->next = NULL;
	last->next = *head;
	*head = second_node;
}

void	ra(t_list **stack_a, int a)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	rotate(stack_a);
	if (a)
		write(1, "ra\n", 3);
}

void	rb(t_list **stack_b, int a)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	rotate(stack_b);
	if (a)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b, int a)
{
	ra(stack_a, a);
	rb(stack_b, a);
	if (a)
		write(1, "rr\n", 3);
}
