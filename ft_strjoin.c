/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:57:36 by vklaouse          #+#    #+#             */
/*   Updated: 2015/12/03 16:17:12 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		j = i;
		i = 0;
		while (s2[i] != '\0')
		{
			str[j] = s2[i];
			i++;
			j++;
		}
		return (str);
	}
	return (NULL);
}
