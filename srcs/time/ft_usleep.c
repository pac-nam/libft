/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 09:17:24 by tbleuse           #+#    #+#             */
/*   Updated: 2026/03/02 16:07:11 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/time.h>
#include <stddef.h>

void	ft_usleep(long usec)
{
	struct timeval	start;
	struct timeval	current;
	long			end;

	gettimeofday(&start, NULL);
	end = start.tv_usec + usec;
	gettimeofday(&current, NULL);
	if (current.tv_usec < start.tv_usec)
	{
		current.tv_usec += 1000000;
		current.tv_sec -= 1;
	}
	while (current.tv_sec < start.tv_sec
		|| (current.tv_sec == start.tv_sec && current.tv_usec < end))
	{
		gettimeofday(&current, NULL);
		if (current.tv_usec < start.tv_usec)
		{
			current.tv_usec += 1000000;
			current.tv_sec -= 1;
		}
	}
}
