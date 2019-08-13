/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:08:53 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/13 01:18:52 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		get_command(int *stack_a, int *stack_b)
{
	char	*cmd;
	int		steps;

	steps = 0;
	while (get_next_line(0, &cmd))
	{
		if (!ft_strcmp(cmd, "end"))
			break ;
		if (ft_strlen(cmd) == 2)
		{
			if (is_command(cmd))
				steps += commander(cmd, stack_a, stack_b);
		}
		else
			steps += multi_commander(cmd, stack_a, stack_b);
		print_stack(stack_a, stack_b);
	}
	return (steps);
}

int		main(int argc, char **argv)
{
	int		*stack_a;
	int		*stack_b;
	int		steps;

	if (argc < 2)
		return (0);
	stack_a = init_a(argc - 1, ++argv);
	stack_b = init_b(argc);
	print_stack(stack_a, stack_b);
	steps = get_command(stack_a, stack_b);
	is_sorted(stack_a, stack_b);
	ft_printf("steps: %d\n", steps);
}
