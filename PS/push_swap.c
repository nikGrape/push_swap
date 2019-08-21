/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:10:52 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/21 00:18:25 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int		main(int argc, char **argv)
{
	int *stack_a;
	int *stack_b;
	int i;

	stack_a = init_a(argc - 1, ++argv);
	stack_b = init_b(argc);
	print_stack(stack_a, stack_b, 0);
	i = fill_b(stack_a, stack_b);
	print_stack(stack_a, stack_b, i);
	i += lol(stack_a, stack_b);
	print_stack(stack_a, stack_b, i);
	while (stack_a[A_LEN] != find_min(stack_a, 0))
	{
		multi_commander("ra", stack_a, stack_b);
		i++;
	}
	print_stack(stack_a, stack_b, i);
}
