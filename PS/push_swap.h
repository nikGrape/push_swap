/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:10:07 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/14 22:19:06 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define COMMANDS "sa sb ss pa pb ra rb rr rra rrb rrr"

# include "../libft/libft.h"
# include "../utils/utils.h"

void	booble_sort(int *stack);
void	booble_rsort(int *stack);
int		*copy_stack(int *stack);
int		get_value(int *stack, int *goal);
char	*best_cmd(int *stack_a, int *stack_b, int *goal);

#endif
