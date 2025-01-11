/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:10:05 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/09 13:53:56 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*ptr;
	int		len1;
	int		len2;

	len1 = 0;
	while (string[len1] != '\0')
		len1++;
	ptr = (char *)malloc(sizeof(char) * (len1 + 1));
	len2 = 0;
	while (len2 != len1)
	{
		ptr[len2] = string[len2];
		len2++;
	}
	ptr[len2] = '\0';
	return (ptr);
}
