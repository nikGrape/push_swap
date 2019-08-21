/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   booble_rsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:57:24 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/19 15:05:08 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	booble_rsort(int *stack)
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
