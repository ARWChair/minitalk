/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:30:28 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:23:55 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *target, const void *source, size_t size)
{
	unsigned char	*target_chr;
	unsigned char	*source_chr;
	size_t			counter;

	target_chr = (unsigned char *)target;
	source_chr = (unsigned char *)source;
	counter = 0;
	if (!target && !source)
		return (0);
	if (source_chr < target_chr)
		while (++counter <= size)
			target_chr[size - counter] = source_chr[size - counter];
	else
	{
		while (size--)
			*target_chr++ = *source_chr++;
	}
	return ((void *) target);
}
