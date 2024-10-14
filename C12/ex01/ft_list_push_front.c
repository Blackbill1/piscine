/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:33:46 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/25 19:16:48 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	aff_list(t_list *list)
{
	int	*n;

	n = NULL;
	while (list != NULL)
	{
		n = list->data;
		write(1, list->data, 1);
		list = list->next;
	}
}
t_list	*ft_create_elem(void *data)
{
	t_list	*newList;

	newList = malloc(sizeof(struct t_list *));
	newList->data = (int *)data;
	newList->next = NULL;
	return (newList);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*newlist;

	newlist = ft_create_elem(data);
	newlist->next = *begin_list;
	*begin_list = newlist;
}

int	main(void)
{
	int		i;
	int		j;
	int		k;
	t_list	*list;

	list = NULL;
	i = 95;
	j = 54;
	k = 78;
	ft_list_push_front(&list, &i);
	ft_list_push_front(&list, &j);
	ft_list_push_front(&list, &k);
	aff_list(list);
}
