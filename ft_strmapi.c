/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vklaouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:49:20 by vklaouse          #+#    #+#             */
/*   Updated: 2015/12/03 17:41:24 by vklaouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		str = ((char*)malloc(sizeof(str) * (i + 1)));
		if (str == NULL)
			return (NULL);
		i = 0;
		while (s[i] != 0)
		{
			str[i] = f(i, s[i]);
			i++;
		}
		i = 0;
		return (str);
	}
	return (NULL);
}
