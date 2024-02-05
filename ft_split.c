/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:06:54 by aylamgha          #+#    #+#             */
/*   Updated: 2023/11/20 09:48:34 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	ft_free(char **array)
{
	size_t	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	**ft_helper(char const *s, char **lst, char c)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			if (lst[i - 1] == 0)
			{
				ft_free(lst);
				return (NULL);
			}
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (NULL);
	lst = ft_helper(s, lst, c);
	return (lst);
}
// #include <stdio.h>
// int 	main()
// {
// 	char **split = ft_split("\t\t\t\thello!\t\t\t\t", '\t');
// 	int i = 0;
// 	while (split[i])
// 	{
// 		printf("%s\n",split[i]);
// 		i++;
// 	}
// i = 0;
// while (split[i])
// {
// 	free(split[i]);
// 	i++;
// }
// free(split);
// return 0;
// }
