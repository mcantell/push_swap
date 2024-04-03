/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corrupt_cop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:26:49 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/03 12:36:06 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//duplicate lo usiamo subito subito per vedere se abbiamo dei numeri
//duplicati

int	duplicate(t_stack stack, int j)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (s < j)
	{
		while (stack->a[i])
		{
			if (stack->a[i] == stack->a[s])
				return (1);
			i++;
		}
		s++;
		i = s;
	}
	return (1);
}
//da modificare se voglio che mi dia la scritta di errore
