SOURCES	=	ft_strchr.c ft_bzero.c ft_strnstr.c ft_isprint.c ft_atoi.c ft_tolower.c ft_toupper.c ft_memchr.c ft_strlcpy.c ft_memset.c ft_strlen.c ft_isascii.c ft_strlcat.c ft_memcmp.c ft_isdigit.c ft_strrchr.c ft_isalpha.c ft_strncmp.c ft_isalnum.c ft_memcpy.c ft_memmove.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c

OBJECTS	= 	${SOURCES:.c=.o}

INCLUDE	=	libft.h

NAME	=	libft.a

CC	=	clang
AR	=	ar
RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror
ARFLAGS = rc

INDEX	=	ranlib ${NAME}

# so:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCES)
# 	gcc -nostartfiles -shared -o libft.so $(OBJECTS)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDE}

all:	${OBJECTS}
		${AR} ${ARFLAGS} ${NAME} ${OBJECTS}
		${INDEX}

clean:
	${RM} ${OBJECTS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

run:
	clear && clang -fsanitize=address -Wall -Wextra -Werror *.c -I includes -lbsd && ./a.out

runs:
	clear && clang -Wall -Wextra -Werror *.c -I includes -lbsd && ./a.out

runw:
	bash libft-war-machine/grademe.sh -op2

runww:
	bash Libftest/grademe.sh -op2

.PHONY:	all clean fclean re run
