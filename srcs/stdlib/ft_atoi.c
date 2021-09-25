/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <maxime.koyamba@outlook.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:59:50 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/09/25 20:48:18 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	g;
	int	s;
	int	n;
	int	nombre;

	nombre = 0;
	n = 0;
	s = 1;
	while (str[n] == ' ' || str[n] == '\t' || str[n] == '\n'
		|| str[n] == '\r' || str[n] == '\v' || str[n] == '\f')
		n++;
	if (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			s = -s;
		n++;
	}
	g = 0;
	while (str[n + g] >= '0' && str[n + g] <= '9')
	{
		nombre *= 10;
		nombre += str[n + g] - '0';
		g++;
	}
	return (nombre * s);
}
