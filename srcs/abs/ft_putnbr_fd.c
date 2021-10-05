/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:54:55 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/05 13:29:51 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	t;
	char			c;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		t = -n;
		write(fd, "-", 1);
	}
	else
		t = n;
	if (t > 9)
		ft_putnbr(t / 10);
	t %= 10;
	c = t + '0';
	write(fd, &c, 1);
}
