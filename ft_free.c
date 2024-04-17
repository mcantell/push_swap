/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 00:31:27 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/17 16:55:30 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//questo e per freeare il nostro split in generale
void	ft_free(char **str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

//adesso si fa un free pero degli stack
void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		(*stack)->num = 0;
		free(*stack);
		*stack = tmp;
	}
}
