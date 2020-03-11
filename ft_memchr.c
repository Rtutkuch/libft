/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtutkuch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:35:12 by rtutkuch          #+#    #+#             */
/*   Updated: 2020/03/10 16:31:16 by rtutkuch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *str;

	str = (char*)s;
	i = 0;
	while (i < n )
	{
		if (*str == (unsigned char)c)
			return (str);
		else
			str++;
		i++;
	}
	return (NULL);
}
