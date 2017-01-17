/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 14:46:48 by sjang             #+#    #+#             */
/*   Updated: 2017/01/02 14:46:49 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/graph.h"

void			graph_init(t_graph *pg, int nv)
{
	int i;
	int j;

	pg->num_v = nv;
	pg->num_e = 0;
	i = 0;
	pg->grid = (int**)malloc(sizeof(int*) * nv);
	while (i < nv)
	{
		(pg->grid)[i] = (int*)malloc(sizeof(int) * nv);
		j = 0;
		while (j < nv)
		{
			(pg->grid)[i][j] = 0;
			j++;
		}
		i++;
	}
}

t_graph			*graph_new(int nv)
{
	t_graph *ret;

	ret = (t_graph*)malloc(sizeof(t_graph));
	graph_init(ret, nv);
	return (ret);
}

/*
**	from and to starts from 0
**	pg->grid starts from 0
*/

void			graph_add_edge(t_graph *pg, int from, int to)
{
	(pg->grid)[from][to] = 1;
	(pg->grid)[to][from] = 1;
	(pg->num_e)++;
}

void			graph_destroy(t_graph **pg)
{
	int i;

	i = 0;
	while (i < (*pg)->num_v)
	{
		free(((*pg)->grid)[i]);
		i++;
	}
	free((*pg)->grid);
	free(*pg);
	*pg = NULL;
}
