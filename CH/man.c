/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   man.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 15:24:34 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/29 16:46:54 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print_man(void)
{
	ft_printf("sa/sb/ss - swap the first two numbers in the stack a/b/both\n");
	ft_printf("pa - push the first number from stack b to stack a\n");
	ft_printf("pb - push the first number from stack a to stack b\n");
	ft_printf("ra/rb/rr - put the fist number to the \
	bottom of the stack a/b/both\n");
	ft_printf("rra/rrb/rrr - put the last number to the \
	top of the stack a/b/both\n");
}
