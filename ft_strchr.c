/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:48:09 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/15 13:36:30 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	cnt;

	cnt = 0;
	while (s[cnt] != '\0')
	{
		if (s[cnt] == c)
			return ((char *)&s[cnt]);
		cnt++;
	}
	if (c == '\0')
		return ((char *)&s[cnt]);
	return (NULL);
}
