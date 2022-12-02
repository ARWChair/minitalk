NAME = libft.a

FLAGS = -Wall -Wextra -Werror

CC = gcc

SRC =	ft_strmapi.c	ft_striteri.c	ft_helper.c	ft_split.c	ft_atoi.c	ft_isalnum.c	ft_isdigit.c	ft_lengthof.c	ft_putstr_fd.c	ft_memcpy.c	ft_putchar_fd.c	ft_strjoin.c	ft_strlen.c	ft_strrchr.c	ft_toupper.c	ft_bzero.c	ft_isalpha.c	ft_isprint.c	ft_memchr.c	ft_memmove.c	ft_strchr.c	ft_strlcat.c	ft_strncmp.c	ft_calloc.c	ft_isascii.c	ft_memcmp.c	ft_memset.c	ft_strdup.c	ft_strlcpy.c	ft_strnstr.c	ft_tolower.c	ft_itoa.c	ft_strtrim.c	ft_substr.c	ft_putnbr_fd.c	ft_putendl_fd.c
BONUS =	ft_lstlast.c	ft_lstnew.c	ft_lstadd_back.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstdelone.c	ft_lstclear.c	ft_lstiter.c

OBJ = $(SRC:.c=.o)

OBJB = $(BONUS:.c=.o)

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar	-rcs	$@	$(OBJ)
	@ranlib	$@

$(OBJ):	$(SRC)
	$(CC)	-c	$(FLAGS)	$(SRC)

$(OBJB):	$(BONUS)
	$(CC)	-c	$(FLAGS)	$(BONUS)

clean:
	$(RM)	$(OBJ)

fclean:	clean
	$(RM)	$(NAME)

.PHONY:	all,	clean,	fclean

re:	fclean	all

bonus: $(OBJ)	$(OBJB)
	ar	-rcs	$(NAME)	$(OBJ)	$(OBJB)	

so:
	$(CC)	-nostartfiles	-fPIC	$(CFLAGS)	$(SRC)
	gcc	-nostartfiles	-shared	-o	libft.so	$(OBJ)
