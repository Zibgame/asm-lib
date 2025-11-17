/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 19:51:05 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/17 19:57:31 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_lib.h"

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

int	main(void)
{
	printf("===== TEST ASM-LIB =====\n");
	test_swap();
	test_add();
	test_write();
	return (0);
}
