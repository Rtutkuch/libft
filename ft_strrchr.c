/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtutkuch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:43:49 by rtutkuch          #+#    #+#             */
/*   Updated: 2020/03/09 23:24:50 by rtutkuch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s) - 1;
	while (s[i] != (char)c && i >= 0)
		i--;
	if (s[i] != (char)c)
		return NULL;
	else
		return (&s[i]);
}
