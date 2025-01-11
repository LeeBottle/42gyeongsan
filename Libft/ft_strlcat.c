/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:29:54 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/10 15:00:52 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *destination, char *source, size_t size)
{
	size_t	cnt;
	size_t	dest;
	size_t	src;

	cnt = 0;
	dest = ft_strlen(destination);
	src = ft_strlen(source);
	if (dest > size)
		return (size + src);
	while (source[cnt] != '\0' && dest + cnt + 1 < size)
	{
		destination[cnt + dest] = source[cnt];
		cnt++;
	}
	destination[cnt + dest] = '\0';
	return (src + dest);
}
