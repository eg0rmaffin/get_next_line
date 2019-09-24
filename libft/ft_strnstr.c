/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:00:44 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/12 17:00:47 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *nd, size_t ln)
{
	size_t run;
	size_t i;

	run = 0;
	if (nd[run] == '\0')
		return ((char*)(void *)hs + (run));
	if (hs[run] == '\0')
		return (NULL);
	while (hs[run] != '\0' && run < ln)
	{
		i = 0;
		while ((hs[run + i] == nd[i]) && (run + i < ln))
		{
			if (nd[i + 1] == '\0')
				return ((char*)(void *)hs + (run));
			i++;
		}
		run++;
	}
	return (NULL);
}
