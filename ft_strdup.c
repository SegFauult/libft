/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:08:07 by aylamgha          #+#    #+#             */
/*   Updated: 2023/11/14 15:50:11 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		x;
	int		y;
	char	*str;

	x = 0;
	y = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (y + 1));
	if (!str)
		return (NULL);
	while (x < y)
	{
		str[x] = s[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}
