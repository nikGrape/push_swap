/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:10:07 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/26 16:31:46 by vinograd         ###   ########.fr       */
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
int		clean_stack_a(int *stack_a, int *stack_b);
void	push_best_nbr(int *stack_a, int *stack_b, int index);
int		find_index_of_bigest_nbr(int from, int to, int *stack);
void	undo(char *cmd, int *stack_a, int *stack_b);
int		is_in_right_order(int *stack_a);
int		sort_b(int *stack_a, int *stack_b);
int		find_min(int *stack, int index);
int		find_max(int *stack, int index);
char	*totle_commander(char *cmd, int *stack_a, int *stack_b);
int		does_sa_work(int *stack_a, int *stack_b);
int		push_nbr_from_b(int *stack_a, int *stack_b);
void	rsort(int *stack);
int		get_index_of_best_nbr_to_push(int *stack_a, int *stack_b);

#endif
