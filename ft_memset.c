/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:51:13 by misaev            #+#    #+#             */
/*   Updated: 2021/03/25 08:37:55 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset (void *s, int c, size_t n)

{
	size_t i;
	unsigned char *dest;
	dest = s;
	i = 0;

	while(i < n)
	{
		*dest++ = c;
		i++;
	}
	return s;
}
