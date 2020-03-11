/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtutkuch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:44:14 by rtutkuch          #+#    #+#             */
/*   Updated: 2020/02/28 21:36:53 by rtutkuch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int len;

	i = 0;
	if (*needle == '\0')
		return ((char) haystack);
	len = ft_strlen(needle);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, len) == 0)
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
