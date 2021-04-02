/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:47:22 by misaev            #+#    #+#             */
/*   Updated: 2021/03/31 12:50:59 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sour;
	unsigned char	chr;
	size_t			i;

	chr = (unsigned char) c;
	dst = (unsigned char *) dest;
	sour = (unsigned char *) src;
	i = 0;
	while (i < n && dst[i] != chr)
	{
		if (sour[i] == chr)
			return (dst + i + 1);
		dst[i] = sour[i];
		i++;
	}
	return (NULL);
}
