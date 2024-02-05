/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:58:10 by aylamgha          #+#    #+#             */
/*   Updated: 2023/12/02 20:47:23 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*dest;

	if (number > 0 && SIZE_MAX / number < size)
		return (NULL);
	dest = (void *)malloc(number * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, number * size);
	return (dest);
}
// #include <stdio.h>
// int main()
// {
// 	char *alloc = calloc(0, 0);
// 	printf("%s\n", alloc);
// 	free(alloc);
// 	return (0);

// }