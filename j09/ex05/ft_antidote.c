/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:46:26 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/13 22:05:15 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_antidote(int i, int j, int k)
{
	if ((i <= j && i >= k) || (i >= j && i <= k))
		return (i);
	if ((k <= j && k >= i) || (k >= j && k <= i))
		return (k);
	else
		return (j);
}
