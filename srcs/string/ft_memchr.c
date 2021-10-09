/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 09:44:52 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/09 11:08:39 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned char	search;
	size_t			i;

	str = (char *)s;
	search = (unsigned char)c;
	i = 0;
	if (n == 0 || !s)
		return (NULL);
	while (i < n)
	{
		if (str[i] == search)
			return ((void *)s + i);
		else
			i++;
	}
	return (NULL);
}
