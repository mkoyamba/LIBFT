/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:26:26 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/12/03 14:52:39 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tdst;
	const char	*tsrc;

	tdst = (char *)dst;
	tsrc = (const char *)src;
	if (!tsrc || !*tsrc)
		return (dst);
	if (dst > src)
	{
		while (len - 1 > 0)
		{
			tdst[len - 1] = tsrc[len - 1];
			len--;
		}
		tdst[len - 1] = tsrc[len - 1];
	}
	if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
