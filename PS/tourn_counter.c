/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tourn_counter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 13:39:21 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/26 16:41:38 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		turns_for_b_rotation(int *stack_a, int *stack_b, int nbr_from_b)
{
	int i;

	i = 1;
	while (stack_b[i] != nbr_from_b)
		i++;
	return (i <= B_LEN / 2) ? i : B_LEN - i;
}

int		turns_for_a_rotation(int *stack_a, int *stack_b, int nbr)
{
	int i;

	i = A_LEN;
	while (i > 1)
	{
		if (nbr > stack_a[i] && nbr < stack_a[i - 1])
			break ;
		i--;
	}
	return (i > A_LEN / 2) ? (A_LEN - (i - 1)) : i - 1;
}

int		*turn_counter(int *stack_a, int *stack_b)
{
	int i;
	int	*turns;
	int a;
	int b;

	if (B_LEN == 0)
		return (NULL);
	turns = init_b(B_LEN);
	turns[0] = B_LEN;
	i = 1;
	while (i <= B_LEN)
	{
		a = turns_for_a_rotation(stack_a, stack_b, stack_b[i]);
		b = turns_for_b_rotation(stack_a, stack_b, stack_b[i]);
		//ft_printf("a - %d, b - %d nbr - %d\n", a, b, stack_b[i]);
		turns[i] = a + b;
		i++;
	}
	return (turns);
}

int		get_index_of_best_nbr_to_push(int *stack_a, int *stack_b)
{
	int index;
	int *turns;

	if (!(turns = turn_counter(stack_a, stack_b)))
		return (0);
	index = find_min(turns, 1);
	free(turns);
	return (index);
}

// int main(int argc, char **argv)
// {
// 	int *stack_a;
// 	int *stack_b;

// 	stack_a = init_a(argc - 1, ++argv);
// 	stack_b = init_b(argc - 1);
// 	multi_commander("pb pb pb pb pb pb pb", stack_a ,stack_b);
// 	print_stack(stack_a, stack_b, 0);
// 	int *turns = turn_counter(stack_a, stack_b);
// 	print_stack(turns, stack_b, 0);
// 	//ft_printf("%d\n", turns_for_a_rotation(stack_a, stack_b, 14));
// }