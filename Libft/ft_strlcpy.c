/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:39:06 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/10 17:13:39 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cnt;
	size_t	s;

	cnt = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (dstsize == 0)
		return (s);
	while (src[cnt] != '\0' && cnt < (dstsize - 1))
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	dst[cnt] = '\0';
	while (src[cnt] != '\0')
		cnt++;
	return (cnt);
}
