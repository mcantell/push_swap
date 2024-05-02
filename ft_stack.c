/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:52:21 by mcantell          #+#    #+#             */
/*   Updated: 2024/05/02 17:13:30 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//qui creeremo stack vari
t_stack	*ft_new(int i)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->num = i;
	new->index = 0;
	new->next = NULL;
	return (new);
}

//qui ti crei un nodo che si aggiunge all'ultimo
void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*war;

	war = *lst;
	if (new == NULL)
		return ;
	if (war == NULL)
	{
		*lst = new;
		return ;
	}
	while (war-> next)
		war = war-> next;
	war -> next = new;
}

//questo ti serve per capire quanto e lunga la lista
int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

//questo ti aggiunge un nodo all'inizio
void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}

//questo scorre fino ad arrivare all'ultimo nodo
t_stack	*ft_lstlast(t_stack *str)
{
	if (!str)
		return (NULL);
	while (str->next)
		str = str->next;
	return (str);
}
