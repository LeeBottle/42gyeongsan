/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:14:28 by byeolee           #+#    #+#             */
/*   Updated: 2025/02/08 15:53:58 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	size_t		whole_cnt;
	size_t		per_cnt;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	whole_cnt = 0;
	per_cnt = 0;
	while (s1[per_cnt] != '\0')
		ptr[whole_cnt++] = s1[per_cnt++];
	per_cnt = 0;
	while (s2[per_cnt] != '\0')
		ptr[whole_cnt++] = s2[per_cnt++];
	ptr[whole_cnt] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	cnt;

	cnt = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_substr("", 0, 0));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (cnt < len)
	{
		ptr[cnt] = s[start + cnt];
		cnt++;
	}
	ptr[cnt] = '\0';
	return (ptr);
}
