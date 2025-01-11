/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:50:11 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/10 15:02:28 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elt_count, size_t elt_size)
{
	void	*ptr;

	ptr = malloc(elt_count * elt_size);
	if (NULL)
		return (NULL);
	ft_memset(ptr, 0, elt_count * elt_size);
	return (ptr);
}
