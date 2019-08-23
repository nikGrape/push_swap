/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 21:12:01 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/22 21:20:54 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_in_right_order(int *stack_a)
{
	int max;
	int min;

	max = find_max(stack_a, 0);
	min = find_min(stack_a, 0);
	return (A_TOP == max || A_TOP == min ||\
		(A_TOP > A_BOTTOM && A_TOP < stack_a[A_LEN - 1]));
}

int		stack_sort(int *stack_a, int *stack_b)
{
	while (!is_sorted(stack_a, stack_b))
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
	}
	return (1);
}
