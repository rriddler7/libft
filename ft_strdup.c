/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <rriddler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:20:58 by rriddler          #+#    #+#             */
/*   Updated: 2020/11/27 23:31:48 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		s;
	char	*dup;
	int		i;

	i = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	dup = (char *)malloc(sizeof(char) * (s + 1));
	if (dup == NULL)
		return (NULL);
	while (i < s)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
