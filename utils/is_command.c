/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 11:07:43 by Nik               #+#    #+#             */
/*   Updated: 2019/08/14 10:40:06 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#define COMMANDS "sa sb ss pa pb ra rb rr rra rrb rrr"
//				 "0  3  6  9  12 15 18 21 24  28  32"

int		is_command(char *cmd)
{
	int len;

	len = ft_strlen(cmd);
	if (ft_strstr(COMMANDS, cmd) && len > 1 && len < 4 && !ft_strchr(cmd, ' '))
		return (1);
	ft_printf("{red}%s{eoc} - not a command\n", cmd);
	return (0);
}
