/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 10:56:42 by hel-hadi          #+#    #+#             */
/*   Updated: 2017/03/15 18:30:28 by hel-hadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_print(t_last *list)
{
	t_list *elem;

	elem = list->fin;
	while (elem != NULL)
	{
		printf("content = %s	|", elem->content);
		printf("elem->indice = %d	|\n", elem->indice);
		printf("ant = %d\n", elem->ant);
		elem = elem->prev;
	}
}
