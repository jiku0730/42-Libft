# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/18 21:11:39 by kjikuhar          #+#    #+#              #
#    Updated: 2025/07/14 11:46:49 by kei2003730       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-----------------------------------------------------------------------------
#> options
#-----------------------------------------------------------------------------
BLACK	:=	\033[30m
RED		:=	\033[31m
GREEN	:=	\033[32m
YELLOW	:=	\033[33m
BLUE	:=	\033[96m
MAGENTA	:=	\033[38;5;206m
CYAN	:=	\033[36m
WHITE	:=	\033[37m
RESET	:=	\033[0m
BOLD	:=	\033[1m
DIM		:=	\033[2m
ITALIC	:=	\033[3m
UNDER	:=	\033[4m
BLINK	:=	\033[5m
REVERSE	:=	\033[7m
HIDDEN	:=	\033[8m
PINK	:=	\033[35m

#-----------------------------------------------------------------------------

#▸ variables

#-----------------------------------------------------------------------------

NAME		:=	ft_printf.a

#─ compile config ────────────────────────────────────────────────────────────

CC			:=	cc
CFLAGS		:=	-Wall -Wextra -Werror -Iincludes
T_CFLAGS	:=	-Iincludes

#─ directory name ────────────────────────────────────────────────────────────

SRCDIR		:=	src
OBJDIR		:=	obj

#─ sources & objects ─────────────────────────────────────────────────────────
#sources

SRCS	:=	src/ft_printf.c \
			src/ft_vprintf.c \
			src/ft_dprintf.c \
			src/ft_vdprintf.c \
			src/utils/ft_utils.c \
			src/utils/ft_utils_strjoin.c \
			src/utils/ft_handle/ft_conv_info_handle.c \
			src/utils/ft_handle/ft_handle_char.c \
			src/utils/ft_handle/ft_handle_hex.c \
			src/utils/ft_handle/ft_handle_int.c \
			src/utils/ft_handle/ft_handle_int_u.c \
			src/utils/ft_handle/ft_handle_percentage.c \
			src/utils/ft_handle/ft_handle_ptr.c \
			src/utils/ft_handle/ft_handle_str.c \
			src/utils/ft_init/ft_conv_info_init.c \
			src/utils/ft_output/ft_conv_info_output.c \
			src/utils/ft_output/ft_output_char.c \
			src/utils/ft_output/ft_output_hex.c \
			src/utils/ft_output/ft_output_int.c \
			src/utils/ft_output/ft_output_percentage.c \
			src/utils/ft_output/ft_output_ptr.c \
			src/utils/ft_output/ft_output_str.c \
			src/utils/ft_output/ft_output_utils.c \
			src/utils/ft_set/ft_conv_info_set.c \
			src/utils/ft_set/ft_set_field_width.c \
			src/utils/ft_set/ft_set_flags.c \
			src/utils/ft_set/ft_set_precision.c \
			src/utils/ft_set/ft_set_specifier.c

#object files

OBJS	:=	$(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

#test

TEST        := test/test_printf.c
OBJ_T       := $(TEST:.c=.o)

#-----------------------------------------------------------------------------

#▸ rules

#-----------------------------------------------------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiled with $(GREEN)$(BOLD)$(CFLAGS)$(RESET)"
	@ar rcs $(NAME) $(OBJS)
	@echo "$(YELLOW)$(BOLD)========================================="
	@echo "    You can use My $(NAME)!!"
	@echo "=========================================$(RESET)"

# compile object files

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	@echo "Compiled ✅ $(WHITE) $(BOLD) $^ $(RESET)"
	@$(CC) $(CFLAGS) -c -o $@ $^

# clean targets

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

test: $(NAME)
	@norminette $(SRCS)
	@$(CC) $(T_CFLAGS) $(TEST) $(NAME) -o $(OBJ_T)
	@valgrind --leak-check=full ./$(OBJ_T)
	@rm $(OBJ_T)
	fclean

.PHONY: all clean fclean re test
