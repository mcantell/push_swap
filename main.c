/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 22:45:46 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/12 06:06:13 by mcantell         ###   ########.fr       */
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
	t_stack	*d;
	t_stack	*a;
	// t_stack	*b;

	a = NULL;
	// b = NULL;
	check_tot(ac, (char **)av);
	a = ft_take(a, av, ac);
	d = a;
	while (d->next != NULL)
	{
		printf("%d\n", d->num);
		d = d->next;
	}
	printf("%d\n", d->num);
	ft_rotate(&a, 'a', 0);
	d = a;
	while (d->next != NULL)
	{
		printf("%d\n", d->num);
		d = d->next;
	}
	printf("%d\n", d->num);
	return (0);
}
