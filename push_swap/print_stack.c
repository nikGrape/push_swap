/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:58:05 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/12 18:08:54 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(int *stack_a, int *stack_b)
{
	int i;
	int j;

	i = A_LEN;
	j = B_LEN;
	while (i > 0 || j > 0)
	{
		if (i > 0)
			ft_printf("%d", stack_a[i]);
		if (j > 0)
			ft_printf("\t%d", stack_b[j]);
		ft_printf("\n");
		i--;
		j--;
	}
	ft_printf("{red}a\tb{eoc}\n");
}
