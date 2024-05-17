/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 03:58:37 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/18 04:35:45 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stra)
{
	if (min(*stra) == (*stra)->num)
	{
		reverse_r(stra, 'a', 0);
		ft_swap(stra, 'a', 0);
	}
	else if (max(*stra) == (*stra)->num)
	{
		ft_rotate(stra, 'b', 0);
		if (!(ft_check_sort(*strb)))
			ft_swap(stra, 'b', 0);
	}
	else
	{
		if (ft_index(*stra, max(*stra)) == 1)
			reverse_r(stra, 'a', 0);
		else
			ft_swap(stra, 'a', 0);
	}
}
