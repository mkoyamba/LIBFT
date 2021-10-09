/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:31:41 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/09 10:07:45 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*result;
	unsigned int	n;

	n = 0;
	result = (char *)b;
	while (n < len)
	{
		result[n] = (unsigned char)c;
		n++;
	}
	return (b);
}
