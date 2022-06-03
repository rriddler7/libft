/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <rriddler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 18:49:01 by rriddler          #+#    #+#             */
/*   Updated: 2021/04/18 18:21:19 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	plm;
	int	nmb;

	plm = 1;
	nmb = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		   || *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			plm *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nmb = nmb * 10 + (*str++) - '0';
	}
	return (nmb * plm);
}
