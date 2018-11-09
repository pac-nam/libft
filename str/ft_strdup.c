/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:49:49 by tbleuse           #+#    #+#             */
/*   Updated: 2018/11/09 12:51:43 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../header/str.h"

char	*ft_strdup(const char *s1)
{
	int		lenght;
	char	*str;

	lenght = ft_strlen(s1) + 1;
	if (!(str = (char*)malloc((sizeof(char)) * lenght)))
		return (NULL);
	str[--lenght] = '\0';
	while (lenght--)
		str[lenght] = s1[lenght];
	return (str);
}
