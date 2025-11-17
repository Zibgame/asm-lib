/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:24:55 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/17 17:28:06 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm_lib.h"

t_ssize	write(int fd, const void *buf, t_size count)
{
	t_ssize	ret;

	__asm__(
		"mov $1, %%rax\n\t"
		"mov %1, %%rdi\n\t"
		"mov %2, %%rsi\n\t"
		"mov %3, %%rdx\n\t"
		"syscall\n\t"
		"mov %%rax, %0"
		: "=r"(ret)
		: "r"((long)fd), "r"(buf), "r"((long)count)
		: "rax", "rdi", "rsi", "rdx", "rcx", "r11", "memory"
		);
	return (ret);
}
