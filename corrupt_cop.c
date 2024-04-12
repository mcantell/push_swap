/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corrupt_cop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:26:49 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/12 04:56:08 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//qui faremmo degli ottimi controlli per vari casi
//ad esempio dobbiamo vedere se e un numero
int	ft_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

//se e compreso tra il min int e il max int
int	ft_limit(char **argv)
{
	int	num;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) > 12)
			return (0);
		num = ft_atoi(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

//se ci sono dei numeri duplicati
int	ft_duplicate(char **av, int i)
{
	int	j;
	int	len;

	j = 0;
	len = ft_strlen(av[j]);
	while (av[j])
	{
		if (j == i)
		{
			j++;
			continue ;
		}
		if (ft_strncmp(av[i], av[j], len) == 0)
			return (0);
		j++;
	}
	return (1);
}

//adesso facciamo il check con tutto insieme
void	check_tot(int ac, char **av)
{
	int		i;
	char	**str;

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
		if (!ft_number(str[i]) || !ft_limit(str) || !ft_duplicate(str, i))
		{
			write (2, "corrupt cop: imput error\n", 25);
			art3();
			exit(-1);
		}
		i++;
	}
	if (ac == 2)
		ft_free(str);
}
