/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:27:29 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/11 14:28:36 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strncmp(const char *str1, const char *str2, size_t s)
{
	while (s > 0 && *str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
		s--;
	}
	if (s == 0)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
