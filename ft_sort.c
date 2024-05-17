/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 04:10:14 by mcantell          #+#    #+#             */
/*   Updated: 2024/05/02 16:27:04 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_b_till_3(t_stack **stra, t_stack **strb)
{
	t_stack	*tmp;
	int		i;

	while (ft_lstsize(*stra) > 3 && !ft_check_sort(*stra))
	{
		tmp = *stra;
		i = rotate_type_ab(*stra, *strb);
		while (i >= 0)
		{
			if (i == case_rarb(*stra, *strb, tmp->num))
				i = apply_rarb(stra, strb, tmp->num, 'a');
			else if (i == case_rrarrb(*stra, *strb, tmp->num))
				i = apply_rrarrb(stra, strb, 'a', tmp->num);
			else if (i == case_rarrb(*stra, *strb, tmp->num))
				i = apply_rarrb(stra, strb, 'a', tmp->num);
			else if (i == case_rrarb(*stra, *strb, tmp->num))
				i = apply_rrarb(stra, strb, 'a', tmp->num);
			else
				tmp = tmp->next;
		}
	}
}

t_stack	*sort_b(t_stack **stra)
{
	t_stack	*strb;

	strb = NULL;
	if (ft_lstsize(*stra) > 3 && !ft_check_sort(*stra))
		ft_push(stra, &strb, 'b');
	if (ft_lstsize(*stra) > 3 && !ft_check_sort(*stra))
		ft_push(stra, &strb, 'b');
	if (ft_lstsize(*stra) > 3 && !ft_check_sort(*stra))
		sort_b_till_3(stra, &strb);
	if (!ft_check_sort(*stra))
		sort_three(stra);
	return (strb);
}

t_stack	**sort_a(t_stack **stra, t_stack **strb)
{
	t_stack	*tmp;
	int		i;

	while (*strb)
	{
		tmp = *strb;
		i = rotate_type_ba(*stra, *strb);
		while (i >= 0)
		{
			if (i == case_rarb_1(*stra, *strb, tmp->num))
				i = apply_rarb(stra, strb, tmp->num, 'b');
			else if (i == case_rarrb_1(*stra, *strb, tmp->num))
				i = apply_rarrb(stra, strb, 'b', tmp->num);
			else if (i == case_rrarrb_1(*stra, *strb, tmp->num))
				i = apply_rrarrb(stra, strb, 'b', tmp->num);
			else if (i == case_rrarb_1(*stra, *strb, tmp->num))
				i = apply_rrarb(stra, strb, 'b', tmp->num);
			else
				tmp = tmp->next;
		}
	}
	return (stra);
}

void	sort(t_stack **stra)
{
	t_stack	*strb;
	int		i;

	strb = NULL;
	if (ft_lstsize(*stra) == 2)
		ft_swap(stra, 'a', 0);
	else
	{
		strb = sort_b(stra);
		stra = sort_a(stra, &strb);
		i = ft_index(*stra, min(*stra));
		if (i < ft_lstsize(*stra) - i)
		{
			while ((*stra)->num != min(*stra))
				ft_rotate(stra, 'a', 0);
		}
		else
		{
			while ((*stra)->num != max(*stra))
				reverse_r(stra, 'a', 0);
		}
	}
}
