/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   undo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 20:09:40 by Nik               #+#    #+#             */
/*   Updated: 2019/08/21 16:58:59 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char		*get_oposid(char *cmd)
{
	if (ft_strequ(cmd, "sa"))
		return ("sa");
	else if (ft_strequ(cmd, "sb"))
		return ("sb");
	else if (ft_strequ(cmd, "ss"))
		return ("ss");
	else if (ft_strequ(cmd, "pa"))
		return ("pb");
	else if (ft_strequ(cmd, "pb"))
		return ("pa");
	else if (ft_strequ(cmd, "ra"))
		return ("rra");
	else if (ft_strequ(cmd, "rb"))
		return ("rrb");
	else if (ft_strequ(cmd, "rr"))
		return ("rrr");
	else if (ft_strequ(cmd, "rra"))
		return ("ra");
	else if (ft_strequ(cmd, "rrb"))
		return ("rb");
	else if (ft_strequ(cmd, "rrr"))
		return ("rr");
	else
		return (NULL);
}

void			undo(char *cmd, int *stack_a, int *stack_b)
{
	multi_commander(get_oposid(cmd), stack_a, stack_b);
}
