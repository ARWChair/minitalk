/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:19:17 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:26:36 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	size_t	i;

	newstr = ft_strdup(s);
	i = 0;
	if (newstr == NULL)
		return (NULL);
	while (newstr[i])
	{
		newstr[i] = (*f)(i, newstr[i]);
		i++;
	}
	return (newstr);
}
