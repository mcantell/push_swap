/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 00:26:24 by mcantell          #+#    #+#             */
/*   Updated: 2024/05/02 14:25:49 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_type_ba(t_stack *stra, t_stack *strb)
{
	t_stack	*tmp;
	int		i;

	tmp = strb;
	i = case_rrarrb_1(stra, strb, strb->num);
	while (tmp)
	{
		if (i > case_rarb_1(stra, strb, tmp->num))
			i = case_rarb_1(stra, strb, tmp->num);
		if (i > case_rrarrb_1(stra, strb, tmp->num))
			i = case_rrarrb_1(stra, strb, tmp->num);
		if (i > case_rarrb_1(stra, strb, tmp->num))
			i = case_rarrb_1(stra, strb, tmp->num);
		if (i > case_rrarb_1(stra, strb, tmp->num))
			i = case_rrarb_1(stra, strb, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}

int	rotate_type_ab(t_stack *stra, t_stack *strb)
{
	t_stack	*tmp;
	int		i;

	tmp = stra;
	i = case_rrarrb(stra, strb, stra->num);
	while (tmp)
	{
		if (i > case_rarb(stra, strb, tmp->num))
			i = case_rarb(stra, strb, tmp->num);
		if (i > case_rrarrb(stra, strb, tmp->num))
			i = case_rrarrb(stra, strb, tmp->num);
		if (i > case_rarrb(stra, strb, tmp->num))
			i = case_rarrb(stra, strb, tmp->num);
		if (i > case_rrarb(stra, strb, tmp->num))
			i = case_rrarb(stra, strb, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}
