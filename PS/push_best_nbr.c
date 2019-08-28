/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a_best_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 15:58:18 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/26 16:14:45 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		b_rotation(int *stack_a, int *stack_b, int index)
{
	if ((index <= B_LEN / 2))
		while (index--)
			totle_commander("rrb", stack_a, stack_b);
	else
	{
		index = B_LEN - index;
		while (index--)
			totle_commander("rb", stack_a, stack_b);
	}
}

void		a_rotation(int *stack_a, int *stack_b, int index)
{
	int i;

	i = A_LEN;
	while (i > 1)
	{
		if (stack_b[index] > stack_a[i] && stack_b[index] < stack_a[i - 1])
			break ;
		i--;
	}
	if (i > A_LEN / 2)
	{
		i = A_LEN - (i - 1);
		while (i--)
			totle_commander("ra", stack_a, stack_b);
	}
	else
	{
		i -= 1;
		while (i--)
			totle_commander("rra", stack_a, stack_b);
	}
}

void	push_best_nbr(int *stack_a, int *stack_b, int index)
{
	a_rotation(stack_a, stack_b, index);
	b_rotation(stack_a, stack_b, index);
	totle_commander("pa", stack_a, stack_b);
}

// int main(int argc, char **argv)
// {
// 	int *stack_a;
// 	int *stack_b;

// 	stack_a = init_a(argc - 1, ++argv);
// 	stack_b = init_b(argc - 1);
// 	multi_commander("pb pb pb pb pb pb pb", stack_a ,stack_b);
// 	print_stack(stack_a, stack_b, 0);
// 	push_best_nbr(stack_a, stack_b, get_index_of_best_nbr_to_push(stack_a, stack_b));
// 	print_stack(stack_a, stack_b, 0);
// 	push_best_nbr(stack_a, stack_b, get_index_of_best_nbr_to_push(stack_a, stack_b));
// 	print_stack(stack_a, stack_b, 0);
// 	//ft_printf("%d\n", turns_for_a_rotation(stack_a, stack_b, 14));
// }