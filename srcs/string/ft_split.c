/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:30:32 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/04 12:10:25 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	mk_word(const char *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i == 0)
			i++;
		if (s[i] == c)
		{
			if (c == '\0' || s[i + 1] == '\0')
				break ;
			else
			{
				i++;
				n++;
			}
		}
	}
	return (n);
}

char	*mk_strpush(const char *s, char c, int *n)
{
	int		i;
	int		g;
	char	*tab;

	i = *n;
	g = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	tab = malloc((i + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (g < i && s[*n] != '\0')
	{
		tab[g] = s[*n];
		g++;
		*n = *n + 1;
	}
	*n = *n + 1;
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		n;
	int		a;

	result = malloc((mk_word(s, c) + 1) * sizeof(char *));
	n = 0;
	a = 0;
	while (a < mk_word(s, c))
	{
		result[a] = mk_strpush(s, c, &n);
		a++;
	}
	result[a] = NULL;
	return (result);
}

int	main(void)
{
	int		a;
	char	**result;

	a = 0;
	result = ft_split("abcde", 'c');
	while (result[a] != NULL)
	{
		printf("%s\n", result[a]);
		a++;
	}
	printf("%s\n", result[a]);
	return (0);
}
