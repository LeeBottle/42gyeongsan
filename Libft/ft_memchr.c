/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:49:51 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/15 13:43:44 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*temp;

	temp = (unsigned char *)s;
	cnt = 0;
	while (cnt < n)
	{
		if (temp[cnt] == (unsigned char)c)
			return ((void *)&temp[cnt]);
		cnt++;
	}
	return (NULL);
}
