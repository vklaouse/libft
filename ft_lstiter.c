/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:28:31 by vklaouse          #+#    #+#             */
/*   Updated: 2015/12/04 16:38:10 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *nxt;

	if (lst != NULL || f != NULL)
	{
		while (lst)
		{
			nxt = lst->next;
			f(lst);
			lst = nxt;
		}
	}
}
