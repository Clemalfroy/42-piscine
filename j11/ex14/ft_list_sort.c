/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 23:07:36 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/20 11:37:31 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list		*ptr;
	t_list		*ptr2;
	t_list		*next;

	ptr = *begin_list;
	while (ptr)
	{
		ptr2 = *begin_list;
		while (ptr2->next)
		{
			if ((*cmp)(ptr2->data, ptr2->next->data) > 0)
			{
				next = ptr2->data;
				ptr2->data = ptr2->next->data;
				ptr2->next->data = next;
			}
			ptr2 = ptr2->next;
		}
		ptr = ptr->next;
	}
}
