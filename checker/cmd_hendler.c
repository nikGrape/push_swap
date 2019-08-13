/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_hendler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 00:35:41 by Nik               #+#    #+#             */
/*   Updated: 2019/08/13 01:19:18 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#define COMMANDS "sa sb ss pa pb ra rb rr rra rrb rrr"
//				 "0  3  6  9  12 15 18 21 24  28  32"

int		is_command(char *cmd)
{
	int len;

	len = ft_strlen(cmd);
	if (ft_strstr(COMMANDS, cmd) && len > 1 && len < 4 && !ft_strchr(cmd, ' '))
		return (1);
	ft_printf("{red}%s{eoc} - not a command\n", cmd);
	return (0);
}

int		commander(char *cmd, int *stack_a, int *stack_b)
{
	int command;

	command = ft_strindex(COMMANDS, cmd);
	if (command == 0)
		sa(stack_a);
	else if (command == 3)
		sb(stack_b);
	else if (command == 6)
		ss(stack_a, stack_b);
	else if (command == 9)
		pa(stack_a, stack_b);
	else if (command == 12)
		pb(stack_a, stack_b);
	else if (command == 15)
		ra(stack_a);
	else if (command == 18)
		rb(stack_b);
	else if (command == 21)
		rr(stack_a, stack_b);
	else if (command == 24)
		rra(stack_a);
	else if (command == 28)
		rrb(stack_b);
	else if (command == 32)
		rrr(stack_a, stack_b);
	else
		return (0);
	return (1);
	
}

int		multi_commander(char *cmd, int *stack_a, int *stack_b)
{
	char	**cmds;
	int		steps;

	steps = 0;
	cmds = ft_strsplit(cmd, ' ');
	while (*cmds)
	{
		if (is_command(*cmds))
			steps += commander(*cmds, stack_a, stack_b);
		cmds++;
	}
	return (steps);
}