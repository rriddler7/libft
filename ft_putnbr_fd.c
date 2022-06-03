/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <rriddler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 22:54:32 by rriddler          #+#    #+#             */
/*   Updated: 2020/11/27 23:13:04 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	nbr(int n, int fd)
{
	if (n >= 10 || n <= -10)
	{
		nbr(n / 10, fd);
		nbr(n % 10, fd);
	}
	else
	{
		if (n >= 0)
			ft_putchar_fd(n + '0', fd);
		else
			ft_putchar_fd(-1 * n + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	nbr(n, fd);
}
