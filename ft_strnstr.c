/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:34:51 by misaev            #+#    #+#             */
/*   Updated: 2021/03/24 09:46:09 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big,const char *little ,size_t len)
{
	size_t i;
	size_t j;


	i = 0;
	if (little[i] == '\0')
		return (char *) big + i;
	while(big[i] != '\0' && i < len)
	{
		j = 0;
		while(big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return (char *)big + i;
			j++;
		}
		i++;
	}
	return NULL;
}
