NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c ft_printf_utils.c
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

HEADER = ft_printf.h

all: $(NAME)

# Create the library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compile source files
$(OBJ_DIR)/%.o: %.c $(HEADER) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create obj directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Phony targets
.PHONY: all clean fclean re

# Clean objects and libft
clean:
	rm -f $(OBJ)
	rm -rf $(OBJ_DIR)

# Clean everything
fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all
