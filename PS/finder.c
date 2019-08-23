/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 23:44:07 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/21 23:38:35 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_fit(int nbr, int from, int to)
{
	return (nbr > from && nbr < to);
}

int			find_index_of_bigest_nbr(int from, int to, int *stack)
{
	int i;
	int index;
	int max;

	i = 1;
	index = 0;
	max = -__INT_MAX__;
	while (i <= LEN)
	{
		if ((stack[i] > max) && is_fit(stack[i], from, to))
			index = i;
		i++;
	}
	return (index);
}

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
