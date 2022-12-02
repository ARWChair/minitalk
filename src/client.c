/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:00:37 by yatabay           #+#    #+#             */
/*   Updated: 2022/12/02 02:18:40 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	send(int pid, unsigned char signal)
{
	unsigned char	temp;
	int				zeros;

	zeros = 8;
	temp = signal;
	while (temp != 0)
	{
		temp /= 2;
		zeros--;
	}
	if (signal == 0)
		zeros--;
	while (zeros > 0)
	{
		kill(pid, SIGUSR1);
		zeros--;
		usleep(100);
	}
	send_final(pid, signal);
}

void	send_final(int pid, int signal)
{
	if (signal > 1)
	{
		send_final(pid, signal / 2);
		send_final(pid, signal % 2);
	}
	else
	{
		if (signal == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
			send(pid, argv[2][i++]);
		send(pid, '\n');
	}
	else
	{
		ft_printf("\033[31mError.\n");
		ft_printf("Wrong use of this function, please try again\n");
		exit(1);
	}
}
