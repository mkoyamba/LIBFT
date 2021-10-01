/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 20:34:28 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/01 15:37:30 by mkoyamba         ###   ########.fr       */
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

#endif