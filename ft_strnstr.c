/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:55:58 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/06 23:57:03 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && len > i)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < len)
			{
				j++;
			}
			if (little[j] == '\0')
			{
				return ((char *)big + i);
			}
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void) {
	char *la = "aaabcabcd";
	char *sma = "cd";
	char *ptr;

	ptr = ft_strnstr(la, sma, 8);

	if (ptr != NULL) {
		printf("Found substring: %s\n", ptr);
	} else {
		printf("Substring not found.\n");
	}
}
*/