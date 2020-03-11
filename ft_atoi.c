/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtutkuch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:46:59 by rtutkuch          #+#    #+#             */
/*   Updated: 2020/02/28 15:46:23 by rtutkuch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while(*str == ' ' || (*str >= 9  && *str <= 13))
		str++;
	if(*str == '+')
		str++;
	else if(*str == '-')
	{
		sign = -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		num = num * 10  + *str - '0';
		str++;
	}
	return(sign * num);
}
