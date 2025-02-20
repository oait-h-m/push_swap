/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:06:58 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/10 21:47:19 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	if (check_all(&stack_a, av) == 0)
		return (write(2, "Error\n", 6), 0);
	if (is_sorted(stack_a))
		return (free_nodes(&stack_a), 0);
	else
	{
		if (count_list(stack_a) == 3)
			sort_three(&stack_a);
		else if (count_list(stack_a) == 4)
			sort_four_elements(&stack_a, &stack_b);
		else if (count_list(stack_a) == 5)
			sort_five_elements(&stack_a, &stack_b);
		else
			sort_more_numbers(&stack_a, &stack_b);
		free_nodes(&stack_a);
	}
}
