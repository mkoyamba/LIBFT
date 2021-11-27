/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:45:03 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/11/27 14:01:35 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mk_isinset(char c, char const *set)
{
	int	n;

	n = 0;
	while (set[n])
	{
		if (c == set[n])
			return (1);
		n++;
	}
	return (0);
}

static void	mk_begin_end(int *begin, int *end, const char *s1, const char *set)
{
	*begin = 0;
	*end = ft_strlen(s1) - 1;
	while (mk_isinset(s1[*begin], set))
		*begin = *begin + 1;
	while (mk_isinset(s1[*end], set))
		*end = *end - 1;
}

static int	check(char const *s1, char const *set)
{
	int	n;

	n = 0;
	while (mk_isinset(s1[n], set) && n < ft_strlen(s1))
		n++;
	if (n == ft_strlen(s1))
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;
	char	*result;
	int		n;

	n = 0;
	if (!s1 || s1[0] == '\0')
		return (NULL);
	if (!set || !check(s1, set) || set[0] == '\0')
		return (ft_strdup(s1));
	mk_begin_end(&begin, &end, s1, set);
	if (!check(s1, set))
		return (ft_strdup("\0"));
	result = malloc((end - begin + 2) * sizeof(char));
	if (!result)
		return (NULL);
	while (begin <= end)
	{
		result[n] = s1[begin];
		n++;
		begin++;
	}
	result[n] = '\0';
	return (result);
}
