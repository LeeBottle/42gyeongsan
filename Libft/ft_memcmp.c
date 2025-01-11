/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:45:41 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/09 13:39:11 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *destination, const void *source, size_t num)
{
	size_t				cnt;
	unsigned char		*dest;
	const unsigned char	*src;

	cnt = 0;
	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	while (cnt != num)
	{
		if (dest[cnt] != src[cnt])
			return (dest[cnt] - src[cnt]);
		cnt++;
	}
	return (0);
}
