/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtutkuch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:33:22 by rtutkuch          #+#    #+#             */
/*   Updated: 2020/03/09 17:43:55 by rtutkuch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *str1;
	const char *str2;

	i = 0;
	str1 = (char*)dst;
	str2 = (const char*)src;
	while (i < n)
	{
		*str1++ = *str2++;
		i++;
	}
	return (dst);
}
