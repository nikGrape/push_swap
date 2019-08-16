/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:10:52 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/15 23:41:28 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
char *commands[12] = {"sa", "pb", "ra", "rra", "sb", "pa", "rb", "rrb", "ss", "rr", "rrr", NULL};

int		is_useless(char *cmds, char *cmd)
{
	
}

char	*check_next(int *stack_a, int *stack_b)
{
	int *dup_a;
	int *dup_b;
	int i;

	dup_a = copy_stack(stack_a);
	dup_b = copy_stack(stack_b);
	i = 0;
	while (commands[i])
	{
	//	if (is_useless(cmds, commands[i]))
	//	{
	//		i++;
	//		continue ;
	//	}
		multi_commander(commands[i], dup_a, dup_b);
		if (is_sorted(dup_a, dup_b))
			break ;
		else
			undo(commands[i], dup_a, dup_b);
		i++;
	}
	free(dup_a);
	free(dup_b);
	return (commands[i]);
}

int		main(int argc, char **argv)
{
	int *stack_a;
	int *stack_b;
	char **cmd;
	int n;
	int i;
	int j;

	cmd = (char **)malloc(sizeof(char *) * 100);
	stack_a = init_a(argc - 1, ++argv);
	stack_b = init_b(argc);
	while (n < 3)
	{
		i = n;
		while (i < n)
		{
			j = 0;
			while (commands[j])
			{
				cmd[i] = commands[j++];
				commit(stack_a, stack_b, cmd);
			}
			i++;
		}
		n++;
	}
}
