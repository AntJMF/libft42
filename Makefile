SRCS	= ft_strmapi.c ft_strlen.c ft_strncmp.c ft_strlcpy.c ft_isalpha.c ft_isdigit.c ft_toupper.c ft_tolower.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_bzero.c ft_calloc.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_strlcat.c ft_strchr.c ft_strnstr.c ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strlen.c ft_strncmp.c ft_strlcpy.c ft_isalpha.c ft_isdigit.c ft_toupper.c ft_tolower.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_bzero.c ft_strrchr.c ft_split.c
OBJS	= ${SRCS:.c=.o}
#BSRCS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
#BOBJS	= ${BSRCS:.c=.o}
NAME	= libft.a
CC		= cc
RM		= rm -f
CFLAGS	= -Werror -Wall -Wextra
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
			ar rc  ${NAME} ${OBJS}
			ranlib ${NAME}
bonus:		${BOBJS} ${OBJS}
			ar rc ${NAME} ${OBJS} ${BOBJS}
			ranlib ${NAME}
all:		${NAME}
clean:
			${RM} ${OBJS} ${BOBJS}
fclean:		clean
			${RM} ${NAME}
re:			fclean all
