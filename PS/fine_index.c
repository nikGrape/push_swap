/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fine_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 23:44:07 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/21 00:17:16 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_fit(int nbr, int from, int to)
{
	return (nbr > from && nbr < to);
}

int		find_index_of_smolest_nbr(int from, int to, int *stack)
{
	int i;
	int index;
	int min;

	i = 1;
	index = 0;
	min = __INT_MAX__;
	while (i <= LEN)
	{
		if ((stack[i] < min) && is_fit(stack[i], from, to))
			index = i;
		i++;
	}
	return (index);
}

int		lol(int *stack_a, int *stack_b)
{
	int index;
	int i;

	i = 0;
	while (B_LEN > 0)
	{
		index = find_index_of_smolest_nbr(stack_a[1], stack_a[A_LEN], stack_b);
		if (index == 0)
		{
			multi_commander("ra", stack_a, stack_b);
			i++;
			continue ;
		}
		else if (index <= B_LEN / 2)
		{
			i += index;
			while (index--)
				multi_commander("rrb", stack_a, stack_b);
		}
		else
		{
			index = B_LEN - index;
			i += index;
			while (index--)
				multi_commander("rb", stack_a, stack_b);
		}
		multi_commander("pa ra", stack_a, stack_b);
		//print_stack(stack_a, stack_b, i);
		i += 2;
	}
	return (i);
}
