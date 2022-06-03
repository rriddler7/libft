/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <rriddler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:00:45 by rriddler          #+#    #+#             */
/*   Updated: 2020/11/30 19:54:30 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	unsigned char	*end_dest1;
	unsigned char	*end_src1;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (dest1 == NULL && src1 == NULL)
		return (dest1);
	if (dest1 < src1)
		while (n--)
			*dest1++ = *src1++;
	else
	{
		end_dest1 = dest1 + n - 1;
		end_src1 = src1 + n - 1;
		while (n--)
			*end_dest1-- = *end_src1--;
	}
	return (dest);
}
