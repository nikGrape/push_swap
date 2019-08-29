/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:10:52 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/28 21:03:26 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_a(int *stack_a)
{
	int i;
	int j;

	i = A_LEN;
	while (i)
	{
		j = 0;
		while (j++ < stack_a[i])
			ft_printf("{green}-{eoc}");
		ft_printf("\n");
		i--;
	}
}

int		main(int argc, char **argv)
{
	int		*stack_a;
	int		*stack_b;

	stack_a = init_a(argc - 1, ++argv);
	stack_b = init_b(argc);
	fill_stack_b(stack_a, stack_b);
	stack_sort(stack_a, stack_b);
	//print_stack(stack_a, stack_b, 0);
}
