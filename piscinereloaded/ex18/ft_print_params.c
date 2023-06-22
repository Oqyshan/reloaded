/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ounal <ounal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:50:38 by ounal             #+#    #+#             */
/*   Updated: 2023/06/22 10:57:42 by ounal            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	c;
	int	d;

	c = 1;
	d = 0;
	if (argc > 1)
	{
		while (c < argc)
		{
			d = 0;
			while (argv[c][d] != '\0')
			{
				ft_putchar(argv[c][d]);
				d++;
			}
			ft_putchar('\n');
			c++;
		}
	}
	return (0);
}
