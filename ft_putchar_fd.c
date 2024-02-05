/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:21:47 by aylamgha          #+#    #+#             */
/*   Updated: 2023/11/20 09:44:49 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char x, int fd)
{
	write(fd, &x, 1);
}
/*
#include <stdio.h>
int main()
{
	ft_putchar_fd('y',3);

}*/