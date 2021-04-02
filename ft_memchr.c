/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:54:17 by misaev            #+#    #+#             */
/*   Updated: 2021/03/31 12:54:16 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*data;
	unsigned char	chr;
	size_t			i;

	i = 0;
	data = (unsigned char *)s;
	chr = (unsigned char)c;
	while (data[i] != '\0' && i < n)
	{
		if (data[i] == chr)
			return (data + i);
		else
			i++;
	}
	return (NULL);
}
