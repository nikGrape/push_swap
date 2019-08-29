/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_commander.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:23:17 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/29 01:26:36 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	totle_commander(char *cmd, int *stack_a, int *stack_b)
{
	ft_printf("%s ", cmd);
	commander(cmd, stack_a, stack_b);
}
