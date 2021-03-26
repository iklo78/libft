/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 09:19:47 by misaev            #+#    #+#             */
/*   Updated: 2021/03/26 15:13:17 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc (size_t num, size_t size)
{
	char 	*coco;
	size_t i;

	i = 0;
	coco = malloc(num * size);
	if (!coco)
		return 0;
	while (i < size)
	{
		coco[i] = 0;
		i++;
	}
	return coco;
}
