/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:00:59 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/09 11:28:37 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		n;
	char	t;

	n = 0;
	if (fd < 0)
		return ;
	if (!s || s[0] == '\0')
		return ;
	while (s[n])
	{
		t = (char)s[n];
		write(fd, &t, 1);
		n++;
	}
	write(fd, "\n", 1);
}
