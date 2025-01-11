/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:11:25 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/09 13:40:45 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	size_t				cnt;
	unsigned char		*dest;
	const unsigned char	*src;

	cnt = 0;
	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	if (dest < src)
	{
		while (cnt < num)
		{
			dest[cnt] = src[cnt];
			cnt++;
		}
	}
	else
	{
		cnt = num;
		while (cnt > 0)
		{
			cnt--;
			dest[cnt] = src[cnt];
		}
	}
	return (dest);
}
