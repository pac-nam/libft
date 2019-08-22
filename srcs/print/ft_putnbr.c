/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:09:01 by tbleuse           #+#    #+#             */
/*   Updated: 2018/11/09 12:10:48 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

/*
**	print the string s on the standard output.
*/

void	ft_putnbr(int nb)
{
	ft_putnbr_fd(nb, 1);
}