#include "push_swap.h"


void print_stack(t_list *head)
{
		while (head)
	{
		printf("%d->", head->value);
		head = head->next;
	}
	printf("\n");

}

void print_stacks(t_list *stack_a, t_list *stack_b)
{
	printf("A: ");
	print_stack(stack_a);
	printf("B: ");
	print_stack(stack_b);
	printf("------------------\n");

}
int main(int ac, char *av[])
{
	t_list	*stack_a = NULL;
	t_list	*stack_b = NULL;
	if (!check_error(av) || ac < 2)
	{
		printf("Error\n");
		return 0;
	}
	else
	{	
		int	i;

		i = 1;
		while (av[i])
		{
			int nbr = ft_atoi(av[i]);
			if (!repetetion(stack_a, nbr))
				 add_to_last(&stack_a, nbr);
			else
				printf("Error");
			i++;
		}
	}
	sa(&stack_a);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);

}
