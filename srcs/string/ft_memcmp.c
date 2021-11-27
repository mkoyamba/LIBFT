/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:37:37 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/11/27 14:34:55 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*t1;
	char	*t2;
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	t1 = (char *)s1;
	t2 = (char *)s2;
	while (a < n && t1[a] == t2[a] && t1[a] && t2[a])
		a++;
	if (!t1[a] && !t2[a] && t2[a] > t1[a])
		return (-1);
	if (!t1[a] && !t2[a] && t2[a] < t1[a])
		return (1);
	if (a == n || (int)t1[a] == (int)t2[a])
		return (0);
	if ((int)t2[a] > (int)t1[a] && (int)t1[a] >= 0 && (int)t2[a] >= 0)
		return ((int)(t2[a] - t1[a]));
	else
		return ((int)(t1[a] - t2[a]));
}
