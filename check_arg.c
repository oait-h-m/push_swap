/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:33:25 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/08 15:33:27 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

static int	check_argu(char *arg)
{
	if (ft_atoi(arg) == -1 && ft_strcmp(arg, "-1"))
		return (0);
	return (1);
}

void	freesp(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

int	no_repetetion(t_list *stack_a, int nbr)
{
	t_list	*tmp;

	tmp = stack_a;
	if (tmp == NULL)
		return (1);
	while (tmp)
	{
		if (tmp->value == nbr)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	check_error(char **av)
{
	char	**s;

	int i, (j);
	i = 1;
	while (av[i])
	{
		s = ft_split(av[i], ' ');
		j = 0;
		if (!s[j])
		{
			freesp(s);
			return (0);
		}
		while (s[j])
		{
			if (!check_argu(s[j++]))
			{
				freesp(s);
				return (0);
			}
		}
		freesp(s);
		i++;
	}
	return (1);
}
