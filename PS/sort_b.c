/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:24:06 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/22 21:19:45 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*copy_stack(int *stack)
{
	int *copy;
	int i;

	copy = init_b(LEN + 1);
	i = 0;
	while (i <= LEN)
	{
		copy[i] = stack[i];
		i++;
	}
	return (copy);
}

int		get_sum(int *stack, int *goal)
{
	int i;
	int sum;

	i = 3;
	sum = 0;
	while (i <= LEN)
	{
		sum += MAX(stack[i], goal[i]) - MIN(stack[i], goal[i]);
		i++;
	}
	return (sum);
}

void	rsort(int *stack)
{
	int i;
	int j;

	i = 1;
	while (i <= LEN)
	{
		j = i;
		while (j <= LEN)
		{
			if (stack[j] < stack[i])
				ft_swapi(&stack[j], &stack[i]);
			j++;
		}
		i++;
	}
}

int		sort_b(int *stack_a, int *stack_b)
{
	int *tmp;
	int i;
	int sum;
	int res = -1;
	int min;
	char *cmd[] = {"rb", "rrb", "sb", NULL};

	tmp = copy_stack(stack_b);
	rsort(tmp);
	min = get_sum(stack_b, tmp);
	i = 0;
	while (cmd[i])
	{
		multi_commander(cmd[i], stack_a, stack_b);
		sum = get_sum(stack_b, tmp);
		undo(cmd[i], stack_a, stack_b);
		if (min > sum)
		{
			min = sum;
			res = i;
		}
		i++;
	}
	if (res >= 0)
	{
		totle_commander(cmd[res], stack_a, stack_b);
		ft_printf("%s\n", cmd[res]);
	}
	return (i);
}
