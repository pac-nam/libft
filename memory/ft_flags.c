/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 09:57:33 by tbleuse           #+#    #+#             */
/*   Updated: 2018/10/08 12:48:03 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	0........................25
**	abcdefghijklmnopqrstuvwxyz
**
**	index after the last flag string is returned
**	-index is returned in case of  double flag
**	0 is returned in case of error
*/

#include "../header/libft.h"

int		ft_flags(int ac, char **av, unsigned int *flags)
{
	int		i;
	int		j;
	int		double_flag;
	char	c;

	i = 0;
	double_flag = 1;
	while (++i < ac && av[i][0] == '-')
	{
		j = 0;
		while((c = av[i][++j]))
		{
			ft_putchar(c);
			if (c < 'a' || c > 'z')
				return (0);
			c = c - 'a';
			if ((*flags >> (25 - c)) & 0x1)
				double_flag = -1;
			else
				*flags += 1 << (25 - c);
		}
	}
	return (i * double_flag);
}