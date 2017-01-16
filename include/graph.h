/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 14:42:20 by sjang             #+#    #+#             */
/*   Updated: 2017/01/02 14:42:21 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_H
# define GRAPH_H

# include <stdlib.h>

typedef struct	s_graph
{
	int	num_v;
	int	num_e;
	int	**grid;
}				t_graph;

void			graph_init(t_graph *pg, int nv);
t_graph			*graph_new(int nv);

void			graph_destroy(t_graph **pg);
void			graph_add_edge(t_graph *pg, int from, int to);

#endif
