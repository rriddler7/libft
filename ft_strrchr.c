/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <rriddler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 11:15:54 by rriddler          #+#    #+#             */
/*   Updated: 2020/11/29 13:34:32 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*str1;

	i = 0;
	str1 = (0);
	while (str[i])
	{
		if (str[i] == (char)ch)
			str1 = ((char *)str + i);
		i++;
	}
	if (str1)
		return (str1);
	if (ch =='\0')
		return ((char *)str + i);
	return (NULL);
}
