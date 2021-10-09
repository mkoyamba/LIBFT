/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:17:26 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/09 12:51:20 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n;
	char			*result;

	n = 0;
	if (!s || s[0] == '\0' || !f)
	{
		result = ft_strdup(s);
		if (!result)
			return (NULL);
		return (result);
	}
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[n])
	{
		result[n] = f(n, s[n]);
		n++;
	}
	return (result);
}
