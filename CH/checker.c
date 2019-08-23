/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:08:53 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/21 17:25:31 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The first argument should be at the top of the stack
*/

#include "checker.h"

int		main(int argc, char **argv)
{
	int		*stack_a;
	int		*stack_b;
	int		steps;

	if (argc < 2)
		return (0);
	stack_a = init_a(argc - 1, ++argv);
	stack_b = init_b(argc);
	print_stack(stack_a, stack_b, 0);
	steps = get_command(stack_a, stack_b);
	ft_printf("%s\n", is_sorted(stack_a, stack_b) ?\
	"{green}OK{eoc}" : "{red}KO{eoc}");
	ft_printf("steps: %d\n", steps);
}

int		get_command(int *stack_a, int *stack_b)
{
	char	*cmd;
	int		steps;

	steps = 0;
	while (!is_sorted(stack_a, stack_b) && get_next_line(0, &cmd))
	{
		if (!ft_strcmp(cmd, "end"))
			break ;
		if (!ft_strcmp(cmd, "help"))
		{
			print_help();
			continue ;
		}
		steps += multi_commander(cmd, stack_a, stack_b);
		print_stack(stack_a, stack_b, steps);
	}
	return (steps);
}
