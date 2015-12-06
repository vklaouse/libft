/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:19:34 by vklaouse          #+#    #+#             */
/*   Updated: 2015/11/30 17:17:33 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;
	char	*dest1;
	char	*src1;

	i = 0;
	dest1 = (char*)dest;
	src1 = (char*)src;
	temp = ((char*)malloc(sizeof(temp) * (n + 1)));
	if (temp == NULL)
		return (NULL);
	while (n > i)
	{
		temp[i] = src1[i];
		i++;
	}
	i = 0;
	while (n > i)
	{
		dest1[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest1);
}
