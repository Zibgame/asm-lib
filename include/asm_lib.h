/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm_lib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:24:34 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/17 16:42:10 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_LIB_H
#define ASM_LIB_H

typedef unsigned long size_t;
typedef long ssize_t;

ssize_t	write(int fd, const void *buf, size_t count);

#endif
