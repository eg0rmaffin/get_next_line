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

#define BUFF_SIZE 1488

int		get_next_line(const int fd, char **line)
{
	static char *array;

	if (!(*line = (char *)malloc(sizeof(char) * BUFF_SIZE)))
		return (-1);
	int a = read(fd, *line, BUFF_SIZE);
	int run = 0;
	while ((*line[run] != '\n') (*line[run] != '\0'))
		run++;
	int i = 0;
	*line[run] = '\0';
	array[i++] = *line[++run];
	return (1)



}

int main()
{
	char *str;
	get_next_line(fd, &str);
}