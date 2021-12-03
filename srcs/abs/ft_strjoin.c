/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:46:43 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/12/03 13:49:13 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	mk_strcpy(char *result, char *str, int n)
{
	int	a;

	a = 0;
	while (str && str[a] != '\0')
	{
		result[n] = str[a];
		n++;
		a++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	mk_strcpy(result, (char *)s1, 0);
	mk_strcpy(result, (char *)s2, ft_strlen(s1));
	result[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (result);
}
