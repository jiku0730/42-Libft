
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/18 21:11:39 by kjikuhar          #+#    #+#              #
#    Updated: 2025/09/30 16:44:58 by kjikuhar         ###   ########.fr        #
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

NAME		:= libft.a

#─ compile config ────────────────────────────────────────────────────────────

CC			:=	cc
INCLUDES	:=	$(shell find . -type d -name includes)
CFLAGS		:=	-Wall -Wextra -Werror $(addprefix -I, $(INCLUDES)) -I.

#─ directory name ────────────────────────────────────────────────────────────

OBJDIR		:=	obj
LIBFT_A		:=	$(LIBFT_DIR)/libft.a

#─ sources & objects ─────────────────────────────────────────────────────────

#mandatory sources
SRCS_MAND	:=	ft_list/src/ft_lstdelone.c \
				ft_list/src/ft_lstadd_back.c \
				ft_list/src/ft_lstiter.c \
				ft_list/src/ft_lstmap.c \
				ft_list/src/ft_lstlast.c \
				ft_list/src/ft_lstnew.c \
				ft_list/src/ft_lstclear.c \
				ft_list/src/ft_lstadd_front.c \
				ft_list/src/ft_lstsize.c \
				ft_ctype/src/ft_toupper.c \
				ft_ctype/src/ft_ispunct.c \
				ft_ctype/src/ft_isalnum.c \
				ft_ctype/src/ft_isalpha.c \
				ft_ctype/src/ft_isascii.c \
				ft_ctype/src/ft_tolower.c \
				ft_ctype/src/ft_isgraph.c \
				ft_ctype/src/ft_isspace.c \
				ft_ctype/src/ft_islower.c \
				ft_ctype/src/ft_isblank.c \
				ft_ctype/src/ft_isupper.c \
				ft_ctype/src/ft_isdigit.c \
				ft_ctype/src/ft_isprint.c \
				ft_ctype/src/ft_iscntrl.c \
				ft_ctype/src/ft_isxdigit.c \
				ft_stdlib/src/ft_strtoull.c \
				ft_stdlib/src/ft_strtoul.c \
				ft_stdlib/src/ft_ldiv.c \
				ft_stdlib/src/ft_labs.c \
				ft_stdlib/src/ft_lldiv.c \
				ft_stdlib/src/ft_atol.c \
				ft_stdlib/src/ft_calloc.c \
				ft_stdlib/src/ft_itoa.c \
				ft_stdlib/src/ft_strtoll_utils.c \
				ft_stdlib/src/ft_strtoll.c \
				ft_stdlib/src/ft_div.c \
				ft_stdlib/src/ft_strtol.c \
				ft_stdlib/src/ft_abs.c \
				ft_stdlib/src/ft_llabs.c \
				ft_stdlib/src/ft_atoll.c \
				ft_stdlib/src/ft_atoi.c \
				ft_string/src/ft_memset.c \
				ft_string/src/ft_memmove.c \
				ft_string/src/ft_strrcmp.c \
				ft_string/src/ft_strchr.c \
				ft_string/src/ft_memrchr.c \
				ft_string/src/ft_strcpy.c \
				ft_string/src/ft_memcpy.c \
				ft_string/src/ft_strtrim.c \
				ft_string/src/ft_strrchr.c \
				ft_string/src/ft_strdup.c \
				ft_string/src/ft_free_split.c \
				ft_string/src/ft_striteri.c \
				ft_string/src/ft_substr.c \
				ft_string/src/ft_strlcat.c \
				ft_string/src/ft_strnstr.c \
				ft_string/src/ft_strlcpy.c \
				ft_string/src/ft_memcmp.c \
				ft_string/src/ft_memchr.c \
				ft_string/src/ft_strncmp.c \
				ft_string/src/ft_strjoin.c \
				ft_string/src/ft_strcat.c \
				ft_string/src/ft_strlen.c \
				ft_string/src/ft_strmapi.c \
				output/ft_putchar_fd.c \
				output/ft_putstr_fd.c \
				output/ft_putnbr_fd.c \
				output/ft_putendl_fd.c \
				get_next_line/get_next_line.c \
				ft_stdio/src/ft_printf.c \
				ft_stdio/src/ft_vdprintf.c \
				ft_stdio/src/ft_printf_utils/ft_utils.c \
				ft_stdio/src/ft_printf_utils/ft_output/ft_output_hex.c \
				ft_stdio/src/ft_printf_utils/ft_output/ft_output_utils.c \
				ft_stdio/src/ft_printf_utils/ft_output/ft_output_char.c \
				ft_stdio/src/ft_printf_utils/ft_output/ft_output_str.c \
				ft_stdio/src/ft_printf_utils/ft_output/ft_conv_info_output.c \
				ft_stdio/src/ft_printf_utils/ft_output/ft_output_ptr.c \
				ft_stdio/src/ft_printf_utils/ft_output/ft_output_percentage.c \
				ft_stdio/src/ft_printf_utils/ft_output/ft_output_int.c \
				ft_stdio/src/ft_printf_utils/ft_set/ft_set_flags.c \
				ft_stdio/src/ft_printf_utils/ft_set/ft_set_field_width.c \
				ft_stdio/src/ft_printf_utils/ft_set/ft_conv_info_set.c \
				ft_stdio/src/ft_printf_utils/ft_set/ft_set_precision.c \
				ft_stdio/src/ft_printf_utils/ft_set/ft_set_specifier.c \
				ft_stdio/src/ft_printf_utils/ft_handle/ft_handle_str.c \
				ft_stdio/src/ft_printf_utils/ft_handle/ft_handle_char.c \
				ft_stdio/src/ft_printf_utils/ft_handle/ft_handle_ptr.c \
				ft_stdio/src/ft_printf_utils/ft_handle/ft_conv_info_handle.c \
				ft_stdio/src/ft_printf_utils/ft_handle/ft_handle_int_u.c \
				ft_stdio/src/ft_printf_utils/ft_handle/ft_handle_hex.c \
				ft_stdio/src/ft_printf_utils/ft_handle/ft_handle_int.c \
				ft_stdio/src/ft_printf_utils/ft_handle/ft_handle_percentage.c \
				ft_stdio/src/ft_printf_utils/ft_init/ft_conv_info_init.c \
				ft_stdio/src/ft_printf_utils/ft_utils_strjoin.c \
				ft_stdio/src/ft_putchar.c \
				ft_stdio/src/ft_dprintf.c \
				ft_stdio/src/ft_vprintf.c \
				original/ft_split.c \
				original/ft_min.c \
				original/ft_swap.c \
				original/ft_max.c \
				ft_strings/src/ft_index.c \
				ft_strings/src/ft_strncasecmp.c \
				ft_strings/src/ft_rindex.c \
				ft_strings/src/ft_bcopy.c \
				ft_strings/src/ft_ffs.c \
				ft_strings/src/ft_bzero.c \
				ft_strings/src/ft_strcasecmp.c \
				ft_strings/src/ft_bcmp.c \
				ft_deque/src/ft_deque_init.c

#object files
OBJS	:=	$(SRCS_MAND:%.c=$(OBJDIR)/%.o)

#-----------------------------------------------------------------------------

#▸ rules

#-----------------------------------------------------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiled with $(GREEN)$(BOLD)$(CFLAGS)$(RESET)"
	@ar rcs $@ $^
	@echo "$(YELLOW)$(BOLD)========================================="
	@echo "    You can use My $(NAME)!!"
	@echo "=========================================$(RESET)"

# compile object files

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@echo "Compiled ✅ $(WHITE) $(BOLD) $< $(RESET)"
	@$(CC) $(CFLAGS) -c -o $@ $<

# clean targets
clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
