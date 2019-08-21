/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:10:07 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/21 00:11:16 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define COMMANDS "sa sb ss pa pb ra rb rr rra rrb rrr"

# include "../libft/libft.h"
# include "../utils/utils.h"

int		*copy_stack(int *stack);
char	*best_cmd(int *stack_a, int *stack_b);
void	undo(char *cmd, int *stack_a, int *stack_b);
void	booble_sort(int *stack);
void	booble_rsort(int *stack);
char	*get_oposid(char *cmd);
char	*next_cmd(int *stack_a, int *stack_b, int *goal);
int		fill_b(int *stack_a, int *stack_b);
int		find_index_of_smolest_nbr(int from, int to, int *stack);
int		lol(int *stack_a, int *stack_b);
int		find_min(int *stack, int index);

#endif
