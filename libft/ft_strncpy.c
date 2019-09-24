/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:39:09 by ckumera           #+#    #+#             */
/*   Updated: 2019/09/09 16:48:44 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t run;

	run = 0;
	while (run < len && src[run] != '\0')
	{
		dst[run] = src[run];
		run++;
	}
	while (run < len)
	{
		dst[run] = '\0';
		run++;
	}
	return (dst);
}
