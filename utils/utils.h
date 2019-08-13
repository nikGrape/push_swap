/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 15:14:43 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/12 23:46:55 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../libft/libft.h"
# define LEN stack[0]
# define A_LEN stack_a[0]
# define B_LEN stack_b[0]

/*
**	swap two first elements
*/
void	sa(int *stack_a);
void	sb(int *stack_b);
void	ss(int *stack_a, int *stack_b);
/*
**	put elem pa(to, from)
*/
void	pa(int *stack_a, int *stack_b);
void	pb(int *stack_a, int *stack_b);
/*
**	The first element becomes the last one
*/
void	ra(int *stack_a);
void	rb(int *stack_b);
void	rr(int *stack_a, int *stack_b);
/*
**	The last element becomes the first one
*/
void	rra(int *stack_a);
void	rrb(int *stack_b);
void	rrr(int *stack_a, int *stack_b);

int		*init_a(int len, char **arr);
int		*init_b(int len);
void	print_stack(int *stack_a, int *stack_b);

#endif
