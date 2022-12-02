/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:38:30 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:26:39 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (((unsigned char)s1[count] || (unsigned char)s2[count]) && count < n)
	{
		if ((unsigned char)s1[count] == (unsigned char)s2[count])
			count++;
		else
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
	}
	return (0);
}
