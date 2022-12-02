/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:22:10 by yatabay           #+#    #+#             */
/*   Updated: 2022/10/24 17:37:52 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*newlst;

	if (!*lst)
		return ;
	while (*lst)
	{
		newlst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = newlst;
	}
	*lst = 0;
}
