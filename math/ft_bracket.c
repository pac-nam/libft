/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bracket.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 10:07:26 by exam              #+#    #+#             */
/*   Updated: 2018/03/06 17:30:07 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int			ft_bracket_charcmp(char c, char c2)
{
	if ((c == 40 && c2 == 41) || (c == 41 && c2 == 40) ||
			(c == 91 && c2 == 93) || (c == 93 && c2 == 91) ||
			(c == 123 && c2 == 125) || (c == 125 && c2 == 123))
		return (1);
	return (0);
}

static int			ft_bracket_valid_char(char c)
{
	if (c == 40 || c == 41 || c == 91 || c == 93 || c == 123 || c == 125)
		return (1);
	return (0);
}

static int			ft_bracket_open_char(char c)
{
	if (c == 40 || c == 91 || c == 123)
		return (1);
	return (0);
}

int					ft_bracket(char *line)
{
	char		pile[200];
	int			p_index = 0;
	int			i = 0;

	while(line[i])
	{
		if (ft_bracket_valid_char(line[i]))
		{
			if (ft_bracket_open_char(line[i]))
				pile[p_index++] = line[i];
			else if (p_index > 0 &&
					ft_bracket_charcmp(pile[p_index - 1], line[i]))
				pile[p_index--] = 0;
			else
				return (0);
		}
		++i;
	}
	if (p_index == 0)
		return (1);
	return (0);
}
