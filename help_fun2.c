/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_fun2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:50:29 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/20 17:52:36 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid(char *s)
{
	int	is_true;

	is_true = 0;
	if (ft_strcmp(s, "sa\n") == 0 || ft_strcmp(s, "sb\n") == 0 || ft_strcmp(s,
			"ss\n") == 0)
		is_true = 1;
	else if (ft_strcmp(s, "pa\n") == 0 || ft_strcmp(s, "pb\n") == 0)
		is_true = 1;
	else if (ft_strcmp(s, "ra\n") == 0 || ft_strcmp(s, "rb\n") == 0
		|| ft_strcmp(s, "rr\n") == 0)
		is_true = 1;
	else if (ft_strcmp(s, "rra\n") == 0 || ft_strcmp(s, "rrb\n") == 0
		|| ft_strcmp(s, "rrr\n") == 0)
		is_true = 1;
	return (is_true);
}

void	applique_mouv(char *s, t_list **stack_a, t_list **stack_b)
{
	if (ft_strcmp(s, "sa\n") == 0)
		sa(stack_a, 0);
	else if (ft_strcmp(s, "sb\n") == 0)
		sb(stack_b, 0);
	else if (ft_strcmp(s, "ss\n") == 0)
		ss(stack_a, stack_b, 0);
	else if (ft_strcmp(s, "pa\n") == 0)
		pa(stack_a, stack_b, 0);
	else if (ft_strcmp(s, "pb\n") == 0)
		pb(stack_a, stack_b, 0);
	else if (ft_strcmp(s, "ra\n") == 0)
		ra(stack_a, 0);
	else if (ft_strcmp(s, "rb\n") == 0)
		rb(stack_b, 0);
	else if (ft_strcmp(s, "rr\n") == 0)
		rr(stack_a, stack_b, 0);
	else if (ft_strcmp(s, "rra\n") == 0)
		rra(stack_a, 0);
	else if (ft_strcmp(s, "rrb\n") == 0)
		rrb(stack_b, 0);
	else if (ft_strcmp(s, "rrr\n") == 0)
		rrr(stack_a, stack_b, 0);
}

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

int	add_to_stack(char *av, t_list **stack_a)
{
	int		i;
	char	**s;
	int		nbr;

	i = 0;
	s = ft_split(av, ' ');
	while (s[i])
	{
		nbr = ft_atoi(s[i]);
		if (no_repetetion(*stack_a, nbr))
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

int	check_all(t_list **stack_a, char **av)
{
	int	i;

	if (!check_error(av))
		return (0);
	else
	{
		i = 1;
		while (av[i])
		{
			if (add_to_stack(av[i], stack_a))
				i++;
			else
				return (0);
		}
	}
	return (1);
}
