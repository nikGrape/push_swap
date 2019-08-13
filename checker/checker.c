/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:08:53 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/12 19:34:52 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		main(int argc, char **argv)
{
	char	*line;
	int		*stack;

	stack = fill_stack(argc - 1, ++argv);
	is_sorted(stack);
	// while (get_next_line(0, &line))
	// {
	// 	ft_printf("{red}%s\n{eoc}", line);
	// }
	return (0);
}
