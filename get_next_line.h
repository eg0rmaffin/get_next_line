/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:46:09 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/24 20:46:59 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEX_LINE_H
#include "libft/libft.h"

typedef struct 	s_list
{
	struct s_list *next;
	char	c;
	int		fd;
}				t_list;


#endif
