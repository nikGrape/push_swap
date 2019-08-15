/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:10:52 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/14 22:30:50 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int *stack_a;
	int *stack_b;
	int	*goal;
	char *result = "";
	char *cmd;

	stack_a = init_a(argc - 1, ++argv);
	stack_b = init_b(argc);
	goal = copy_stack(stack_a);
	booble_sort(goal);
	while (!is_sorted(stack_a, stack_b))
	{
		print_stack(stack_a, stack_b, 0);
		cmd = best_cmd(stack_a, stack_b, goal);
		multi_commander(cmd, stack_a, stack_b);
		ft_strjoin(result, cmd);
		ft_strjoin(result, " ");
		ft_printf("choise - %s\n", cmd);
	}
	
	ft_printf("%s\n", cmd);
}
