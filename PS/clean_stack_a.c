/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_stack_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 21:12:01 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/26 16:57:59 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_in_right_order(int *stack_a)
{
	int max;
	int min;

	max = find_max(stack_a, 0);
	min = find_min(stack_a, 0);
	return (A_TOP == max || A_TOP == min ||
		(A_TOP > A_BOTTOM && A_TOP < stack_a[A_LEN - 1]));
}

int		is_a_sorted(int *stack_a)
{
	int i;

	i = A_LEN;
	while (i > 1)
	{
		if (stack_a[i] >= stack_a[i - 1])
			return (0);
		i--;
	}
	return (1);
}

int		push_nbr_from_b(int *stack_a, int *stack_b)
{
	int index;

	if (!(index = find_index_of_bigest_nbr(A_BOTTOM, A_TOP, stack_b)))
		return (0);
	if (index <= B_LEN / 2)
	{
		while (index--)
			totle_commander("rrb", stack_a, stack_b);
	}
	else
	{
		index = B_LEN - index;
		while (index--)
			totle_commander("rb", stack_a, stack_b);
	}
	totle_commander("pa", stack_a, stack_b);
	return (1);
}

int		clean_stack_a(int *stack_a, int *stack_b)
{
	while (!is_a_sorted(stack_a))
	{
		while(push_nbr_from_b(stack_a, stack_b) != 0);
		if (is_in_right_order(stack_a))
			totle_commander("ra", stack_a, stack_b);
		else if (does_sa_work(stack_a, stack_b))
			totle_commander("sa", stack_a, stack_b);
		else
		{
			totle_commander("pb", stack_a, stack_b);
			//sort_b(stack_a, stack_b);		//depend on order, can improve or spoil
		}
		//print_stack(stack_a, stack_b, 0);
	}
	return (1);
}
