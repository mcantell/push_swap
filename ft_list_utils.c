/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:37:28 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/17 18:03:37 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//qui ci troviamo il numero piu grande
int	max(t_stack *str)
{
	int	i;

	i = str->num;
	while (str)
	{
		if (str->num > i)
			i = str-> num;
		str = str->next;
	}
	return (i);
}

//qui ci troviamo il numero piu piccolo
int	min(t_stack *str)
{
	int	i;

	i = str->num;
	while (str)
	{
		if (str->num < i)
			i = str->num;
		str = str->next;
	}
	return (i);
}

//troviamo l'indice, fai scorrere la lista finche non trovi il numero passato
int	index(t_stack *str, int num)
{
	int	i;

	i = 0;
	while (str->num != num)
	{
		str->next;
		i++;
	}
	str->index = 0;
	return (i);
}

//cerchaimo il numero dentro lo stack b ma ci creiamo un indice
int	find_in_b(t_stack *strb, int nbr)
{
	t_stack	*tmp;
	int		i;

	i = 1;
	if (nbr > strb->num && nbr < ft_lstlast(strb)->num)
		i = 0;
	else if (nbr > max(strb) || nbr < min(strb))
		i = index(strb, max(strb));
	else
	{
		tmp = strb->next;
		while (strb->num < nbr || tmp->num > nbr)
		{
			strb = strb->next;
			tmp = strb->next;
			i++;
		}
	}
	return (i);
}

//mi sembra che bisogna fare la stessa cosa nello stack a
int	find_in_a(t_stack *stra, int nbr)
{
	t_stack	*tmp;
	int		i;

	i = 1;
	if (nbr > stra->num && nbr < ft_lstlast(stra)->num)
		i = 0;
	else if (nbr > max(stra) || nbr < min(stra))
		i = index(stra, max(stra));
	else
	{
		tmp = stra->next;
		while (stra->num < nbr || tmp->num > nbr)
		{
			stra = stra->next;
			tmp = stra->next;
			i++;
		}
	}
	return (i);
}
