/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtutkuch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:45:39 by rtutkuch          #+#    #+#             */
/*   Updated: 2020/02/28 22:41:15 by rtutkuch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int len1;

	i = 0;
	if (*needle == '\0')
		return ((char) haystack);
	len1 = ft_strlen(needle);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, len1) == 0 && i + len1 <= len)
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}

