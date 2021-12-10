/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:17:26 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/12/10 12:58:25 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n;
	char			*result;

	n = 0;
	if (!s)
		return (NULL);
	if (s[0] == '\0' || !f)
		return (ft_strdup(s));
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (n < (unsigned int)ft_strlen(s))
	{
		result[n] = f(n, s[n]);
		n++;
	}
	result[n] = '\0';
	return (result);
}
