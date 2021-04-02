/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:20:38 by misaev            #+#    #+#             */
/*   Updated: 2021/03/31 18:11:16 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	size_t	i;
	char	*new;

	i = 0;
	while (source[i])
		i++;
	new = malloc(sizeof(char) * i + 1);
	i = 0;
	while (source[i])
	{
		new[i] = source[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
