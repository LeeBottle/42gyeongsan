/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:13:07 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/09 13:41:21 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			cnt;
	unsigned char	*p;

	cnt = 0;
	p = ptr;
	while (cnt != num)
	{
		p[cnt] = (unsigned char)value;
		cnt++;
	}
	return (ptr);
}
