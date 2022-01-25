SRCS =	so_long.c\
		get_next_line.c\
		get_next_line_utils.c\
		ft_calloc.c\
		ft_split.c\
		ft_strlcpy.c\
		ft_strlen_sl.c\
		ft_strlen_y.c\
		so_long_two.c\
				
OBJS	= ${SRCS:.c=.o}

NAME	= so_long

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -g

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):
			gcc $(CFLAGS) $(SRCS) -o $(NAME)

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSB}

fclean:	clean
		${RM} ${NAME}

re :	fclean all

.PHONY: all clean fclean re
