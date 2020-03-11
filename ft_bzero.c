/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtutkuch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:32:48 by rtutkuch          #+#    #+#             */
/*   Updated: 2020/03/06 22:42:48 by rtutkuch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
void ft_bzero(void *s, size_t n)
{
	size_t i;
	char *str;

	i = 0;
	str = (char*)s;
	while (i < n)
		str[i++] = 0;
}

int main()
{
  char *s = malloc(40);
  for (int i =0; i < 5; i++)
	  s[i] = 'a';
  printf("malloc %s\n", s);
  free(s);
  printf("free %s\n", s);
  char *str = malloc(40);
  printf("re malloc %s\n", str);
  ft_bzero(s, 5);
  printf("bzero %s\n", s);
}
