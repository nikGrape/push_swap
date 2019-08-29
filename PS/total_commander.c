/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_commander.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:23:17 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/28 22:08:54 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int		is_replaceable(char *res, char *cmd)
{
	int len;

	len = ft_strlen(res);
	if (ft_strequ(cmd, "ra") && ft_strequ(res + len - 3, "rb"))
		return (1);
	return (0);
}

char	*totle_commander2(char *cmd, int *stack_a, int *stack_b)
{
	static char *res;

	if (cmd == NULL)
		return (res);
	if (!res)
		res = ft_strdup(cmd);
	else
	{
		ft_strjoin_free(res, " ", 1);
		ft_strjoin_free(res, cmd, 1);
	}
	commander(cmd, stack_a, stack_b);
	return (res);
}

void	totle_commander(char *cmd, int *stack_a, int *stack_b)
{
	ft_printf("%s ", cmd);
	commander(cmd, stack_a, stack_b);
}
