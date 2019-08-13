/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:07:35 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/13 01:43:42 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"
# include "../utils/utils.h"
# define LEN stack[0]

int		get_command(int *stack_a, int *stack_b);
int		is_command(char *cmd);
int		commander(char *cmd, int *stack_a, int *stack_b);
int		multi_commander(char *cmd, int *stack_a, int *stack_b);
void	is_sorted(int *stack_a, int *stack_b);

#endif
