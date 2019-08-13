/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:27:11 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/13 00:11:07 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	is_sorted(int *stack_a, int *stack_b)
{
	int i;

	i = A_LEN;
	while (i > 1)
	{
		if (stack_a[i] >= stack_a[i - 1] || B_LEN != 0)
		{
			ft_printf("{red}KO{eoc}\n");
			return ;
		}
		i--;
	}
	ft_printf("{green}OK{eoc}\n");
}
