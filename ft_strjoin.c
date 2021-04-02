/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:47:06 by misaev            #+#    #+#             */
/*   Updated: 2021/03/31 18:12:56 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	b;
	size_t	c;
	char	*new;

	b = ft_strlen(s2);
	i = ft_strlen(s1);
	c = i + b;
	new = malloc(sizeof(char) * c);
	b = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[b] != '\0')
	{
		new[i] = s2[b];
		b++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
