/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:13:02 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/03 12:39:11 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//duplicate ti cerca se in tutti i numeri dati ci sono dei duplicati
//quindi quando lo vado a creare devo ricordarmi di crearmi anche un
//messaggio di errore per quando ci sono

void	ft_fill(int ac, char **av, t_stack stack, int i)
{
	int	j;

	j = 0;
	stack->a = (int *)malloc(sizeof(int) * (ac - 1));
	stack->b = (int *)malloc(sizeof(int) * (ac - 1));
	stack->a[j++]= ft_atoi(av[i++], stack->a);
	duplicate(stack->a, j);
	stack->last_a = j;
	stack->last_b = 0;
}
