/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:35:55 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/09 14:05:00 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	cnt;

	cnt = 0;
	if (s == NULL)
		return (0);
	if (start >= (unsigned int)ft_strlen(s))
		return ((char *)malloc(sizeof(char)));
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (0);
	while (cnt != len)
	{
		ptr[cnt] = s[start + cnt];
		cnt++;
	}
	ptr[cnt] = '\0';
	return (ptr);
}
