/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:49:51 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/09 13:40:07 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	size_t			cnt;
	unsigned char	*b;

	b = (unsigned char *)buf;
	cnt = 0;
	while (cnt < count)
	{
		if (b[cnt] == (unsigned char)c)
			return ((void *)&b[cnt]);
		cnt++;
	}
	return (0);
}
