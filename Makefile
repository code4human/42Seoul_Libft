# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/13 04:36:24 by taeekim           #+#    #+#              #
#    Updated: 2020/10/20 03:56:12 by taeekim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR	= ar rc
RM	= rm -f

NAME	= libft.a

SRCS	= ./ft_memset.c \
	  ./ft_bzero.c \
	  ./ft_memcpy.c \
	  ./ft_memccpy.c \
	  ./ft_memmove.c \
	  ./ft_memchr.c \
	  ./ft_memcmp.c \
	  ./ft_strlen.c \
	  ./ft_strlcpy.c \
	  ./ft_strlcat.c \
	  ./ft_strchr.c \
	  ./ft_strrchr.c \
	  ./ft_strnstr.c \
	  ./ft_strncmp.c \
	  ./ft_atoi.c \
	  ./ft_isalpha.c \
	  ./ft_isdigit.c \
	  ./ft_isalnum.c \
	  ./ft_isascii.c \
	  ./ft_isprint.c \
	  ./ft_tolower.c \
	  ./ft_toupper.c \
	  ./ft_calloc.c \
	  ./ft_strdup.c \
	  ./ft_substr.c \
	  ./ft_strjoin.c \
	  ./ft_strtrim.c \
	  ./ft_split.c \
	  ./ft_itoa.c \
	  ./ft_strmapi.c \
	  ./ft_putchar_fd.c \
	  ./ft_putstr_fd.c \
	  ./ft_putendl_fd.c \
	  ./ft_putnbr_fd.c

SRCS_BONUS = ./ft_lstnew.c \
			 ./ft_lstadd_front.c \
			 ./ft_lstsize.c \
			 ./ft_lstlast.c \
			 ./ft_lstadd_back.c \
			 ./ft_lstdelone.c \
			 ./ft_lstclear.c \
			 ./ft_lstiter.c \
			 ./ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $^

bonus : $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $^ $(OBJS_BONUS)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

norm :
	norminette -R CheckForbiddenSourceHeader 

clean :
	$(RM) $(OBJS)

bclean :
	$(RM) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

bfclean : bclean
	$(RM) bonus

re : fclean all
