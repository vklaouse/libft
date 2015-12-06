/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:20:53 by vklaouse          #+#    #+#             */
/*   Updated: 2015/11/30 17:17:55 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	d;

	i = 0;
	str = (unsigned char*)s;
	d = (unsigned char)c;
	if (str == NULL)
		return (0);
	while (i < n)
	{
		if (str[i] == d)
			return (&(str[i]));
		i++;
	}
	return (NULL);
}
