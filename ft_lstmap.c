/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:34:20 by vklaouse          #+#    #+#             */
/*   Updated: 2015/12/04 16:31:53 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *nxt;

	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst)
	{
		new = (t_list*)malloc(sizeof(t_list));
		if (new == NULL)
			return (NULL);
		nxt = lst->next;
		new = f(lst);
		lst = nxt;
	}
	return (new);
}
