/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:21:59 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/26 16:51:12 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sort(int *stack_a, int *stack_b)
{
	int index;

	while (!is_sorted(stack_a, stack_b))
	{
		if (!(index = get_index_of_best_nbr_to_push(stack_a, stack_b)))
			totle_commander("ra", stack_a, stack_b) ;
		else
			push_best_nbr(stack_a, stack_b, index);
	}
}