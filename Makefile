SSOURCES	=	./src/server.c
CSOURCES	=	./src/client.c

OBJ		=	(SOURCES:.c=.o)
CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror
SNAME	=	server
CNAME	=	client

PRINTF	=	./ft_printf/libftprintf.a
LIBFT	=	./libft/libft.a

all: $(SNAME) $(CNAME)

$(SNAME):
	$(CC) -o $(SNAME) $(CFLAGS) $(SSOURCES) $(PRINTF) $(LIBFT)

$(CNAME):
	$(CC) -o $(CNAME) $(CFLAGS) $(CSOURCES) $(PRINTF) $(LIBFT)

clean:
	@rm -f $(SNAME) $(CNAME)

fclean: clean
	@rm -f $(SNAME) $(CNAME)

re: fclean all
