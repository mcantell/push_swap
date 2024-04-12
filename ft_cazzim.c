/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cazzim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 03:49:02 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/12 05:38:10 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//qui ci si mettono le varie bellissime operazioni
void	ft_swap(t_stack *str, char s, int flag)
{
	int	i;

	i = str->num;
	str->num = str->next->num;
	str->next->num = i;
	if (flag == 0)
	{
		write (1, "s", 1);
		write (1, &s, 1);
		write (1, "\n", 1);
	}
}

//qui adesso si fa un rotate
//indirizzo di indirizzo cosi quando ci lavori per cambiare
//cambi semplicemente il puntatore
void	ft_rotate(t_stack **str, char s, int flag)
{
	t_stack	*head;
	t_stack	*second;

	head = *str;
	(*str) = (*str)->next;
	second = *str;
	while (second->next != NULL)
		second = second->next;
	second->next = head;
	head->next = NULL;
	if (flag == 0)
	{
		write (1, "r", 1);
		write (1, &s, 1);
		write (1, "\n", 1);
	}
}
