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

static int	ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

int	check_argu(char *arg)
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

int	repetetion(t_list *a, int nbr)
{
	if (a == NULL)
		return (0);
	while (a)
	{
		if (a->value == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

int	check_error(char **av)
{
	int		i;
	char	**s;
	int		j;

	i = 1;
	while (av[i])
	{
		s = ft_split(av[i], ' ');
		j = 0;
		if (!s[j])
			return (0);
		while (s[j])
		{
			if (!check_argu(s[j]))
			{
				freesp(s);
				return (0);
			}
			j++;
		}
		freesp(s);
		i++;
	}
	return (1);
}
