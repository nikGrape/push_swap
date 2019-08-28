/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:10:52 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/26 18:07:27 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		cmd_print(char *cmds)
{
	int		i;
	char	**arr;

	arr = ft_strsplit(cmds, ' ');
	free(cmds);
	i = 0;
	while (arr[i])
	{
		ft_printf("%s\n", arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	print_a(int *stack_a)
{
	int i;
	int j;

	i = A_LEN;
	while (i)
	{
		j = 0;
		while (j++ < stack_a[i])
			ft_printf("{green}-{eoc}");
		ft_printf("\n");
		i--;
	}
}

int		main(int argc, char **argv)
{
	int		*stack_a;
	int		*stack_b;
	int		steps;
	char	*res;

	stack_a = init_a(argc - 1, ++argv);
	stack_b = init_b(argc);
	clean_stack_a(stack_a, stack_b);
	print_stack(stack_a, stack_b, steps);
	stack_sort(stack_a, stack_b);
	//print_a(stack_a);
	res = totle_commander(NULL, NULL, NULL);
	//ft_printf("%s\n", res);
	cmd_print(res);
}
