/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:05:25 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/10 15:05:17 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	while (cnt >= 0)
	{
		if (str[cnt] == (char)c)
			return ((char *)&str[cnt]);
		cnt--;
	}
	return (NULL);
}
