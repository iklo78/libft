/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 08:58:03 by misaev            #+#    #+#             */
/*   Updated: 2021/04/02 08:57:06 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t   taille_mot(const char *str,char sep,int y)
{
    size_t    b;
    b = 0;
    if (str[y] == sep)
          y++;
    while (str[y] != sep && str[y] != '\0')
        y++;
    return y;
}

size_t    taille_sep(const char *str,char sep)
{
    size_t    i;
    size_t    b;
    i = 0;
    b = 0;
    while (str[i] != '\0')
    {
      if (str[i] == sep)
        b++;
      i++;
    }
    return (b + 1);
}

char **ft_split(char const *s, char sep)
{
    size_t lenS;
    size_t i;
    size_t b;
    size_t len_mot;
    size_t t;
    lenS = taille_sep(s, sep);
    char **new;
    new = malloc(sizeof(*new) * lenS);
    b = 0;
    t = 0;
    i = 0;
    len_mot = 0;

    while (i < lenS)
    {
        len_mot = taille_mot(s, sep,len_mot);
        if(len_mot == 0)
            return NULL;
        new[i] = malloc(sizeof(char) * len_mot + 1);
        i++;
    }
    i = 0;
    while(s[t] != '\0')
    {
        if(s[t] == sep)
        {
            new[b][i] = '\0';
            b++;
            t++;
            i = 0;
        }
        new[b][i] = s[t];
        i++;
        t++;
    }
    new[b][i] = '\0';
    return new;
}

int main()
{
    char *n = "toto,pythontutor,42,ongalere";
    char t = ',';
    printf("%s\n" , *ft_split(n , t));
    return 0;
}
