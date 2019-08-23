/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:41:23 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/22 21:11:02 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_nbr_from_b(int *stack_a, int *stack_b)
{
	int index;

	if (!(index = find_index_of_bigest_nbr(A_BOTTOM, A_TOP, stack_b)))
		return (0);
	if (index <= B_LEN / 2)
	{
		while (index--)
			totle_commander("rrb", stack_a, stack_b);
	}
	else
	{
		index = B_LEN - index;
		while (index--)
			totle_commander("rb", stack_a, stack_b);
	}
	totle_commander("pa", stack_a, stack_b);
	return (1);
}
