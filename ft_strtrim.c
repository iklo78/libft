/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:23:35 by misaev            #+#    #+#             */
/*   Updated: 2021/03/26 18:01:33 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *new;
	size_t i;
	size_t b;
	size_t c;
	b = 0;
	i = 0;
	c = 0;
	while(s1[i] != '\0')
		i++;
	new= malloc(sizeof(char) * i);
	i = 0;
	while(s1[i] != '\0')
	{
		if(new[i] == set[b])
			i++;
		new[i] = s1[b];
		b++;
		i++;
	}
	return new;
}
