/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 21:20:31 by vklaouse          #+#    #+#             */
/*   Updated: 2015/12/04 16:37:18 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *list;
	t_list *nxtlist;

	if (*alst == NULL || del == NULL)
		return ;
	list = *alst;
	while (list)
	{
		nxtlist = list->next;
		del((*list).content, (*list).content_size);
		list = nxtlist;
	}
	*alst = NULL;
}
