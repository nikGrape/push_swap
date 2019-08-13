/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 18:26:39 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/12 23:47:11 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		*init_a(int len, char **arr)
{
	int *stack;

	stack = (int *)malloc(sizeof(int) * len + 1);
	LEN = len;
	while (len > 0)
	{
		stack[len] = ft_atoi(*arr);
		len--;
		arr++;
	}
	return (stack);
}

int		*init_b(int len)
{
	int *stack;

	stack = (int *)malloc(sizeof(int) * len);
	LEN = 0;
	return (stack);
}
