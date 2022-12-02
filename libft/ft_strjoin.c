/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:32:22 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:26:05 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		leftcount;
	int		rightcount;

	leftcount = 0;
	rightcount = 0;
	newstr = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (newstr == NULL)
		return (NULL);
	while (s1[leftcount])
	{
		newstr[leftcount] = s1[leftcount];
		leftcount++;
	}
	while (s2[rightcount])
	{
		newstr[leftcount] = s2[rightcount];
		leftcount++;
		rightcount++;
	}
	newstr[leftcount] = '\0';
	return (newstr);
}
