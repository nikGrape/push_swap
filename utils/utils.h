/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinograd <vinograd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 15:14:43 by vinograd          #+#    #+#             */
/*   Updated: 2019/08/12 18:37:35 by vinograd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../libft/libft.h"
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

int		*fill_stack(int len, char **arr);

#endif
