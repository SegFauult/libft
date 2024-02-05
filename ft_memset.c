/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:35:05 by aylamgha          #+#    #+#             */
/*   Updated: 2023/11/12 17:05:53 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
int main()
{
	int x;
	unsigned char *c = (unsigned char *)&x;
	memset(c, 0 ,4);
	memset(c, 57, 1);
	memset(c + 1, 5, 1 );
	printf("%d",x);
}*/
