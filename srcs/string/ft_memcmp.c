/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:37:37 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/05 15:36:52 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*t1;
	char	*t2;
	int		a;

	a = 0;
	if (n == 0)
		return (0);
	t1 = (char *)s1;
	t2 = (char *)s2;
	while (a < n && t1[a] == t2[a])
		a++;
	return ((int)(t1[a] - t2[a]));
}
