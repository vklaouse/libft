/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:44:36 by vklaouse          #+#    #+#             */
/*   Updated: 2015/11/30 17:26:26 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = ft_strlen(dest);
	str = (char*)dest;
	while (i < n)
	{
		str[j + i] = src[i];
		i++;
	}
	return (str);
}
