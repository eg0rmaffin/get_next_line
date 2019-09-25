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
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# define BUFF_SIZE 100

typedef struct			s_lst
{
	struct s_lst		*next;
	char				*str;
	int					fd;
}						t_bookshelf;

int						get_next_line(const int fd, char **line);

#endif
