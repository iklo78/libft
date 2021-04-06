/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 11:19:03 by misaev            #+#    #+#             */
/*   Updated: 2021/04/06 14:36:58 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static size_t	nbr_word(const char *s, char sep)
{
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == sep)
			len++;
		i++;
	}
	return (len + 1);
}

static char	**Cool(const char *s, char sep)
{
	size_t	i;
	size_t	len_mot;
	size_t	m_dest;
	char	**dest;

	dest = ft_calloc(sizeof(char **), nbr_word(s, sep) + 1);
	if (!dest)
		return (NULL);
	m_dest = 0;
	i = -1;
	while (s[++i])
	{
		len_mot = 0;
		if (s[i] != sep)
		{
			while (s[i + len_mot] != sep && s[i + len_mot] != '\0')
				len_mot++;
			dest[m_dest] = ft_calloc(sizeof(char), (len_mot + 1));
			ft_strncpy(dest[m_dest], (char *)&s[i], len_mot);
			m_dest++;
			i = i + len_mot - 1;
		}
	}
	dest[m_dest] = 0;
	return (dest);
}

char	**ft_split(const char *s, char sep)
{
	if (!s)
		return (NULL);
	return (Cool(s, sep));
}
