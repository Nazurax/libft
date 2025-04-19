# =============================
#         VARIABLES
# =============================

NAME		= libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror

# === SOURCE FILES ===
SRCS		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			  ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			  ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			  ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
			  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			  ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS_DIR	= objs
OBJS		= $(SRCS:%.c=$(OBJS_DIR)/%.o)
BONUS_OBJS	= $(BONUS_SRCS:%.c=$(OBJS_DIR)/%.o)

# === COLORS ===
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;36m
RESET		= \033[0m

# =============================
#         COMPILATION
# =============================

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)[✓] $(NAME) creado correctamente.$(RESET)"

bonus: $(NAME) $(BONUS_OBJS)
	@ar rcs $(NAME) $(BONUS_OBJS)
	@echo "$(GREEN)[✓] BONUS añadido a $(NAME) correctamente.$(RESET)"

$(OBJS_DIR)/%.o: %.c libft.h Makefile
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(YELLOW)[OBJ] Compilado $<$(RESET)"

# =============================
#         CLEANING
# =============================

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(BLUE)[clean] Objetos eliminados.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)[fclean] $(NAME) eliminado.$(RESET)"

re: fclean all

.PHONY: all clean fclean re bonus
