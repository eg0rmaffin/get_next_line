/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 18:36:45 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/20 18:36:47 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include <sys/types.h>
//#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

#include <stdio.h>


int		ft_check_fd(const int fd, t_bookshelf *pt)
{
	while(pt != NULL)
	{
		if (pt->fd == fd)
			return (1);
		pt = pt->next;
	}
	return (0);
}

int		create_new_lst(const int fd, t_bookshelf *pt)
{
	int res;

	while (pt->next != NULL)
		pt = pt->next;
	pt = pt->next;
	pt->fd = fd;
	if (!(pt->str = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	res = read(fd, pt->str, BUFF_SIZE);
	pt->str[BUFF_SIZE + 1] = '\0';
	return (res);
}

int		get_next_line(const int fd, char **line)
{
	static t_bookshelf *pt;
	int 				readres;

	if (!(pt = (t_bookshelf *)malloc(sizeof(t_bookshelf))))
		return (-1);
	//pt->next = NULL;
	if (ft_check_fd(fd, pt) == 0)
	{
		readres = create_new_lst(fd, pt);
		return (readres);
	}

}


int		main()
{

	int fd = open("text", O_RDONLY);
	char *str = "f";
	printf("%d", get_next_line(fd, str));
	return (0);
}





























//t_lst		*ft_setup(const int fd, char **line, t_lst *p)
//{
//	int bytes;
//	char *str;
//
//	if ((p->fd != fd) && (p != NULL))
//		p = p->next;
//	if (p == NULL)
//	{
//		p->fd = fd;
//		*line = (char*)malloc(sizeof(char) * BUFF_SIZE + 1);
//		bytes = read(fd, *line, BUFF_SIZE);
//		str = ft_strdup(*line);
//		free(*line);
//		return (p);
//	}
//
//	return (NULL);
//
//}


//int		get_next_line(const int fd, char **line)
//{
//	static t_lst *p;
//	ft_setup(fd, line, p);
//	return (0);
//}


//int		get_next_line(const int fd, char **line)
//{
//	static char *array;
//
//	if (!(*line = (char *)malloc(sizeof(char) * BUFF_SIZE)))
//		return (-1);
//	int a = read(fd, *line, BUFF_SIZE);
//	int run = 0;
//	while ((*line[run] != '\n') (*line[run] != '\0'))
//		run++;
//	int i = 0;
//	*line[run] = '\0';
//	array[i++] = *line[++run];
//	return (1)


//int main()
//{
//	char *str;
//	int fd = open("text", O_RDONLY);
//	get_next_line(fd, &str);
//}