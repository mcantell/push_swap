/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 03:49:02 by mcantell          #+#    #+#             */
/*   Updated: 2024/05/02 15:49:50 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//qui ci si mettono le varie bellissime operazioni
void	ft_swap(t_stack **str, char s, int flag)
{
	int	i;

	i = (*str)->num;
	(*str)->num = (*str)->next->num;
	(*str)->next->num = i;
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
	t_stack	*last;

	head = *str;
	(*str) = (*str)->next;
	last = *str;
	while (last->next != NULL)
		last = last->next;
	last->next = head;
	head->next = NULL;
	if (flag == 0)
	{
		write (1, "r", 1);
		write (1, &s, 1);
		write (1, "\n", 1);
	}
}

//per il meme facciamoci il push
void	ft_push(t_stack **stra, t_stack **strb, char s)
{
	t_stack	*tmp;

	if (s == 'b')
	{
		if (*stra != NULL)
		{
			tmp = *stra;
			*stra = (*stra)->next;
			tmp->next = *strb;
			*strb = tmp;
		}
	}
	else
	{
		if (*strb != NULL)
		{
			tmp = *strb;
			*strb = (*strb)->next;
			tmp->next = *stra;
			*stra = tmp;
		}
	}
	write (1, "p", 1);
	write (1, &s, 1);
	write (1, "\n", 1);
}

//mi sa serve il reverse rotate danfdo a last l'ultimo e piazzandolo in cima
void	reverse_r(t_stack **str, char s, int flag)
{
	t_stack	*last;
	t_stack	*prelast;

	prelast = *str;
	while (prelast->next->next != NULL)
		prelast = prelast->next;
	last = prelast->next;
	prelast->next = NULL;
	last->next = *str;
	*str = last;
	if (flag == 0)
	{
		write (1, "rr", 2);
		write (1, &s, 1);
		write (1, "\n", 1);
	}
}

//mi mancano quelle che effettivamente sono doppie
//cioe quelle che devi fare in sincro
void	double_all(t_stack	**stra, t_stack **strb, int flag)
{
	if (flag == 0)
	{
		ft_swap(stra, 'a', 1);
		ft_swap(strb, 'b', 1);
		write (1, "ss", 2);
		write (1, "\n", 1);
	}
	if (flag == 2)
	{
		ft_rotate(stra, 'a', 1);
		ft_rotate(strb, 'b', 1);
		write (1, "rr", 2);
		write (1, "\n", 1);
	}
	if (flag == 3)
	{
		reverse_r(stra, 'a', 1);
		reverse_r(strb, 'b', 1);
		write (1, "rrr", 3);
		write (1, "\n", 1);
	}
}
