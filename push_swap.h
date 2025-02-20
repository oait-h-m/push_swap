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

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

char				**ft_split(char const *s, char c);
void				freesp(char **s);
void				free_nodes(t_list **head);
void				applique_mouv(char *s, t_list **stack_a, t_list **stack_b);
int					add_to_stack(char *av, t_list **stack_a);
int					check_all(t_list **stack_a, char **av);
int					ft_atoi(const char *str);
int					is_valid(char *s);
t_list				*create_node(int value);
t_list				*find_before_last_node(t_list *head);
t_list				*find_last_node(t_list *head);
t_list				*sa(t_list **stack_a, int a);
t_list				*sb(t_list **stack_a, int a);
t_list				*min_value(t_list *head);
void				ss(t_list **stack_a, t_list **stack_b, int a);
void				push(t_list **stack_a, t_list **stack_b);
void				pb(t_list **stack_a, t_list **stack_b, int a);
void				pa(t_list **stack_a, t_list **stack_b, int a);
void				rotate(t_list **head);
void				ra(t_list **stack_a, int a);
void				rb(t_list **stack_b, int a);
void				rr(t_list **stack_a, t_list **stack_b, int a);
void				reverse_rotate(t_list **head);
void				rra(t_list **stack_a, int a);
void				rrb(t_list **stack_b, int a);
void				rrr(t_list **stack_a, t_list **stack_b, int a);
void				add_to_last(t_list **head, int value);
void				sort_three(t_list **stack_a);
void				sort_four_elements(t_list **stack_a, t_list **stack_b);
void				sort_five_elements(t_list **stack_a, t_list **stack_b);
void				find_and_pb(t_list **stack_a, t_list **stack_b);
void				bubble_sort(int *arr, int size);
int					check_error(char **av);
int					no_repetetion(t_list *stack_a, int nbr);
int					count_list(t_list *head);
int					*sorted_array(t_list *stack_a);
int					index_of(int value, int *arr, int size);
int					position_in_stack(int value, t_list *stack);
int					is_sorted(t_list *stack_a);
int					ft_strcmp(const char *str1, const char *str2);
void				sort_more_numbers(t_list **stack_a, t_list **stack_b);

char				*ft_strdup(const char *s1);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlen(const char *s);
char				*get_next_line(int fd);
char				*get_next_check_temp(char **line, char **temp);

#endif
