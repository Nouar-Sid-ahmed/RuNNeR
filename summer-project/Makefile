NAME	=	RuNNeR

OBJ		=	$(wildcard source/*/*.c) $(wildcard source/*.c)

CC		=	gcc

SRC		=	$(OBJ:%.c=%.o)

CFLAGS	=	-I ./include

CFLAGS	+=	-W -Werror -Wall -Wextra

LIBS	+=	-lSDL2 -lSDL2_image -lSDL2_ttf

RM		=	rm -rf


all:		install

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) $(LIBS) $(SRC) $(ICON) -o $(NAME)

mac:		$(NAME)

install:	$(NAME)
			install -m 4755 -o root $(NAME) /usr/local/bin/.

clean:
			$(RM) $(NAME) $(SRC)

fclean:			clean
			$(RM) /usr/local/bin/$(NAME) $(NAME)

re:			fclean install

macre:		clean
			$(RM) $(NAME)
