/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubcount.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 01:13:09 by pnunez            #+#    #+#             */
/*   Updated: 2018/02/19 01:13:15 by pnunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strsubcount(char const *s, int index, char c)
{
	int i;

	i = 0;
	while (s[index] != c && s[index])
	{
		index++;
		i++;
	}
	return (i);
}
