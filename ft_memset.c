/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtutkuch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:32:08 by rtutkuch          #+#    #+#             */
/*   Updated: 2020/03/06 22:08:42 by rtutkuch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	char *a;
	
	a = (char*)b;
	i = 0;
	while (i < len)
		a[i++] = (unsigned char)c;
	return (b);
}
