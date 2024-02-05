/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:31:10 by aylamgha          #+#    #+#             */
/*   Updated: 2023/12/02 20:07:06 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t s)
{
	size_t	i;

	i = 0;
	if (s == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < s - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < s)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
