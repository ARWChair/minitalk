/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:03:00 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:21:50 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	count;
	int	number;
	int	minuses;

	count = 0;
	number = 0;
	minuses = 0;
	while (nptr[count] == ' ' || (nptr[count] >= 9 && nptr[count] < 14))
		count++;
	if (nptr[count] == '+' || nptr[count] == '-')
	{
		if (nptr[count] == '-')
			minuses++;
		count++;
	}
	while (nptr[count] >= '0' && nptr[count] <= '9')
		number = number * 10 + nptr[count++] - '0';
	if (minuses % 2 == 1)
		return (number * -1);
	return (number);
}
