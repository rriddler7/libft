/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriddler <rriddler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:47:44 by rriddler          #+#    #+#             */
/*   Updated: 2020/11/28 03:58:15 by rriddler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	skip_start;
	size_t	curr_len;
	char	*trim_str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	skip_start = 0;
	while (s1[skip_start] && ft_strchr(set, s1[skip_start]))
		skip_start++;
	curr_len = ft_strlen(s1) - skip_start;
	if (curr_len)
		while (s1[curr_len + skip_start - 1] != 0
			&& ft_strchr(set, s1[curr_len + skip_start - 1]) != 0)
			curr_len--;
	trim_str = malloc(sizeof(char) * (curr_len + 1));
	if (trim_str == NULL)
		return (NULL);
	ft_strncpy(trim_str, s1 + skip_start, curr_len);
	trim_str[curr_len] = '\0';
	return (trim_str);
}
