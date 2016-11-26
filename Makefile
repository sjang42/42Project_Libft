# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/26 22:29:23 by sjang             #+#    #+#              #
#    Updated: 2016/09/27 21:54:14 by sjang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
OBJECTS =	ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o\
			ft_isdigit.o ft_isprint.o ft_itoa.o ft_lstadd.o ft_lstdel.o\
			ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o ft_memalloc.o\
			ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memdel.o\
			ft_memmove.o ft_memset.o ft_putchar.o ft_putchar_fd.o ft_putendl.o\
			ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o ft_putstr.o\
			ft_putstr_fd.o ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o\
			ft_strcpy.o ft_strdel.o	ft_strdup.o ft_strequ.o ft_striter.o\
			ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlen.o ft_strmap.o\
			ft_strmapi.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnequ.o\
			ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strsplit.o ft_strstr.o\
			ft_strsub.o ft_strtrim.o ft_tolower.o ft_toupper.o\
			ft_sqrt.o ft_iterative_power.o ft_fibonacci.o ft_list_push_back.o\
			ft_list_size.o ft_lstaddback.o ft_lstcount.o ft_lstnthdata.o
SRC = ./
ICL = ./
CC = gcc
CFLAG = -Werror -Wall -Wextra -c
AR = ar rc
RLIB = ranlib
RM = /bin/rm -f

.PHONY : clean fclean re
.SUFFIXES				:	.c .o

all						:	$(TARGET)

$(TARGET)				:	$(OBJECTS) $(LIBFT_ICL)libft.h
							$(AR) $(TARGET) $(OBJECTS)
							$(RLIB) $(TARGET)

ft_atoi.o				:	$(LIBFT_SRC)ft_atoi.c $(LIBFT_ICL)libft.h
ft_bzero.o				:	$(LIBFT_SRC)ft_bzero.c $(LIBFT_ICL)libft.h
ft_isalnum.o			:	$(LIBFT_SRC)ft_isalnum.c $(LIBFT_ICL)libft.h
ft_isalpha.o			:	$(LIBFT_SRC)ft_isalpha.c $(LIBFT_ICL)libft.h
ft_isascii.o			:	$(LIBFT_SRC)ft_isascii.c $(LIBFT_ICL)libft.h
ft_isdigit.o			:	$(LIBFT_SRC)ft_isdigit.c $(LIBFT_ICL)libft.h
ft_isprint.o			:	$(LIBFT_SRC)ft_isprint.c $(LIBFT_ICL)libft.h
ft_itoa.o				:	$(LIBFT_SRC)ft_itoa.c $(LIBFT_ICL)libft.h
ft_lstadd.o				:	$(LIBFT_SRC)ft_lstadd.c $(LIBFT_ICL)libft.h
ft_lstdel.o				:	$(LIBFT_SRC)ft_lstdel.c $(LIBFT_ICL)libft.h
ft_lstdelone.o			:	$(LIBFT_SRC)ft_lstdelone.c $(LIBFT_ICL)libft.h
ft_lstiter.o			:	$(LIBFT_SRC)ft_lstiter.c $(LIBFT_ICL)libft.h
ft_lstmap.o				:	$(LIBFT_SRC)ft_lstmap.c $(LIBFT_ICL)libft.h
ft_lstnew.o				:	$(LIBFT_SRC)ft_lstnew.c $(LIBFT_ICL)libft.h
ft_memalloc.o			:	$(LIBFT_SRC)ft_memalloc.c $(LIBFT_ICL)libft.h
ft_memccpy.o			:	$(LIBFT_SRC)ft_memccpy.c $(LIBFT_ICL)libft.h
ft_memchr.o				:	$(LIBFT_SRC)ft_memchr.c $(LIBFT_ICL)libft.h
ft_memcmp.o				:	$(LIBFT_SRC)ft_memcmp.c $(LIBFT_ICL)libft.h
ft_memcpy.o				:	$(LIBFT_SRC)ft_memcpy.c $(LIBFT_ICL)libft.h
ft_memdel.o				:	$(LIBFT_SRC)ft_memdel.c $(LIBFT_ICL)libft.h
ft_memmove.o			:	$(LIBFT_SRC)ft_memmove.c $(LIBFT_ICL)libft.h
ft_memset.o				:	$(LIBFT_SRC)ft_memset.c $(LIBFT_ICL)libft.h
ft_putchar.o			:	$(LIBFT_SRC)ft_putchar.c $(LIBFT_ICL)libft.h
ft_putchar_fd.o			:	$(LIBFT_SRC)ft_putchar_fd.c $(LIBFT_ICL)libft.h
ft_putendl.o			:	$(LIBFT_SRC)ft_putendl.c $(LIBFT_ICL)libft.h
ft_putendl_fd.o			:	$(LIBFT_SRC)ft_putendl_fd.c $(LIBFT_ICL)libft.h
ft_putnbr.o				:	$(LIBFT_SRC)ft_putnbr.c $(LIBFT_ICL)libft.h
ft_putnbr_fd.o			:	$(LIBFT_SRC)ft_putnbr_fd.c $(LIBFT_ICL)libft.h
ft_putstr.o				:	$(LIBFT_SRC)ft_putstr.c $(LIBFT_ICL)libft.h
ft_putstr_fd.o			:	$(LIBFT_SRC)ft_putstr_fd.c $(LIBFT_ICL)libft.h
ft_strcat.o				:	$(LIBFT_SRC)ft_strcat.c $(LIBFT_ICL)libft.h
ft_strchr.o				:	$(LIBFT_SRC)ft_strchr.c $(LIBFT_ICL)libft.h
ft_strclr.o				:	$(LIBFT_SRC)ft_strclr.c $(LIBFT_ICL)libft.h
ft_strcmp.o				:	$(LIBFT_SRC)ft_strcmp.c $(LIBFT_ICL)libft.h
ft_strcpy.o				:	$(LIBFT_SRC)ft_strcpy.c $(LIBFT_ICL)libft.h
ft_strdel.o				:	$(LIBFT_SRC)ft_strdel.c $(LIBFT_ICL)libft.h
ft_strdup.o				:	$(LIBFT_SRC)ft_strdup.c $(LIBFT_ICL)libft.h
ft_strequ.o				:	$(LIBFT_SRC)ft_strequ.c $(LIBFT_ICL)libft.h
ft_striter.o			:	$(LIBFT_SRC)ft_striter.c $(LIBFT_ICL)libft.h
ft_striteri.o			:	$(LIBFT_SRC)ft_striteri.c $(LIBFT_ICL)libft.h
ft_strjoin.o			:	$(LIBFT_SRC)ft_strjoin.c $(LIBFT_ICL)libft.h
ft_strlcat.o			:	$(LIBFT_SRC)ft_strlcat.c $(LIBFT_ICL)libft.h
ft_strlen.o				:	$(LIBFT_SRC)ft_strlen.c $(LIBFT_ICL)libft.h
ft_strmap.o				:	$(LIBFT_SRC)ft_strmap.c $(LIBFT_ICL)libft.h
ft_strmapi.o			:	$(LIBFT_SRC)ft_strmapi.c $(LIBFT_ICL)libft.h
ft_strncat.o			:	$(LIBFT_SRC)ft_strncat.c $(LIBFT_ICL)libft.h
ft_strncmp.o			:	$(LIBFT_SRC)ft_strncmp.c $(LIBFT_ICL)libft.h
ft_strncpy.o			:	$(LIBFT_SRC)ft_strncpy.c $(LIBFT_ICL)libft.h
ft_strnequ.o			:	$(LIBFT_SRC)ft_strnequ.c $(LIBFT_ICL)libft.h
ft_strnew.o				:	$(LIBFT_SRC)ft_strnew.c $(LIBFT_ICL)libft.h
ft_strnstr.o			:	$(LIBFT_SRC)ft_strnstr.c $(LIBFT_ICL)libft.h
ft_strrchr.o			:	$(LIBFT_SRC)ft_strrchr.c $(LIBFT_ICL)libft.h
ft_strsplit.o			:	$(LIBFT_SRC)ft_strsplit.c $(LIBFT_ICL)libft.h
ft_strstr.o				:	$(LIBFT_SRC)ft_strstr.c $(LIBFT_ICL)libft.h
ft_strsub.o				:	$(LIBFT_SRC)ft_strsub.c $(LIBFT_ICL)libft.h
ft_strtrim.o			:	$(LIBFT_SRC)ft_strtrim.c $(LIBFT_ICL)libft.h
ft_tolower.o			:	$(LIBFT_SRC)ft_tolower.c $(LIBFT_ICL)libft.h
ft_toupper.o			:	$(LIBFT_SRC)ft_toupper.c $(LIBFT_ICL)libft.h
ft_sqrt.o				:	$(LIBFT_SRC)ft_sqrt.c $(LIBFT_ICL)libft.h
ft_iterative_power.o	:	$(LIBFT_SRC)ft_iterative_power.c $(LIBFT_ICL)libft.h
ft_fibonacci.o			:	$(LIBFT_SRC)ft_fibonacci.c $(LIBFT_ICL)libft.h
ft_list_push_back.o		:	$(LIBFT_SRC)ft_list_push_back.c $(LIBFT_ICL)libft.h
ft_list_size.o			:	$(LIBFT_SRC)ft_list_size.c $(LIBFT_ICL)libft.h
ft_lstaddback.o			:	$(LIBFT_SRC)ft_lstaddback.c $(LIBFT_ICL)libft.h
ft_lstcount.o			:	$(LIBFT_SRC)ft_lstcount.c $(LIBFT_ICL)libft.h
ft_lstnthdata.o			:	$(LIBFT_SRC)ft_lstnthdata.c $(LIBFT_ICL)libft.h

clean :
	$(RM) $(OBJECTS)
fclean : clean
	$(RM) $(TARGET)
re : fclean all