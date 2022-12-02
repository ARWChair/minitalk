/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:31:16 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:27:23 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	identifier(char *numbers)
{
	int	counter;
	int	number;

	number = 0;
	counter = 0;
	while (numbers[counter])
	{
		if (numbers[counter] >= '0' && numbers[counter] <= '9')
			number++;
		counter++;
	}
	return (number);
}

static	char	*final(char *str, int id)
{
	char	*newstr;
	int		counter;

	counter = 1;
	if (str[0] == '-')
		newstr = (char *)malloc(sizeof(*str) * (id + 2));
	else
		newstr = (char *)malloc(sizeof(*str) * (id + 1));
	if (!newstr)
		return (0);
	while (str[counter])
	{
		if (str[0] == '-')
		{
			newstr[0] = '-';
			newstr[counter] = str[counter];
		}
		else
			newstr[counter - 1] = str[counter];
		counter++;
	}
	if (str[0] == '-')
		counter++;
	newstr[counter - 1] = '\0';
	return (newstr);
}

static	char	*correction(char *numbers)
{
	char	corrected[11];
	int		start;
	int		end;
	int		stop;

	start = 1;
	stop = identifier(numbers);
	end = identifier(numbers);
	corrected[0] = numbers[0];
	while (start < stop)
	{
		corrected[start] = numbers[end];
		start++;
		end--;
	}
	corrected[start++] = numbers[end];
	while (start < 11)
		corrected[start++] = '\0';
	return (final(corrected, stop));
}

static	char	*first_array(int n, char *numbers, int counter)
{
	if (n == -2147483648)
		return (minint());
	while (1)
	{
		if (n < 0)
		{
			numbers[0] = '-';
			n *= -1;
		}
		if (n > 9)
		{
			numbers[counter] = (n % 10) + 48;
			n = n / 10;
		}
		else
		{
			numbers[counter] = n + 48;
			break ;
		}
		counter++;
	}
	return (correction(numbers));
}

char	*ft_itoa(int n)
{
	char	numbers[11];
	int		counter;

	counter = 1;
	numbers[0] = '+';
	while (counter < 11)
		numbers[counter++] = '\0';
	return (first_array(n, numbers, 1));
}
