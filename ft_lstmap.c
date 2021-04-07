/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:37:38 by misaev            #+#    #+#             */
/*   Updated: 2021/04/07 18:22:26 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	ft_lstiter(lst -> next, lst -> content);
	new = malloc(sizeof(ft_lstnew(f(lst))));
	if (!new)
		return (NULL);
	if (new != NULL && new -> content != NULL)
	{
		del ((new)->content);
		free((void *)new);
	}
	return (new);
}
