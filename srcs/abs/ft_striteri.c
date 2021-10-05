/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:33:39 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/05 13:46:13 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	n;

	n = 0;
	if (!f)
		return ;
	if (!s || s[0] == '\0')
		return ;
	while (s[n])
	{
		f(n, &s[n]);
		n++;
	}
}
