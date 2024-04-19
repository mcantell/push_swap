/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 22:45:46 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/19 13:27:36 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//passi il puntatore al puntatore della lista &a
//tu scorri la matrice ti aggiungi pezzi alla fine e hai la testa fissata
//ci passiamo anche ac perche cosi ti fai il controllo da dove partire
t_stack	*ft_take(t_stack *a, char **av, int ac)
{
	t_stack	*d;
	char	**str;
	int		i;

	i = 0;
	if (ac == 2)
		str = ft_split(av[1], ' ');
	else
	{
		i = 1;
		str = av;
	}
	while (str[i])
	{
		d = ft_new(ft_atoi(str[i]));
		ft_lstadd_back(&a, d);
		i++;
	}
	return (a);
}

int	main(int ac, char **av)
{
	t_stack	*stra;

	if (ac < 2)
		return (0);
	stra = ft_process(ac, av);
	check_tot(ac, av);
	if (!*av[1] || !stra)
	{
		free_stack(&stra);
		art3();
		exit(-1);
	}
	else if (!ft_check_sort(stra))
		sort(&stra);
	free_stack(&stra);
	return (0);
}
