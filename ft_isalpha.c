/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:13:14 by aylamgha          #+#    #+#             */
/*   Updated: 2023/12/02 20:49:43 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'))
		return (1);
	return (0);
}
// #include <stdio.h>

// int main()
// {
// 	char *s = "ayoub123abc1234cd";
// 	int i = 0;
// 	int x = 0;
// 	while (s[x] != 0)
// 	{
// 		if (ft_isalpha(s[x]) == 1)
// 			i++;
// 		x++;	
// 	}
// 	printf("%d", i);
// }
