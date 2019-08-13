/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:10:52 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/12 19:21:03 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int *stack_a;
	int *stack_b;

	stack_a = fill_stack(argc - 1, ++argv);
	stack_b = (int *)malloc(sizeof(int) * argc);
	B_LEN = 0;
	rr(stack_a, stack_b);
	print_stack(stack_a, stack_b);
}
