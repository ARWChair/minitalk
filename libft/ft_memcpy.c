/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:29:00 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:23:52 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*src_p;
	char	*dest_p;

	src_p = (char *)src;
	dest_p = (char *)dest;
	if (!dest && !src)
		return (0);
	while (n--)
		*dest_p++ = *src_p++;
	return ((void *)dest);
}
