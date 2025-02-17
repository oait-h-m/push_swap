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

void	free_nodes(t_list **head)
{
	t_list	*save;
	t_list	*temp;

	if (head == NULL || *head == NULL)
		return ;
	temp = *head;
	while (temp)
	{
		save = temp;
		temp = (temp)->next;
		free(save);
	}
}

void	print_stack(t_list *head)
{
	while (head)
	{
		printf("%d->", head->value);
		head = head->next;
	}
	printf("\n");
}

int	add_to_stack(char *av, t_list **stack_a, t_list **stack_b)
{
	int		i;
	char	**s;
	int		nbr;

	i = 0;
	s = ft_split(av, ' ');
	while (s[i])
	{
		nbr = ft_atoi(s[i]);
		if (!repetetion(*stack_a, nbr))
			add_to_last(stack_a, nbr);
		else
		{
			free_nodes(stack_a);
			freesp(s);
			return (0);
		}
		i++;
	}
	freesp(s);
	return (1);
}

int	main(int ac, char *av[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	if (!check_error(av))
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		i = 1;
		while (av[i])
		{
			if (add_to_stack(av[i], &stack_a, &stack_b))
				i++;
			else
			{
				printf("Error\n");
				return (0);
			}
		}
	}
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
