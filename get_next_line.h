/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 14:26:28 by sjang             #+#    #+#             */
/*   Updated: 2016/10/21 14:26:29 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

# define BUFF_SIZE 42
# define RETRUN_ERROR(x) return (x)
# define MALLOC_CHECK(x) if ((x) == NULL) {return (NULL);}

typedef struct		s_lists
{
	t_list			*head;
	int				fd;
	int				nth;
	struct s_lists	*next;
}					t_lists;

int					get_next_line(const int fd, char **line);

#endif
