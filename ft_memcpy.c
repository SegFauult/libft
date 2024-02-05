/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:42:49 by aylamgha          #+#    #+#             */
/*   Updated: 2023/11/24 09:40:36 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!ds && !sr)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int main()
{
	t_list data;
	t_list *data2;


	data.content = "hello";
	data.next = NULL;

	data2 = malloc(sizeof(t_list));
	if (!data2)
		return (0);
	ft_memcpy(data2, &data, sizeof(t_list));
	printf("rsult == %s", (char *)data2->content);
	
}*/
