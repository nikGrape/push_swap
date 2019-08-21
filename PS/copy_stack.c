/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 11:19:56 by Nik               #+#    #+#             */
/*   Updated: 2019/08/16 13:18:12 by vinograd         ###   ########.fr       */
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
