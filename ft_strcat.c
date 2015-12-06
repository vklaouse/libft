/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:43:37 by vklaouse          #+#    #+#             */
/*   Updated: 2015/11/30 16:33:25 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		j;
	char	*src1;

	i = 0;
	j = ft_strlen(dest);
	src1 = (char*)src;
	while (src1[i] != '\0')
	{
		dest[j + i] = src1[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
