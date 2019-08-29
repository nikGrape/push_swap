/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   does_sa_work.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:08:05 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/28 10:57:46 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_in_right_order_two_first_nbrs(int *stack_a)
{
	int max;
	int min;

	max = find_max(stack_a, 0);
	min = find_min(stack_a, 0);
	return ((stack_a[A_LEN - 2] > stack_a[A_LEN - 1]\
	&& A_TOP < stack_a[A_LEN - 1]) && (is_in_right_order(stack_a)));
}

int			does_sa_work(int *stack_a, int *stack_b)
{
	int res;

	commander("sa", stack_a, stack_b);
	res = is_in_right_order_two_first_nbrs(stack_a);
	commander("sa", stack_a, stack_b);
	return (res);
}
