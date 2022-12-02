/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:27:52 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:23:47 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_chr;
	unsigned char	*s2_chr;
	size_t			counter;

	s1_chr = (unsigned char *)s1;
	s2_chr = (unsigned char *)s2;
	counter = 0;
	if (n == 0)
		return (0);
	while (counter < n)
	{
		if (s1_chr[counter] != s2_chr[counter])
			return (s1_chr[counter] - s2_chr[counter]);
		counter++;
	}
	return (0);
}
