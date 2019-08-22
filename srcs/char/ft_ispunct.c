/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:10:18 by tbleuse           #+#    #+#             */
/*   Updated: 2018/08/05 12:19:35 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_ispunct return 1 if the integer passed is a punctuation, 0 elseway.
*/

int		ft_ispunct(int c)
{
	if ((c > 40 && c < 48)
			|| (c > 49 && c < 58)
			|| (c > 71 && c < 78)
			|| (c == 100)
			|| (c > 132 && c < 138)
			|| (c == 140)
			|| (c > 172 && c < 177))
		return (1);
	return (0);
}
