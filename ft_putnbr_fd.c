/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:05:46 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/17 23:13:37 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fck_this_case(int file)
{
	ft_putchar_fd('2', file);
	ft_putchar_fd('1', file);
	ft_putchar_fd('4', file);
	ft_putchar_fd('7', file);
	ft_putchar_fd('4', file);
	ft_putchar_fd('8', file);
	ft_putchar_fd('3', file);
	ft_putchar_fd('6', file);
	ft_putchar_fd('4', file);
	ft_putchar_fd('8', file);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			fck_this_case(fd);
			return ;
		}
		n = n - (n * 2);
	}
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

/*
int main(void)
{
	ft_putnbr_fd(0, 1);
}
*/