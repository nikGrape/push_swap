/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:10:07 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/29 01:15:35 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define COMMANDS "sa sb ss pa pb ra rb rr rra rrb rrr"
# define A_TOP stack_a[A_LEN]
# define A_BOTTOM stack_a[1]
# define B_TOP stack_b[B_LEN]
# define B_BOTTOM stack_b[1]

# include "../libft/libft.h"
# include "../utils/utils.h"

void	stack_sort(int *stack_a, int *stack_b);
void	fill_stack_b(int *stack_a, int *stack_b);
int		get_index_of_best_nbr_to_push(int *stack_a, int *stack_b);
int		is_in_right_order(int *stack_a);
int		find_min(int *stack, int index);
int		find_max(int *stack, int index);
void	totle_commander(char *cmd, int *stack_a, int *stack_b);
int		does_sa_work(int *stack_a, int *stack_b);
void	rotation(int *stack_a, int *stack_b, int index);

#endif
