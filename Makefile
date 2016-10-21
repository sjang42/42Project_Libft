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

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(AR) $(TARGET) $(OBJECTS)
	$(RLIB) $(TARGET)

ft_atoi.o : $(SRC)ft_atoi.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_atoi.c
ft_bzero.o : $(SRC)ft_bzero.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_bzero.c
ft_isalnum.o : $(SRC)ft_isalnum.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_isalnum.c
ft_isalpha.o : $(SRC)ft_isalpha.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_isalpha.c
ft_isascii.o : $(SRC)ft_isascii.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_isascii.c
ft_isdigit.o : $(SRC)ft_isdigit.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_isdigit.c
ft_isprint.o : $(SRC)ft_isprint.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_isprint.c
ft_itoa.o : $(SRC)ft_itoa.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_itoa.c
ft_lstadd.o : $(SRC)ft_lstadd.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_lstadd.c
ft_lstdel.o : $(SRC)ft_lstdel.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_lstdel.c
ft_lstdelone.o : $(SRC)ft_lstdelone.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_lstdelone.c
ft_lstiter.o : $(SRC)ft_lstiter.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_lstiter.c
ft_lstmap.o : $(SRC)ft_lstmap.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_lstmap.c
ft_lstnew.o : $(SRC)ft_lstnew.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_lstnew.c
ft_memalloc.o : $(SRC)ft_memalloc.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_memalloc.c
ft_memccpy.o : $(SRC)ft_memccpy.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_memccpy.c
ft_memchr.o : $(SRC)ft_memchr.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_memchr.c
ft_memcmp.o : $(SRC)ft_memcmp.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_memcmp.c
ft_memcpy.o : $(SRC)ft_memcpy.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_memcpy.c
ft_memdel.o : $(SRC)ft_memdel.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_memdel.c
ft_memmove.o : $(SRC)ft_memmove.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_memmove.c
ft_memset.o : $(SRC)ft_memset.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_memset.c
ft_putchar.o : $(SRC)ft_putchar.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_putchar.c
ft_putchar_fd.o : $(SRC)ft_putchar_fd.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_putchar_fd.c
ft_putendl.o : $(SRC)ft_putendl.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_putendl.c
ft_putendl_fd.o : $(SRC)ft_putendl_fd.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_putendl_fd.c
ft_putnbr.o : $(SRC)ft_putnbr.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_putnbr.c
ft_putnbr_fd.o : $(SRC)ft_putnbr_fd.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_putnbr_fd.c
ft_putstr.o : $(SRC)ft_putstr.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_putstr.c
ft_putstr_fd.o : $(SRC)ft_putstr_fd.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_putstr_fd.c
ft_strcat.o : $(SRC)ft_strcat.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strcat.c
ft_strchr.o : $(SRC)ft_strchr.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strchr.c
ft_strclr.o : $(SRC)ft_strclr.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strclr.c
ft_strcmp.o : $(SRC)ft_strcmp.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strcmp.c
ft_strcpy.o : $(SRC)ft_strcpy.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strcpy.c
ft_strdel.o : $(SRC)ft_strdel.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strdel.c
ft_strdup.o : $(SRC)ft_strdup.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strdup.c
ft_strequ.o : $(SRC)ft_strequ.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strequ.c
ft_striter.o : $(SRC)ft_striter.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_striter.c
ft_striteri.o : $(SRC)ft_striteri.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_striteri.c
ft_strjoin.o : $(SRC)ft_strjoin.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strjoin.c
ft_strlcat.o : $(SRC)ft_strlcat.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strlcat.c
ft_strlen.o : $(SRC)ft_strlen.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strlen.c
ft_strmap.o : $(SRC)ft_strmap.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strmap.c
ft_strmapi.o : $(SRC)ft_strmapi.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strmapi.c
ft_strncat.o : $(SRC)ft_strncat.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strncat.c
ft_strncmp.o : $(SRC)ft_strncmp.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strncmp.c
ft_strncpy.o : $(SRC)ft_strncpy.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strncpy.c
ft_strnequ.o : $(SRC)ft_strnequ.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strnequ.c
ft_strnew.o : $(SRC)ft_strnew.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strnew.c
ft_strnstr.o : $(SRC)ft_strnstr.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strnstr.c
ft_strrchr.o : $(SRC)ft_strrchr.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strrchr.c
ft_strsplit.o : $(SRC)ft_strsplit.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strsplit.c
ft_strstr.o : $(SRC)ft_strstr.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strstr.c
ft_strsub.o : $(SRC)ft_strsub.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strsub.c
ft_strtrim.o : $(SRC)ft_strtrim.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_strtrim.c
ft_tolower.o : $(SRC)ft_tolower.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_tolower.c
ft_toupper.o : $(SRC)ft_toupper.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_toupper.c
ft_sqrt.o : $(SRC)ft_sqrt.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_sqrt.c
ft_iterative_power.o : $(SRC)ft_iterative_power.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_iterative_power.c
ft_fibonacci.o : $(SRC)ft_fibonacci.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_fibonacci.c
ft_list_push_back.o : $(SRC)ft_list_push_back.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_list_push_back.c
ft_list_size.o : $(SRC)ft_list_size.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_list_size.c
ft_lstaddback.o : $(SRC)ft_lstaddback.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_lstaddback.c
ft_lstcount.o : $(SRC)ft_lstcount.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_lstcount.c
ft_lstnthdata.o : $(SRC)ft_lstnthdata.c $(ICL)libft.h
	$(CC) $(CFLAG) -I$(ICL) $(SRC)ft_lstnthdata.c

clean :
	$(RM) $(OBJECTS)
fclean : clean
	$(RM) $(TARGET)
re : fclean all
