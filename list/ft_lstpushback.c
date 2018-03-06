/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 07:29:58 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/06 18:16:38 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void		ft_lstpushback(t_list **begin, void *data, size_t size)
{
	t_list		*tmp;

	tmp = *begin;
	if (begin)
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_lstnew(data, size);
}
