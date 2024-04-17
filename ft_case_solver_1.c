/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_solver_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:05:53 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/17 18:19:58 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case_rarb(t_stack *stra, t_stack *strb, int c)
{
	int	i;

	i = find_in_b(strb, c);
	if (i < index(stra, c))
		i = index(stra, c);
	return (i);
}

int	case_rrarrb(t_stack *stra, t_stack *strb, int c)
{
	int	i;

	i = 0;
	if (find_in_b(strb, c))
		i = ft_lstsize(strb) - find_in_b(strb, c);
	if (i < (ft_lstsize(stra) - find_in_a(stra, c)) && index(stra, c))
		i = ft_lstsize(stra) - find_in_a(stra, c);
	return (i);
}

int	case_rrarb(t_stack *stra, t_stack *strb, int c)
{
	int	i;

	i = 0;
	if (index(stra, c))
		i = ft_lstsize(stra) - index(stra, c);
	i = find_in_b(strb, c) + i;
	return (i);
}

int	case_rarrb(t_stack *stra, t_stack *strb, int c)
{
	int	i;

	i = 0;
	if (find_in_b(strb, c))
		i = ft_lstsize(strb) - find_in_b(strb, c);
	i = index(stra, c) + i;
	return (i);
}
