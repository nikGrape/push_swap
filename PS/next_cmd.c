/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:11:15 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/19 16:53:26 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *commands[12] = {"sa", "pb", "ra", "rra", "sb", "pa", "rb", "rrb", "ss", "rr", "rrr", NULL};

int		get_sum(int *stack, int *goal, int a)
{
	int i;
	int sum;

	i = 3;
	sum = 0;
	while (i <= LEN)
	{
		sum += MAX(stack[i], goal[i]) - MIN(stack[i], goal[i]);
		i++;
	}
	while (i <= goal[0] && a)
	{
		sum += goal[i];
		i++;
	}
	return (sum);
}

int		check_cmd(int *stack_a, int *stack_b, char *priv, char *cur)
{
	if (B_LEN < 2 && !ft_strchr(cur, 'a') && !ft_strequ(cur, "pb"))
		return (0);
	if (A_LEN < 2 && !ft_strchr(cur, 'b') && !ft_strequ(cur, "pa"))
		return (0);
	if ((!A_LEN && ft_strequ(cur, "pb")) || (!B_LEN && ft_strequ(cur, "pa")))
		return (0);
	if (priv && ft_strequ(priv, get_oposid(cur)))
		return (0);
	return (1);
}

char	*next_cmd(int *stack_a, int *stack_b, int *goal)
{
	int		*b_goal;
	int		sum;
	int		res;
	int		i;
	static char *priv;
	char	*c;

	b_goal = copy_stack(goal);
	booble_rsort(b_goal);
	i = 0;
	res = __INT_MAX__;
	while (commands[i])
	{
		if (!check_cmd(stack_a, stack_b, priv, commands[i]))
		{
			i++;
			continue ;
		}
		multi_commander(commands[i], stack_a, stack_b);
		sum = get_sum(stack_a, goal, 1);// + get_sum(stack_b, b_goal, 0);
		undo(commands[i], stack_a, stack_b);
		if (res > sum)
		{
			res = sum;
			c = commands[i];
		}
		ft_printf("%d\t%s\n", sum, commands[i]);
		i++;
	}
	//print_stack(stack_a, stack_b, 0);
	free(b_goal);
	priv = c;
	return (c);
}
