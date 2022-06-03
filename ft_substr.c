/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <rriddler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:33:37 by rriddler          #+#    #+#             */
/*   Updated: 2020/11/28 00:16:51 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr[0] = '\0';
		return (substr);
	}
	while (len > 0)
	{
		substr[i] = s[i + start];
		i++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
