/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:08:53 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/12 12:21:56 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		main(int argc, char **argv)
{
	char *line;

	while (get_next_line(0, &line))
	{
		ft_printf("{red}%s\n{eoc}", line);
	}
	return (0);
}
