/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:41:19 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/09 13:51:02 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t count)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < count)
	{
		if (s1[cnt] != s2[cnt])
			return ((unsigned char)s1[cnt] - (unsigned char)s2[cnt]);
		cnt++;
	}
	return (0);
}
