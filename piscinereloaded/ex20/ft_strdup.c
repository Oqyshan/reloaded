/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:42:33 by ounal             #+#    #+#             */
/*   Updated: 2023/06/22 14:47:20 by ounal            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*dp;

	i = 0;
	while (src[i] != '\0')
		i++;
	dp = (char *)malloc((i + 1) * sizeof(*dp));
	i = 0;
	while (src[i] != '\0')
	{
		dp[i] = src[i];
		i++;
	}
	dp[i] = '\0';
	return (dp);
}
