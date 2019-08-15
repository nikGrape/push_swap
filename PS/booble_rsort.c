/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   booble_rsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:57:39 by Nik               #+#    #+#             */
/*   Updated: 2019/08/14 22:18:54 by Nik              ###   ########.fr       */
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
			if (stack[i] > stack[j])
				ft_swapi(&stack[i], &stack[j]);
			j++;
		}
		i++;
	}
}