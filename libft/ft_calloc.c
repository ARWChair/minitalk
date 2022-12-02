/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:46:05 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:21:44 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*cal_memset(void *s, int c, size_t n)
{
	char	*src;

	src = s;
	while (n--)
		*src++ = (char)c;
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*newstr;
	size_t	total;

	total = nmemb * size;
	newstr = malloc(total);
	if (newstr == NULL)
		return (0);
	cal_memset(newstr, 0, total);
	return ((void *)newstr);
}
