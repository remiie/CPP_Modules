NAME    = crappyBook

SRC     = Main.cpp \
 		Contact.cpp \
 		PhoneBook.cpp

OBJ     = $(SRC:.cpp=.o)

CC      = clang++
CFLAGS  = -Wall -Wextra -Werror

RM      = rm
RFLAGS  = -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@$(RM) $(RFLAGS) $(OBJ)

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(RFLAGS) $(OBJ)

fclean: clean
	@$(RM) $(RFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re