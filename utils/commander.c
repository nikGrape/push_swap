/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commander.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 00:35:41 by Nik               #+#    #+#             */
/*   Updated: 2019/08/21 16:31:16 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#define COMMANDS "sa sb ss pa pb ra rb rr rra rrb rrr"

//				 "0  3  6  9  12 15 18 21 24  28  32"

static int	commander(char *cmd, int *stack_a, int *stack_b)
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
	int		i;

	steps = 0;
	i = 0;
	cmds = ft_strsplit(cmd, ' ');
	while (cmds[i])
	{
		if (is_command(cmds[i]))
			steps += commander(cmds[i], stack_a, stack_b);
		free(cmds[i]);
		i++;
	}
	free(cmds);
	return (steps);
}
