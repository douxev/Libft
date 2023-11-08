# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 10:51:15 by jdoukhan          #+#    #+#              #
#    Updated: 2023/11/08 15:19:33 by jdoukhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g2
BONUS_SOURCES = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstsize.c 
SOURCES = ft_striteri.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_calloc.c ft_strdup.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_memcmp.c 
OBJECTS = $(SOURCES:.c=.o)
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

all: $(NAME)

.c.o: 
	@$(CC) $(CFLAGS) -c -I ./ $< -o ${<:.c=.o}

$(NAME) : $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)

bonus: all $(BONUS_OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS) $(BONUS_OBJECTS)
	
clean:
	@rm -rf $(OBJECTS) $(BONUS_OBJECTS)

fclean: cleanz
	@rm -rf $(NAME)

re: fclean all



.PHONY: all clean fclean re bonus
