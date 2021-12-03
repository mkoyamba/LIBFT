/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:45:03 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/12/03 12:33:24 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mk_isinset(char c, char const *set)
{
	size_t	n;

	n = 0;
	while (set[n])
	{
		if (c == set[n])
			return (1);
		n++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	char	*result;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	begin = 0;
	end = ft_strlen(s1);
	while (mk_isinset(s1[begin], set))
		begin++;
	while (mk_isinset(s1[end - 1], set))
		end--;
	if (begin == ft_strlen(s1))
	{
		result = ft_strdup("");
		if (!result)
			return (NULL);
		return (result);
	}
	return (ft_substr(s1, begin, end - begin));
}
