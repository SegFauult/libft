/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:40:47 by aylamgha          #+#    #+#             */
/*   Updated: 2023/12/02 20:46:22 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	result;
	int					signe;
	int					i;

	signe = 1;
	result = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		if (result > 9223372036854775807 && signe == -1)
			return (0);
		else if (result > 9223372036854775807 && signe == 1)
			return (-1);
		i++;
	}
	return ((int) result * signe);
}
/*
#include <stdio.h>
int main()
{
	int x = ft_atoi("-");
	printf("this is your number %d\n", x);
	return (0);
	
}*/
