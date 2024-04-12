/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:44:47 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/11 23:19:49 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*f;
	size_t	t;
	size_t	i;

	t = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen((char *)s))
		len = 0;
	if (len > ft_strlen((char *)s) - start)
		len = ft_strlen((char *)s) - start;
	f = (char *)malloc(sizeof(char) * (len + 1));
	if (!f)
		return (NULL);
	while (s[t])
	{
		if (t >= start && i < len)
			f[i++] = s[t];
		t++;
	}
	f[i] = '\0';
	return (f);
}
