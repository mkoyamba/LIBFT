/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <maxime.koyamba@outlook.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 20:34:28 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/09/25 20:47:22 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*  		==================(     INCLUDES     )==================		  */

# include <unistd.h>
# include <stdlib.h>

/*  		==================(    PROTOTYPES    )==================		  */

/*  	CTYPE	  */

int		ft_isalnum(int n);
int		ft_isalpha(int n);
int		ft_isascii(int n);
int		ft_isdigit(int n);
int		ft_isprint(int n);

#endif