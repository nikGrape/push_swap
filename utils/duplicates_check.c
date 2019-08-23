/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicates_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 11:20:00 by Nik               #+#    #+#             */
/*   Updated: 2019/08/21 16:34:27 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static int		is_duplicate(int n, int *arr)
{
	int i;

	i = arr[0];
	while (i > 0)
	{
		if (arr[i] == n)
			return (1);
		i--;
	}
	return (0);
}

static void		del_duplicate(int *stack, int num)
{
	while (++num <= LEN)
	{
		stack[num - 1] = stack[num];
	}
	stack[num] = 0;
	LEN--;
}

static void		duplicate_hendler(int *stack, int num)
{
	char *answer;

	ft_printf("your input contains duplicate {red}%d{eoc}\n", stack[num]);
	ft_printf("would you like to del it (yes/no)\t");
	while (get_next_line(0, &answer))
	{
		if (!ft_strcmp(answer, "yes"))
		{
			del_duplicate(stack, num);
			break ;
		}
		else if (!ft_strcmp(answer, "no"))
		{
			ft_printf("{red}ERROR{eoc} - invalid input\n");
			free(answer);
			exit(1);
		}
		ft_printf("would you like to del it (yes/no)\t");
		free(answer);
	}
	free(answer);
}

void			duplicates_check(int *stack)
{
	int		*new;
	int		i;
	int		num;

	i = 1;
	new = init_b(LEN);
	while (i <= LEN)
	{
		if (is_duplicate(stack[i], new))
			duplicate_hendler(stack, i);
		else
		{
			new[0]++;
			new[new[0]] = stack[i];
			num = stack[i];
			i++;
		}
	}
}
