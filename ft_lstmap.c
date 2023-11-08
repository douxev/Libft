/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:15:36 by jdoukhan          #+#    #+#             */
/*   Updated: 2023/11/08 15:09:21 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*ndest;

	dest = ft_lstnew(f(lst->content));
	if (!dest)
	{
		ft_lstclear(&dest, del);
		return (NULL);
	}
	ndest = dest;
	lst = lst->next;
	while (lst)
	{
		ndest->next = ft_lstnew(f(lst->content));
		lst = lst->next;
		if (!(ndest->next))
		{
			ft_lstclear(&dest, del);
			return (NULL);
		}
		ndest = ndest->next;
		ndest->next = NULL;
	}
	return (dest);
}
