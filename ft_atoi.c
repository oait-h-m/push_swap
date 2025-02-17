/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:31:24 by oait-h-m          #+#    #+#             */
/*   Updated: 2024/10/28 00:30:50 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_is_positive(char str, int sign)
{
	if (str == '+' || str == '-')
	{
		if (str == '-')
			sign = sign * (-1);
	}
	return (sign);
}

static int	check_char(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;
	int		check;

	check = 1;
	result = 0;
	sign = 1;
	i = check_char(str);
	sign = ft_is_positive(str[i], sign);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		check = 0;
		if (result * 10 > INT_MAX)
			return (-1);
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if (check || (str[i] && str[i] != ' '))
		return (-1);
	return (result * sign);
}
