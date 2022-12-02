/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:23:04 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:34:19 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newct;

	newct = (t_list *)malloc(sizeof(t_list));
	if (!newct)
		return (0);
	newct->content = content;
	newct->next = NULL;
	return (newct);
}
