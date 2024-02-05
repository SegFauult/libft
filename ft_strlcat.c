/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 07:30:16 by aylamgha          #+#    #+#             */
/*   Updated: 2023/12/02 21:33:39 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (dest[x] && x < size)
		x++;
	while (src[y] && (y + x + 1) < size)
	{
		dest[x + y] = src[y];
		y++;
	}
	if (x < size)
		dest[x + y] = '\0';
	return (x + ft_strlen(src));
}
