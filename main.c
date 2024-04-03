/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:07:19 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/03 12:17:00 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//returni zero perche a noi serve che vengano mostrati a schermo solo
// i tipi di mosse fatte e giustamente se hai un solo numero vuol dire
//fhe e gia ordinata

int	main(int ac, char **av)
{
	t_stack	*stack;

	if (ac < 2)
		return (0);
	stack = init(ac, av);
	ft_sorter(satck);
	ft_exit(stack);
	return (0);
}
