/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:40:58 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:26:46 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	counter;
	int	counter2;

	counter = 0;
	counter2 = 0;
	while (c > 128)
		c -= 128;
	while (s[counter])
		counter++;
	while (s[counter2])
	{
		if (s[counter] == c)
			return ((char *)s + counter);
		counter--;
		counter2++;
	}
	if (s[counter] == c)
		return ((char *)s + counter);
	return (NULL);
}
