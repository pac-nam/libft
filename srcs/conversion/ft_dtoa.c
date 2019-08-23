/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:04:25 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 13:56:22 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "conversion.h"
#include "str.h"

/*
**	ft_dtoa take return a string containing the value passed in parameter
**	in base 10.
**	WARNING: ft_dtoa use malloc. So it need to be free to avoid leaks.
**	WARNING: malloc can fail in this case, NULL is returned.
*/

static char	*ft_remove_zero(char *str)
{
	int		index;
	index = ft_strlen(str) - 1;
	while (index > 1 && str[index] == '0')
		index--;
	str[index + 1] = '\0';
	return (str);
}

char	*ft_dtoa(double n)
{
	char				*first;
	char				*second;
	char				*result;
	int					i;

	if (!(first = ft_itoa(n)))
		return (NULL);
	if (!(second = (char*)malloc(14)))
	{
		ft_strdel(&first);
		return (NULL);
	}
	second[0] = '.';
	second[14] = '\0';
	i = 0;
	while (++i <= 13)
	{
		n = (n - (long)n) * 10;
		second[i] = ((int)n % 10) + '0';
	}
	result = ft_strjoin(first, ft_remove_zero(second));
	ft_strdel(&first);
	ft_strdel(&second);
	return (result);
}