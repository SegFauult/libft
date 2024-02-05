/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:37:03 by aylamgha          #+#    #+#             */
/*   Updated: 2023/12/02 20:50:01 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_strlen(char const *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*new;

	str = (char *)malloc((my_strlen(s1) + my_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	new = str;
	while (s1 && *s1)
		*str++ = *s1++;
	while (s2 && *s2)
		*str++ = *s2++;
	*str = '\0';
	return (new);
}
// #include <stdio.h>
// int main ()

// {
// 	char *s1 = "ayoub ";
// 	char *s2 = "yasser";
// 	char *result = ft_strjoin(NULL,NULL);
// 	printf("thhis is the result : %s\n",result);
// }
