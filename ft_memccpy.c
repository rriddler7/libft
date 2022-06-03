/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <rriddler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 21:13:57 by rriddler          #+#    #+#             */
/*   Updated: 2020/11/28 00:32:59 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			i;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	i = 0;
	if (dest1 == NULL && src1 == NULL)
		return (dest1);
	while (n > 0)
	{
		dest1[i] = src1[i];
		if (src1[i] == (unsigned char)c)
		{
			return (dest + i + 1);
		}
		i++;
		n--;
	}
	return (NULL);
}
