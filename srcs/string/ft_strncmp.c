/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:54:40 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/01 15:56:10 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	a;

	a = 0;
	while (s1[a] && a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	if (s2[a] == '\0' || a == n)
		return (0);
	else
		return (-s2[a]);
}
