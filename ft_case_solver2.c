/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_solver2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:28:12 by mcantell          #+#    #+#             */
/*   Updated: 2024/05/02 14:28:35 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case_rarb_1(t_stack *stra, t_stack *strb, int c)
{
	int	i;

	i = find_in_a(stra, c);
	if (i < ft_index(strb, c))
		i = ft_index(strb, c);
	return (i);
}

int	case_rrarrb_1(t_stack *stra, t_stack *strb, int c)
{
	int	i;

	i = 0;
	if (find_in_a(stra, c))
		i = ft_lstsize(stra) - find_in_a(stra, c);
	if (i < (ft_lstsize(strb) - ft_index(strb, c)) && ft_index(strb, c))
		i = ft_lstsize(strb) - ft_index(strb, c);
	return (i);
}

int	case_rarrb_1(t_stack *stra, t_stack *strb, int c)
{
	int	i;

	i = 0;
	if (ft_index(strb, c))
		i = ft_lstsize(strb) - ft_index(strb, c);
	i = find_in_a(stra, c) + i;
	return (i);
}

int	case_rrarb_1(t_stack *stra, t_stack *strb, int c)
{
	int	i;

	i = 0;
	if (find_in_a(stra, c))
		i = ft_lstsize(stra) - find_in_a(stra, c);
	i = ft_index(strb, c) + i;
	return (i);
}
