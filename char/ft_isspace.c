/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:10:18 by tbleuse           #+#    #+#             */
/*   Updated: 2018/05/19 12:21:45 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c = '\v' ||
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}
