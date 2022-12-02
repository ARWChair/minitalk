/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:00:01 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/19 15:18:37 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*minint(void)
{
	char	*newstr;

	newstr = malloc(sizeof(char *) * 12);
	if (!newstr)
		return (0);
	newstr[0] = '-';
	newstr[1] = '2';
	newstr[2] = '1';
	newstr[3] = '4';
	newstr[4] = '7';
	newstr[5] = '4';
	newstr[6] = '8';
	newstr[7] = '3';
	newstr[8] = '6';
	newstr[9] = '4';
	newstr[10] = '8';
	newstr[11] = '\0';
	return (newstr);
}
