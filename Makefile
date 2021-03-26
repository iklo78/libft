# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misaev <misaev@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 11:05:41 by misaev            #+#    #+#              #
#    Updated: 2021/03/23 13:39:12 by misaev           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c

clean :
	/bin/rm -f *.o
fclean : /bin/rm -f

re : fclean all
