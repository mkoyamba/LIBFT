/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:59:21 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/09 10:37:47 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*tdst;
	char	*tsrc;
	size_t	a;

	tdst = (char *)dst;
	tsrc = (char *)src;
	a = 0;
	while (a < n)
	{
		tdst[a] = tsrc[a];
		a++;
	}
	return (dst);
}
