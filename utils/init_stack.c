/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 18:26:39 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/14 10:44:27 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		*init_a(int len, char **arr)
{
	int		*stack;
	char	*tmp;
	int		i;

	stack = (int *)malloc(sizeof(int) * len + 1);
	LEN = len;
	i = 1;
	while (i <= LEN)
	{
		if ((tmp = input_checker(arr[--len])))
			stack[i++] = ft_atoi(tmp);
		else
			LEN--;
	}
	duplicates_check(stack);
	return (stack);
}

int		*init_b(int len)
{
	int *stack;

	stack = (int *)malloc(sizeof(int) * len);
	LEN = 0;
	return (stack);
}
