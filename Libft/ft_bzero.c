/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:45:40 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/09 13:37:44 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cnt;
	char	*ptr;

	ptr = (char *)s;
	cnt = 0;
	while (cnt != n)
	{
		ptr[cnt] = 0;
		cnt++;
	}
}
