/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:18:38 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/04 21:52:14 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*trimmed;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 && !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (NULL);
	strncpy(trimmed, s1 + start, len);
	trimmed[len] = '\0';
	return (trimmed);
}
/*
#include <stdio.h>

//include <string.h>
int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "  zizo oumaima zizo";
	set = " zo";
	char *result = ft_strtrim(s1, set); // Stocker le résultat
	printf("%s\n",result);
	return (0);
}
*/