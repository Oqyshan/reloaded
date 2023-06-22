/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:48:02 by ounal             #+#    #+#             */
/*   Updated: 2023/06/22 15:00:47 by ounal            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*j;

	i = 0;
	if (min >= max)
		return (0);
	j = (int *)malloc(sizeof(*j) * (max - min));
	if (j == 0)
		return (0);
	while (min < max)
	{
		j[i] = min;
		i++;
		min++;
	}
	return (j);
}
