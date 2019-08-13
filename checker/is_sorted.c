/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:27:11 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/12 19:36:37 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	is_sorted(int *stack)
{
	int i;

	i = LEN;
	while (i > 1)
	{
		if (stack[i] >= stack[i - 1])
		{
			ft_printf("KO\n");
			return ;
		}
		i--;
	}
	ft_printf("OK\n");
}
