/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:07:35 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/29 16:47:00 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"
# include "../utils/utils.h"

int		get_command(int *stack_a, int *stack_b);
void	print_man();
int		multi_commander(char *cmd, int *stack_a, int *stack_b);

#endif
