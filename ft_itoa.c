/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:29:55 by misaev            #+#    #+#             */
/*   Updated: 2021/04/02 16:32:05 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_putnbr(int nb)
{
	size_t	nbr;

	nbr = nb;
	if (nbr < 0)
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

int	coutInt(int c)
{
	size_t	i;

	i = 0;
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

char	*ft_itoa(int n)
{
	size_t		i;
	size_t		p;
	char		*new;

	i = coutInt(n);
	p = 0;
	new = malloc(sizeof(*new) * i + 1);
	if (!new)
		return (NULL);
	if (n < 0)
	{
		p++;
		n = n * -1;
	}
	new[i] = '\0';
	i--;
	while (n > 0)
	{
		new[i] = ft_putnbr(n);
		n = n / 10;
		i--;
	}
	if (p == 1)
		new[i] = '-';
	return (new);
}
