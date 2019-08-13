/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 18:26:39 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/12 19:12:06 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		*fill_stack(int len, char **arr)
{
	int *stack;

	stack = (int *)malloc(sizeof(int) * len + 1);
	stack[0] = len;
	while (len > 0)
	{
		stack[len] = ft_atoi(*arr);
		len--;
		arr++;
	}
	return (stack);
}
