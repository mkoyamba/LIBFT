/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:59:36 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/01 17:10:35 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *haystack, const char *needle, size_t *n, int *g)
{	
	int	v;

	v = 1;
	while (needle[*g] != '\0' )
	{
		if (needle[*g] != haystack[*n + *g])
			v = 0;
		*g = *g + 1;
	}
	return (v);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	n;
	int		g;
	int		v;

	c = 0;
	if (len == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[c] != '\0' )
		c++;
	n = 0;
	while (n < c - 1 && n < len - 1)
	{
		if (needle[0] == haystack[n])
		{
			g = 0;
			v = check(haystack, needle, &n, &g);
			if (v == 1)
				return ((char *)haystack + n);
		}
		n++;
	}
	return (NULL);
}
