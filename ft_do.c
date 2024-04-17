/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:45:35 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/18 00:18:39 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_rarb(t_stack **stra, t_stack **strb, char c, int i)
{
	if (c == 'a')
	{
		while ((*stra)->num != i && find_in_b(*strb, i) > 0)
			double_all(stra, strb, 2);
		while ((*stra)->num != i)
			ft_rotate(stra, 'a', 0);
		while (find_in_b(*strb, i) > 0)
			ft_rotate(strb, 'b', 0);
		ft_push(stra, strb, 'b');
	}
	else
	{
		while ((*strb)->num != i && find_in_a(*stra, i) > 0)
			double_all(stra, strb, 2);
		while ((*strb)->num != i)
			ft_rotate(strb, 'b', 0);
		while (find_in_a(*stra, i) > 0)
			ft_rotate(stra, 'a', 0);
		ft_push(stra, strb, 'a');
	}
	return (-1);
}

int	apply_rrarrb(t_stack **stra, t_stack **strb, char c, int i)
{
	if (c == 'a')
	{
		while ((*stra)->num != i && find_in_b(*strb, i) > 0)
			double_all(stra, strb, 3);
		while ((*stra)->num != i)
			reverse_r(stra, 'a', 0);
		while (find_in_b(*strb, i) > 0)
			reverse_r(strb, 'b', 0);
		ft_push(stra, strb, 'b');
	}
	else
	{
		while ((*strb)->num != i && find_in_a(*stra, i) > 0)
			double_all(stra, strb, 3);
		while ((*strb)->num != i)
			reverse_r(strb, 'b', 0);
		while (find_in_a(*stra, i) > 0)
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
