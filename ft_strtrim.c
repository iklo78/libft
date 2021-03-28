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
    size_t d;
    i = 0;
    b = 0;
    c = 0;
    d = 0;
    while (s1[i] != '\0')
        i++;
    while (set[d] != '\0')
        d++;
    new = malloc(sizeof(char) * i);
    i = 0;
    while(s1[i] != '\0')
    {
        if(i == 0)
        {
            while(s1[i] == set[b])
            {
                i++;
                b++;
            }
        }
        new[c] = s1[i];
        c++;
        i++;
    }
    if (new[c - d] == set[0])
        new[c - d] = '\0';
    new[c] = '\0';
    return new;
}
