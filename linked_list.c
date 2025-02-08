/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:57:31 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/07 21:12:27 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_node(int value)
{
	t_list	*head;

	head = NULL;
	head = malloc(sizeof(t_list));
	head->value = value;
	head->next = NULL;
	return (head);
}

void	add_to_last(t_list **head, int value)
{
	t_list	*last_node;
	t_list	*node;

	last_node = create_node(value);
	if (*head == NULL)
	{
		*head = last_node;
		return ;
	}
	node = *head;
	while (node->next)
		node = node->next;
	node->next = last_node;
}

t_list	*find_last_node(t_list *head)
{
	if (head == NULL)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

t_list	*find_before_last_node(t_list *head)
{
	if (head->next == NULL)
		return (NULL);
	while (head->next->next)
		head = head->next;
	return (head);
}
