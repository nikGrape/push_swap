/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_help.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 21:32:41 by Nik               #+#    #+#             */
/*   Updated: 2019/08/29 23:07:42 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		print_msg(int msg)
{
	if (msg == 0)
		ft_printf("{green}This is my solution:\n");
	else if (msg == 1)
		ft_printf("{green}You are not so bad, keep going:\n");
	else if (msg == 2)
		ft_printf("{green}Man, just sort the stack!:\n");
	else if (msg == 3)
		ft_printf("{green}I am so tired:\n");
	else if (msg == 4)
		ft_printf("{green}Comon man, suck it up!:\n");
	else
	{
		ft_printf("{green}OK, this is my solution:\n");
		return (-msg);
	}
	return (1);
}


void	push_help(int *stack_a, int *stack_b)
{
	int *copy_a;
	int *copy_b;
	static int msg;

	copy_a = copy_stack(stack_a, A_LEN + B_LEN);
	copy_b = copy_stack(stack_b, A_LEN + B_LEN);
	msg += print_msg(msg);
	fill_stack_b(copy_a, copy_b);
	stack_sort(copy_a, copy_b);
	ft_printf("{eoc}");
	free(copy_a);
	free(copy_b);
}
