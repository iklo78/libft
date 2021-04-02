/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:06:51 by misaev            #+#    #+#             */
/*   Updated: 2021/03/31 17:56:47 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *pter1, const void *pter2, size_t size )
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)pter1;
	ptr2 = (unsigned char *)pter2;
	i = 0;
	while (ptr1[i] && ptr2[i] && i < size)
	{
		if (ptr1[i] > ptr2[i])
			return (1);
		else if (ptr1[i] < ptr2[i])
			return (-1);
		i++;
	}
	return (0);
}
