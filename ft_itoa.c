/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:29:55 by misaev            #+#    #+#             */
/*   Updated: 2021/04/05 18:34:37 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_putnbr(long long int nb)
{
    size_t    nbr;
    size_t    i;

    i = 0;
    nbr = nb;
    if (nbr < i)
    {
        return ('-');
        nbr = nbr * -1;
    }
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        return (nbr % 10 + '0');
    }
    if (nbr <= 9)
        return (nbr + '0');
    return (0);
}

int    coutInt(long long int c)
{
    size_t    i;

    i = 0;
    if (c == 0)
      return (i + 1);
    if (c < 0)
    {
        c = c * -1;
        i++;
    }
    while (c > 0)
    {
        c = c / 10;
        i++;
    }
    return (i);
}
void filnewchar(long long int m ,char *new, int i)
{
   while (m > 0 && m != 0)
    {
        new[i] = ft_putnbr(m);
        m = m / 10;
        i--;
    }
}
char    *ft_itoa(int n)
{
    int        i;
    size_t        p;
    char        *new;
    long long int m;

    m = n;
    i = coutInt(m);
    p = 0;
    new = malloc(sizeof(*new) * i + 1);
    if (m < 0)
    {
        p++;
        m = m * -1;
    }
    new[i] = '\0';
    i--;
    if (m == 0)
      new[i] = '0';
    filnewchar(m , new, i);
    if (p == 1)
        new[i] = '-';
    return (new);
}
