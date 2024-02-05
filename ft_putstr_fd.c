/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 07:06:00 by aylamgha          #+#    #+#             */
/*   Updated: 2023/12/02 20:48:21 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0 || !s)
		return ;
	write(fd, s, ft_strlen(s));
}
// #include <fcntl.h>
// int main()
// {
// 	int fd = open("l7wa.txt", O_RDWR | O_CREAT , 777);
// 	ft_putstr_fd("l7wa", fd);
// 	close(fd);
// }