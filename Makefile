SOURCES	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c
SOURCES	+=	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c
SOURCES	+=	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c
SOURCES	+=	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c
SOURCES	+=	ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c
SOURCES	+=	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c
SOURCES	+=	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c
SOURCES	+=	ft_substr.c ft_tolower.c ft_toupper.c

SOURCES	+=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c
SOURCES	+=	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c
SOURCES	+=	ft_lstmap.c

SOURCES_BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c
SOURCES_BONUS	+=	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c
SOURCES_BONUS	+=	ft_lstmap.c

OBJECTS	= 	${SOURCES:.c=.o}

OBJECTS_BONUS	= 	${SOURCES_BONUS:.c=.o}

INCLUDE	=	libft.h

NAME	=	libft.a

CC	=	clang
AR	=	ar
RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror
ARFLAGS = rcs

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDE}

all:	$(NAME)

$(NAME):	${OBJECTS}
			${AR} ${ARFLAGS} ${NAME} ${OBJECTS}

bonus:	${NAME} ${OBJECTS_BONUS}
		${AR} ${ARFLAGS} ${NAME} ${OBJECTS_BONUS}

clean:
	${RM} ${OBJECTS} ${OBJECTS_BONUS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCES)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS)

srm:
	rm -rf *.o *.a *.z *.out *.so

run:	srm
	make re bonus && clear && clang -Wall -Wextra -Werror -fsanitize=address -g3 -lbsd main.c libft.a  && ./a.out && make srm

runs:
	norminette ft_* && norminette libft.h && clear && clang -Wall -Wextra -Werror *.c -lbsd && ./a.out

runf:
	clear && clang -I includes -lbsd -fsanitize=address -g3 -Wall -Wextra -Werror *.c && ./a.out

runw:
	bash libft-war-machine/grademe.sh -u

runww:
	bash Libftest/grademe.sh -u

.PHONY:	all clean fclean re
