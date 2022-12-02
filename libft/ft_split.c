/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:30:00 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:33:33 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	wordcount(char const *str, char c)
{
	int	counter;
	int	words;
	int	counter2;

	counter = 0;
	words = 0;
	counter2 = 0;
	while (str[counter])
	{
		if (str[counter] != c && words == 0)
		{
			words = 1;
			counter2++;
		}
		else if (str[counter] == c)
			words = 0;
		counter++;
	}
	return (counter2);
}

static	char	*malloced(char const *str, int start, int end)
{
	char	*newstr;
	int		counter;

	counter = 0;
	newstr = malloc(sizeof(char) * ((end - start) + 1));
	if (!newstr)
		return (0);
	while (start < end)
	{
		newstr[counter] = str[start];
		counter++;
		start++;
	}
	newstr[counter] = '\0';
	return (newstr);
}

char	**ft_split(char const *str, char set)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc(sizeof(char *) * (wordcount(str, set) + 1));
	if (!str || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(str))
	{
		if (str[i] != set && index < 0)
			index = i;
		else if ((str[i] == set || i == ft_strlen(str)) && index >= 0)
		{
			split[j++] = malloced(str, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*int main()
  {
  int i;
  char c;
  char str[] = "                  olol";
  char **ptr;

  c = ' ';
  ptr = ft_split(str, c);
  printf("\n");
  for (i = 0; ptr[i]; i++)
  printf("%s", ptr[i]);
  free(ptr);
  }*/
