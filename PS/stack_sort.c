/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 15:58:18 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/28 22:12:21 by Nik              ###   ########.fr       */
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
	if (stack_b[index] > A_BOTTOM && stack_b[index] < A_TOP)
		return ;
	while (i > 1)
	{
		if (stack_b[index] > stack_a[i] && stack_b[index] < stack_a[i - 1])
			break ;
		i--;
	}
	if (i > A_LEN / 2)
	{
		i = A_LEN - (i - 1);
		while (i-- > 0)
			totle_commander("ra", stack_a, stack_b);
	}
	else
	{
		i -= 1;
		while (i-- > 0)
			totle_commander("rra", stack_a, stack_b);
	}
}

void	push_best_nbr(int *stack_a, int *stack_b)
{
	int index;

	index = get_index_of_best_nbr_to_push(stack_a, stack_b);
	a_rotation(stack_a, stack_b, index);
	b_rotation(stack_a, stack_b, index);
	totle_commander("pa", stack_a, stack_b);
}

void	stack_sort(int *stack_a, int *stack_b)
{
	int ind_min;

	while (B_LEN > 0)
		push_best_nbr(stack_a, stack_b);
	ind_min = find_min(stack_a, 1);
	if ((ind_min <= A_LEN / 2))
		while (ind_min--)
			totle_commander("rra", stack_a, stack_b);
	else
	{
		ind_min = A_LEN - ind_min;
		while (ind_min--)
			totle_commander("ra", stack_a, stack_b);
	}
}
