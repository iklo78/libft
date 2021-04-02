/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:23:00 by misaev            #+#    #+#             */
/*   Updated: 2021/04/02 15:35:21 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nbword(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j + 1);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	mot;
	size_t	tab;
	char	**new;

	tab = 0;
	new = ft_calloc(sizeof(*new), nbword(s, c) + 1);
	i = 0;
	while (s[i])
	{
		mot = 0;
		if (s[i] != c)
		{
			while (s[i + mot] != c && s[i + mot] != '\0')
				mot++;
			new[tab] = ft_calloc(sizeof(char *), (mot + 1));
			ft_strlcpy(new[tab], (char *)&s[i], mot);
			tab++;
			i = i + mot - 1;
		}
		i++;
	}
	new[tab] = 0;
	return (new);
}
