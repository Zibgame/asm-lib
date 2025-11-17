/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm_lib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:24:34 by zcadinot          #+#    #+#             */
/*   Updated: 2025/11/17 17:30:54 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_LIB_H
# define ASM_LIB_H

typedef unsigned long	t_size;
typedef long			t_ssize;

t_ssize	write(int fd, const void *buf, t_size count);

#endif
