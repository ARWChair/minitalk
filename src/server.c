/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yatabay <yatabay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:52:20 by yatabay           #+#    #+#             */
/*   Updated: 2022/12/02 02:18:41 by yatabay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	receive(int bit)
{
	static int	factorial;
	static int	value;
	static int	counter;

	if (counter == 0)
		factorial = 7;
	if (SIGUSR2 == bit)
		value += 1 << (factorial - counter);
	counter++;
	if (counter == 8)
	{
		ft_printf("%c", value);
		value = 0;
		counter = 0;
	}
}

void	print(int pid)
{
	ft_printf("\033[34m▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
	ft_printf("\033[34m█  ▄▄▄▄▄  ▄▄▄▄▄  ▄▄▄▄   ▄     ▄  ▄▄▄▄▄  ▄▄▄▄   █\n");
	ft_printf("\033[34m█  █   █  █      █   █  █     █  █      █   █  █\n");
	ft_printf("\033[34m█  █▄▄▄▄  █▄▄▄   █▄▄▄█   █   █   █▄▄▄   █▄▄▄█  █\n");
	ft_printf("\033[34m█      █  █      █  █    █   █   █      █  █   █\n");
	ft_printf("\033[34m█  █▄▄▄█  █▄▄▄▄  █   █    █▄█    █▄▄▄▄  █   █  █\n");
	ft_printf("\033[34m█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n\n");
	ft_printf("\033[34mConnection Port:\033[0m %i\n", pid);
	ft_printf("\033[34mConnection Type:\033[0m Local\n");
	ft_printf("\033[34mUser:\033[0m Eval42\n");
	ft_printf("\033[0;36mWaiting for input\033[0m\n\n");
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	(void)argv;
	pid = getpid();
	if (argc != 1)
	{
		ft_printf("\033[31mError.\n");
		ft_printf("Wrong use of this function, please try again\n");
		exit(1);
	}
	else
	{
		print(pid);
		while (argc == 1)
		{
			signal(SIGUSR1, receive);
			signal(SIGUSR2, receive);
			pause();
		}
	}
}
