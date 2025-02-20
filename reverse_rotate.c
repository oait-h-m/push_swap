/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:19:23 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/08 15:20:08 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **head)
{
	t_list	*before_last;
	t_list	*last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	before_last = find_before_last_node(*head);
	last = before_last->next;
	last->next = *head;
	before_last->next = NULL;
	*head = last;
}

void	rra(t_list **stack_a, int a)
{
	reverse_rotate(stack_a);
	if (a)
		write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b, int a)
{
	reverse_rotate(stack_b);
	if (a)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b, int a)
{
	rra(stack_a, a);
	rrb(stack_b, a);
	if (a)
		write(1, "rrr\n", 4);
}
