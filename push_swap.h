/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:41:13 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/08 15:41:17 by oait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;

char				**ft_split(char const *s, char c);
int					ft_atoi(const char *str);
int					check_argu(char *arg);
t_list				*create_node(int value);
t_list				*find_before_last_node(t_list *head);
t_list				*find_last_node(t_list *head);
t_list				*sa(t_list **stack_a);
t_list				*sb(t_list **stack_a);
void				ss(t_list **stack_a, t_list **stack_b);
void				push(t_list **stack_a, t_list **stack_b);
void				pb(t_list **stack_a, t_list **stack_b);
void				pa(t_list **stack_a, t_list **stack_b);
void				rotate(t_list **head);
void				ra(t_list **stack_a);
void				rb(t_list **stack_b);
void				rr(t_list **stack_a, t_list **stack_b);
void				reverse_rotate(t_list **head);
void				rra(t_list **stack_a);
void				rrb(t_list **stack_b);
void				rrr(t_list **stack_a, t_list **stack_b);
void				add_to_last(t_list **head, int value);

int					check_error(char **av);
int					repetetion(t_list *a, int nbr);

#endif
