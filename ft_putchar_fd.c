/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:26:37 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/02 21:49:01 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <unistd.h>

int	main(void)
{
	ft_putchar_fd('o', 1);
	ft_putchar_fd('u', 1);
	ft_putchar_fd('m', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('i', 1);
	ft_putchar_fd('m', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd(' ', 1);
	ft_putchar_fd('z', 1);
	ft_putchar_fd('w', 1);
	ft_putchar_fd('i', 1);
	ft_putchar_fd('n', 1);
	ft_putchar_fd('a', 1);
	return (0);
}
*/