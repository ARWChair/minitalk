/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:26:35 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:23:49 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			counter;
	const char	*temp;

	counter = 0;
	temp = s;
	while (n--)
	{
		if (temp[counter] == (char)c)
			return ((void *)temp + counter);
		counter++;
	}
	return (NULL);
}
