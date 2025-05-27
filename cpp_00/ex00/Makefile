# **************************************************************************** #
#                                   Makefile                                   #
# **************************************************************************** #

NAME        = megaphone
CC          = c++
CFLAGS      = -Wall -Wextra -Werror -std=c++98

MAIN_SRCS = megaphone.cpp

# Unir todas las fuentes
SRCS = \
	$(MAIN_SRCS)

# Create object directories
OBJ_DIR = obj
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

# Create necessary directories
DIRS = $(OBJ_DIR)

# Regla principal para compilar
all: $(DIRS) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(DIRS):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re