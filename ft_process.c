/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 04:46:27 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/18 05:04:59 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_process_arg(char *arg, t_stack	*str)
{
	char	**temp;
	int		i;
	int		index2;

	if (ft_strchr(arg, ' '))
	{
		i = 0;
		temp = ft_split(arg, ' ');
		while (temp[i])
		{
			index2 = ft_atoi(temp[i]);
			ft_lstadd_back(&str, ft_new(index2));
			i++;
		}
		return (ft_free(temp), free(temp), str);
	}
	else
	{
		i = ft_atoi(arg);
		return (ft_lstadd_back(&str, ft_new(i)), str);
	}
}

t_stack	*ft_process(int ac, char **av)
{
	t_stack	*str;
	int		index;

	index = 1;
	str = NULL;
	if (ac < 2)
		return (0);
	while (index < ac)
	{
		str = ft_process_arg(av[index], str);
		index++;
	}
	return (str);
}
