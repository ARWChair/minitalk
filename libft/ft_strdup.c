/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:27:52 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:25:21 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		counter;
	char	*newstr;

	counter = 0;
	newstr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (newstr == NULL)
		return (0);
	while (s[counter])
	{
		newstr[counter] = s[counter];
		counter++;
	}
	newstr[counter] = '\0';
	return (newstr);
}
