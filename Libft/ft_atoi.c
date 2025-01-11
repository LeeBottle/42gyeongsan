/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:31:38 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/09 13:35:05 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	len;
	int	num;
	int	mi_pl;

	len = 0;
	num = 0;
	mi_pl = 1;
	while (str[len] == 32 || (str[len] >= 9 && str[len] <= 13))
		len++;
	if (str[len] == 45)
	{
		mi_pl = -1;
		len++;
	}
	else if (str[len] == 43)
		len++;
	while (str[len] >= 48 && str[len] <= 57)
	{
		num = num * 10 + str[len] - 48;
		len++;
	}
	return (num * mi_pl);
}
