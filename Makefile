NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f


SRC_DIR = src
OBJ_DIR = obj
VPATH = $(SRC_DIR)/libft_src:$(SRC_DIR)/printf_src:$(SRC_DIR)/extra_src

INCLUDES = -Iinc

LIBFT_SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c

PRINTF_SRCS = ft_error.c ft_printf.c ft_putchar.c ft_puthex.c \
	ft_putnbr.c ft_putptr.c ft_putstr.c ft_putunbr.c

EXTRA_SRC = ft_strrev.c ft_strsmsh.c ft_swp.c ft_strclen.c ft_kllarr.c

SRCS := $(LIBFT_SRCS) $(PRINTF_SRCS) $(EXTRA_SRC)

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo
	@echo
	@echo "       >> COMPILED '$(NAME)' SUCCESSFULLY <<"
	@echo

$(OBJ_DIR)/%.o: %.c 
	@$(eval TOTAL := $(words $(SRCS)))
	@$(eval PROGRESS := $(shell echo $$(($(PROGRESS)+1))))
	@$(eval PERCENT := $(shell echo $$(($(PROGRESS)*100/$(TOTAL)))))
	@$(call progress_bar,$(PERCENT))
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) -r $(OBJ_DIR)
	@echo
	@echo "Removed '*.o' files from '$(OBJ_DIR)' directory"
	@echo

fclean:
	@$(RM) $(NAME)
	@$(RM) -r $(OBJ_DIR)
	@echo
	@echo "   >> Removed '*.o' files from '$(OBJ_DIR)' directory <<"
	@echo "           >>Removed $(NAME) from root <<"
	@echo

re: fclean all

.PHONY: all clean fclean re


RED     := $(shell tput setaf 1)
GREEN   := $(shell tput setaf 2)
YELLOW  := $(shell tput setaf 3)
BLUE    := $(shell tput setaf 4)
MAGENTA := $(shell tput setaf 5)
CYAN    := $(shell tput setaf 6)
WHITE   := $(shell tput setaf 7)
RESET   := $(shell tput sgr0)

define progress_bar
	@printf "$(CYAN)["; \
	for i in $(shell seq 1 50); do \
		if [ $$i -le $$(($(1)*50/100)) ]; then \
			printf "$(GREEN)█$(RESET)"; \
		else \
			printf "$(WHITE)░$(RESET)"; \
		fi; \
	done; \
	printf "$(CYAN)] %3d%%$(RESET)\r" $(1);
endef
