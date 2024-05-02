/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:45:35 by mcantell          #+#    #+#             */
/*   Updated: 2024/05/02 17:26:18 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c && find_in_b(*b, c) > 0)
			double_all(a, b, 2);
		while ((*a)->num != c)
			ft_rotate(a, 'a', 0);
		while (find_in_b(*b, c) > 0)
			ft_rotate(b, 'b', 0);
		ft_push(a, b, 'b');
	}
	else
	{
		while ((*b)->num != c && find_in_a(*a, c) > 0)
			double_all(a, b, 2);
		while ((*b)->num != c)
			ft_rotate(b, 'b', 0);
		while (find_in_a(*a, c) > 0)
			ft_rotate(a, 'a', 0);
		ft_push(a, b, 'a');
	}
	return (-1);
}

int	apply_rrarrb(t_stack **stra, t_stack **strb, char s, int c)
{
	if (s == 'a')
	{
		while ((*stra)->num != c && find_in_b(*strb, c) > 0)
			double_all(stra, stra, 3);
		while ((*stra)->num != c)
			reverse_r(stra, 'a', 0);
		while (find_in_b(*strb, c) > 0)
			reverse_r(strb, 'b', 0);
		ft_push(stra, strb, 'b');
	}
	else
	{
		while ((*strb)->num != c && find_in_a(*stra, c) > 0)
			double_all(stra, strb, 3);
		while ((*strb)->num != c)
			reverse_r(strb, 'b', 0);
		while (find_in_a(*stra, c) > 0)
			reverse_r(stra, 'a', 0);
		ft_push(stra, strb, 'a');
	}
	return (-1);
}

int	apply_rrarb(t_stack **stra, t_stack **strb, char c, int i)
{
	if (c == 'a')
	{
		while ((*stra)->num != i)
			reverse_r(stra, 'a', 0);
		while (find_in_b(*strb, i) > 0)
			ft_rotate(strb, 'b', 0);
		ft_push(stra, strb, 'b');
	}
	else
	{
		while (find_in_a(*stra, i) > 0)
			reverse_r(stra, 'a', 0);
		while ((*strb)->num != i)
			ft_rotate(strb, 'b', 0);
		ft_push(stra, strb, 'a');
	}
	return (-1);
}

int	apply_rarrb(t_stack **stra, t_stack **strb, char c, int i)
{
	if (c == 'a')
	{
		while ((*stra)->num != i)
			ft_rotate(stra, 'a', 0);
		while (find_in_b(*strb, i) > 0)
			reverse_r(strb, 'b', 0);
		ft_push(stra, strb, 'b');
	}
	else
	{
		while (find_in_a(*stra, i) > 0)
			ft_rotate(stra, 'a', 0);
		while ((*strb)->num != i)
			reverse_r(strb, 'b', 0);
		ft_push(stra, strb, 'a');
	}
	return (-1);
}
