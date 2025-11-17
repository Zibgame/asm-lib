/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gettimeofday.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:23:22 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/17 21:38:44 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_lib.h"
#include "asm_lib.h"

int	gettimeofday(struct s_timeval *tv)
{
	long	ret;

	__asm__ (
		"mov $96, %%rax\n\t"
		"mov %1, %%rdi\n\t"
		"xor %%rsi, %%rsi\n\t"
		"syscall\n\t"
		"mov %%rax, %0"
		: "=r"(ret)
		: "r"(tv)
		: "rax", "rdi", "rsi", "rcx", "r11", "memory"
		);
	return ((int)(ret));
}
