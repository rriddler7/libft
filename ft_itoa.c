/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <rriddler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 00:15:11 by rriddler          #+#    #+#             */
/*   Updated: 2020/11/27 21:26:20 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits_number(int number)
{
	int	size;

	size = 0;
	if (number == 0)
		return (1);
	while (number)
	{
		size++;
		number /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char) * (digits_number(n) + (n < 0) + 1));
	if (str == NULL)
		return (NULL);
	i = digits_number(n) + (n < 0);
	str[i] = '\0';
	i--;
	if (n < 0)
		str[0] = '-';
	if (n < 0)
		n = -n;
	str[i] = '0';
	while (n && str[i] != '-')
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (str);
}
