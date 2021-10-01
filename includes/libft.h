/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 20:34:28 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/01 16:40:59 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*  		==================(     INCLUDES     )==================		  */

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

/*  		==================(    PROTOTYPES    )==================		  */

/*  	CTYPE	  */

int		ft_isalnum(int n);
int		ft_isalpha(int n);
int		ft_isascii(int n);
int		ft_isdigit(int n);
int		ft_isprint(int n);
int		ft_atoi(const char *str);
size_t	ft_strlcpy(char *restrict dst,
			const char *restrict src, size_t dstsize);
int		ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif