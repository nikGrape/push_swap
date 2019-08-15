/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best_cmd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:47:29 by Nik               #+#    #+#             */
/*   Updated: 2019/08/14 22:30:24 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*best_cmd(int *stack_a, int *stack_b, int *goal)
{
	char	**cmd;
	int		*dup_a;
	int		*dup_b;
	char	*res;
	int		min;
	int		i;

	min = __INT_MAX__;
	cmd = ft_strsplit(COMMANDS, ' ');
	while (*cmd)
	{
		dup_a = copy_stack(stack_a);
		dup_b = copy_stack(stack_b);
		multi_commander(*cmd, dup_a, dup_b);
		i = get_value(dup_a, goal);
		if (min > i)
		{
			res = *cmd;
			min = i;
		}
		ft_printf("%d - %s\n", i, *cmd);
		free(dup_a);
		free(dup_b);
		cmd++;
	}
	return (res);
}