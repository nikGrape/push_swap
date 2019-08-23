/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_commander.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:23:17 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/21 14:40:07 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*totle_commander(char *cmd, int *stack_a, int *stack_b)
{
	static char *result;

	if (cmd == NULL)
		return (result);
	if (result == NULL)
		result = ft_strdup(cmd);
	else
	{
		result = ft_strjoin_free(result, " ", 1);
		result = ft_strjoin_free(result, cmd, 1);
	}
	multi_commander(cmd, stack_a, stack_b);
	return (result);
}
