/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-h-m <oait-h-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:41:13 by oait-h-m          #+#    #+#             */
/*   Updated: 2025/02/09 17:08:15 by oait-h-m         ###   ########.fr       */
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
	int				index;
	struct s_list	*next;
}					t_list;

char				**ft_split(char const *s, char c);
void				freesp(char **s);
int					ft_atoi(const char *str);
t_list				*create_node(int value);
t_list				*find_before_last_node(t_list *head);
t_list				*find_last_node(t_list *head);
t_list				*sa(t_list **stack_a);
t_list				*sb(t_list **stack_a);
t_list				*min_value(t_list *head);
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
void				sort_three(t_list **stack_a);
void				sort_four_elements(t_list **stack_a, t_list **stack_b);
void				sort_five_elements(t_list **stack_a, t_list **stack_b);
void				find_and_pb(t_list **stack_a, t_list **stack_b);
int					check_error(char **av);
int					repetetion(t_list *a, int nbr);
int					count_list(t_list *head);

#endif
