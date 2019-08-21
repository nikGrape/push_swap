/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   booble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:01:48 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/19 16:21:03 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	booble_sort(int *stack)
{
	int i;
	int j;

	i = 1;
	while (i <= LEN)
	{
		j = i;
		while (j <= LEN)
		{
			if (stack[j] > stack[i])
				ft_swapi(&stack[j], &stack[i]);
			j++;
		}
		i++;
	}
}
