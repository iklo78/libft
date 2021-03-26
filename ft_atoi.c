/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 09:53:40 by misaev            #+#    #+#             */
/*   Updated: 2021/03/24 11:44:29 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int i;
	int f;
	int s;

	s = 0;
	f = 0;
	i = 0;
	while(nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
		i++;
	if(nptr[i + 1] < '0' && nptr[i + 1] > '9')
		return 0;
	else if (nptr[i] == '-' || nptr[i] == '+')
	{
		s++;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
			f = (f * 10) + nptr[i] - '0';
			i++;
	}

	if(nptr[i] < '0' && nptr[i] > '9')
		return 0;
	if(s == 1)
		f = f * -1;
	return f;
}
