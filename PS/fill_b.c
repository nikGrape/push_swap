/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 21:12:01 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/20 23:42:45 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_max(int *stack, int index)
{
	int i;
	int max;
	int max_index;

	max = stack[1];
	max_index = 1;
	i = 2;
	while (i <= LEN)
	{
		if (stack[i] > max)
		{
			max = stack[i];
			max_index = i;
		}
		i++;
	}
	return (index) ? max_index : max;
}

int		find_min(int *stack, int index)
{
	int i;
	int min;
	int min_index;

	min = stack[1];
	min_index = 1;
	i = 2;
	while (i <= LEN)
	{
		if (stack[i] < min)
		{
			min = stack[i];
			min_index = i;
		}
		i++;
	}
	return (index) ? min_index : min;
}

int		fill_b(int *stack_a, int *stack_b)
{
	int max;
	int min;
	int i;
	int ret;

	max = find_max(stack_a, 0);
	min = find_min(stack_a, 0);
	i = A_LEN + 1;
	i += (find_max(stack_a, 1) > find_min(stack_a, 1)) ? 1 : 0;
	ret = i;
	while (i--)
	{
		if (stack_a[A_LEN] == max || stack_a[A_LEN] == min ||\
		(stack_a[A_LEN] > stack_a[1] && stack_a[A_LEN] < stack_a[A_LEN - 1]))
			multi_commander("ra", stack_a, stack_b);
		else
			multi_commander("pb", stack_a, stack_b);
	}
	return (ret);
}
