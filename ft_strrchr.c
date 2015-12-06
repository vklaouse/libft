/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:15:22 by vklaouse          #+#    #+#             */
/*   Updated: 2015/12/03 16:10:13 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pntr;

	i = ft_strlen(s);
	pntr = (char*)s;
	while (i >= 0)
	{
		if (pntr[i] == c)
			return (&pntr[i]);
		i--;
	}
	return (NULL);
}
