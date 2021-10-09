/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:59:36 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/09 13:20:29 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *haystack, const char *needle, size_t n)
{	
	int	v;
	int	g;

	v = 1;
	g = 0;
	while (needle[g] != '\0' )
	{
		if (needle[g] != haystack[n + g])
			v = 0;
		g++;
	}
	return (v);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	n;

	c = 0;
	if (!haystack || ((len < 1) && haystack[0] != '\0') || (haystack[0] == '\0'
			&& (needle && needle[0] != '\0')))
		return (NULL);
	else if (haystack[0] == '\0' || !needle || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[c] != '\0' )
		c++;
	n = 0;
	while (n < c - 1 && n < len - 1)
	{
		if (needle[0] == haystack[n])
		{
			if (check(haystack, needle, n) == 1)
				return ((char *)haystack + n);
		}
		n++;
	}
	if (ft_strlen(needle) == 1 && needle[0] == haystack[0])
		return ((char *) haystack);
	return (NULL);
}
