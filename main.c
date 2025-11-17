/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 19:51:05 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/17 21:35:47 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_lib.h"
#include <stdio.h>

static void	test_swap(void)
{
	int	a;
	int	b;

	a = 5;
	b = 111;
	printf("[swap] avant : a = %d | b = %d\n", a, b);
	swap(&a, &b);
	printf("[swap] après : a = %d | b = %d\n", a, b);
}

static void	test_add(void)
{
	int	a;
	int	b;

	a = 7;
	b = 5;
	printf("[add] %d + %d = %d\n", a, b, add(a, b));
}

static void	test_write(void)
{
	const char	*str;
	t_ssize		ret;

	str = "Hello ASM!";
	printf("[write] affichage → ");
	fflush(stdout);
	ret = write(1, str, 11);
	printf(" %ld\n", ret);
}

void	test_getpid(void)
{
	t_pid	pid;

	pid = getpid();
	printf("[getpid] PID renvoyé par getpid() = %ld\n", pid);
}

static void	test_gettimeofday(void)
{
	struct s_timeval	tv;

	if (gettimeofday(&tv) == 0)
		printf("[gettimeofday] secondes = %ld, microsecondes = %ld\n",
			tv.tv_sec, tv.tv_usec);
	else
		printf("[gettimeofday] erreur lors de l'appel\n");
}

int	main(void)
{
	printf("===== TEST ASM-LIB =====\n");
	test_swap();
	test_add();
	test_write();
	test_getpid();
	test_gettimeofday();
	return (0);
}
