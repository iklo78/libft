/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:34:33 by misaev            #+#    #+#             */
/*   Updated: 2021/03/31 17:58:27 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sour;

	sour = (unsigned char *)src;
	dst = (unsigned char *)dest;
	while (n > 0)
	{
		*dst++ = *sour++;
		n--;
	}
	return (dest);
}
