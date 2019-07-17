/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 01:43:23 by asoursou          #+#    #+#             */
/*   Updated: 2019/07/17 03:40:08 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (i < length)
		if (f(tab[i++]))
			n++;
	return (n);
}