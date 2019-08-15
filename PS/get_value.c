/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:41:42 by Nik               #+#    #+#             */
/*   Updated: 2019/08/14 21:46:43 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_value(int *stack, int *goal)
{
	int value;
	int i;
	
	value = 0;
	i = 1;
	while (i <= LEN)
	{
		value += MAX(stack[i], goal[i]) - MIN(stack[i], goal[i]);
		i++;
	}
	while (i <= goal[0])
		value += goal[i++];
	return (value);
}
