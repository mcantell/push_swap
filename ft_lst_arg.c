/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:50:32 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/17 17:35:19 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//io cosi creo la lista
void	ft_lst_arg(char **av, t_stack **str)
{
	int	i;

	i = 0;
	while (av[i])
	{
		ft_lstadd_back(str, ft_new(ft_atoi(av[i])));
		i++;
	}
}

//adesso nella lista ci appiombo roba
t_stack	*quote(char **av)
{
	t_stack	*stack;
	char	**tmp;

	tmp = ft_split(av[1], ' ');
	stack = NULL;
	ft_lst_arg(tmp, &stack);
	ft_free(tmp);
	return (stack);
}

//ora mettiamo tutto insieme
t_stack	*arg_parse(int ac, char **av)
{
	t_stack	*stack;

	stack = NULL;
	if (ac == 1)
		return (NULL);
	else if (ac == 2)
		stack = quote (av);
	else
		ft_lst_arg(av, &stack);
	return (stack);
}
