/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:05:46 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/11 19:33:42 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putchar(char c, int file)
{
	write(file, &c, 1);
}

void	fck_this_case(int file)
{
	putchar('2', file);
	putchar('1', file);
	putchar('4', file);
	putchar('7', file);
	putchar('4', file);
	putchar('8', file);
	putchar('3', file);
	putchar('6', file);
	putchar('4', file);
	putchar('8', file);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		putchar('0', fd);
		return ;
	}
	if (n < 0)
	{
		putchar('-', fd);
		if (n == -2147483648)
		{
			fck_this_case(fd);
			return ;
		}
		n = n - (n * 2);
	}
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	putchar((n % 10) + '0', fd);
}

/*
int main(void)
{
	ft_putnbr_fd(0, 1);
}
*/