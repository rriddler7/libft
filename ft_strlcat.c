/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <rriddler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 00:54:07 by rriddler          #+#    #+#             */
/*   Updated: 2020/11/27 23:55:43 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (len < maxlen && *s)
	{
		len++;
		s++;
	}
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strnlen(dest, size);
	srclen = ft_strlen(src);
	if (destlen == size)
		return (destlen + srclen);
	return (destlen + ft_strlcpy(dest + destlen, src, size - destlen));
}
