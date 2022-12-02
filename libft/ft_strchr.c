/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:31:51 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:24:57 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (c > 128)
		c -= 128;
	while (s[counter])
	{
		if (s[counter] == c)
			return ((char *)s + counter);
		counter++;
	}
	if (s[counter] == c)
		return ((char *)s + counter);
	if (c == '\0')
		return ((char *)s);
	return (0);
}
