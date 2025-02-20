/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:04:39 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/20 17:50:55 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	read_and_appl(t_list **stack_a, t_list **stack_b)
{
	char	*s;

	s = get_next_line(0);
	while (s)
	{
		if (!is_valid(s))
		{
			free(s);
			free_nodes(stack_a);
			free_nodes(stack_b);
			return (0);
		}
		applique_mouv(s, stack_a, stack_b);
		free(s);
		s = get_next_line(0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	if (check_all(&stack_a, av) == 0)
		return (write(2, "Error\n", 6), 0);
	if (!read_and_appl(&stack_a, &stack_b))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (is_sorted(stack_a) && stack_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_nodes(&stack_a);
	free_nodes(&stack_b);
}
