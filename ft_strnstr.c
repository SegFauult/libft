/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 07:56:07 by aylamgha          #+#    #+#             */
/*   Updated: 2023/11/12 17:13:26 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;

	l_len = ft_strlen(little);
	if (!l_len)
		return ((char *)big);
	while (*big && l_len <= len--)
	{
		if (!ft_memcmp(big, little, l_len))
			return ((char *)big);
		big++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", strnstr("", NULL, 4));
}*/
