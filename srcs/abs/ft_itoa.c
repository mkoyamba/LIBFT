/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:08:50 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/01 18:03:43 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include "libft.h"

static void	ft_rev_char_tab(char *tab, int size)
{
	int		n;
	char	t;

	n = 0;
	while (n < size / 2)
	{
		t = tab[n];
		tab[n] = tab[size - n - 1];
		tab[size - n - 1] = t;
		n++;
	}
}

static int	lenitoa(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*result;
	int				i;
	unsigned int	t;

	result = malloc((lenitoa(n) + 1) * sizeof(char));
	i = 0;
	if (n < 0)
	{
		t = -n;
		i++;
	}
	else
		t = n;
	while (i < lenitoa(n))
	{
		result[i] = t % 10 + '0';
		t /= 10;
		i++;
	}
	if (n < 0)
		result[lenitoa(n)] = '-';
	ft_rev_char_tab(result, lenitoa(n) + 1);
	return (result);
}

#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(INT32_MIN));
}