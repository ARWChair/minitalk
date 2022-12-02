/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:52:12 by yatabay           #+#    #+#             */
/*   Updated: 2022/12/01 23:58:52 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

void	send(int pid, unsigned char signal);
void	send_final(int pid, int signal);
void	receive(int bit);

#endif