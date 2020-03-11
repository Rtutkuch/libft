/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtutkuch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:34:42 by rtutkuch          #+#    #+#             */
/*   Updated: 2020/03/09 23:22:02 by rtutkuch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *str1;
	char *str2;

	i = 0;
	str1 = (char*)dst;
	str2 = ft_strndup((const char*)src, len);
	while (i < len)
	{
		*str1++ = str2[i];
		i++;
	}
	free(str2);
	return (dst);
}
