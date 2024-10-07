# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-ouaz <yel-ouaz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 23:06:45 by yel-ouaz          #+#    #+#              #
#    Updated: 2023/11/22 11:10:48 by yel-ouaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

CFILES = ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strncmp.c ft_toupper.c ft_atoi.c ft_isascii.c\
    	ft_memcpy.c ft_strjoin.c ft_strnstr.c ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlcat.c \
		ft_strrchr.c ft_calloc.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_substr.c ft_isalnum.c \
		ft_memchr.c ft_strchr.c ft_strlen.c ft_tolower.c ft_strtrim.c ft_itoa.c ft_split.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c 

BFILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
		ft_lstmap_bonus.c

NAME = libft.a

LIB = libft.h

OBJECT = $(CFILES:.c=.o)

BOBJECT = $(BFILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECT) 
	ar -rsc $(NAME) $(OBJECT)

%.o : %.c $(LIB)
	$(CC) $(FLAGS) -c -o $@ $<

bonus : $(BOBJECT)
	ar -rsc $(NAME) $(BOBJECT)

clean :
	rm -f $(OBJECT) $(BOBJECT)

fclean :
	rm -f $(NAME) $(OBJECT) $(BOBJECT)

re : fclean all

.PHONY : fclean clean re all bonus