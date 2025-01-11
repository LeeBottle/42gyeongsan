/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:10:38 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/09 13:40:08 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t				cnt;
	unsigned char		*dest;
	const unsigned char	*src;

	cnt = 0;
	dest = (unsigned char *)destination;
	src = (const unsigned char *)source;
	while (cnt != num)
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	return (destination);
}
