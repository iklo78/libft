/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:34:33 by misaev            #+#    #+#             */
/*   Updated: 2021/03/25 13:49:49 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *dst;
	unsigned char *sour;

	sour = (unsigned char*) src;
	dst = (unsigned char*) dest;
	i = 0;
	
	while(n > 0)
	{
		*dst++ = *sour++;
		n--;
	}
	return dest;
}
