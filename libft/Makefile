# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kei2003730 <kei2003730@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 16:00:02 by kjikuhar          #+#    #+#              #
#    Updated: 2025/07/14 09:23:14 by kei2003730       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	cc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror -I.
NAME	=	libft.a

# サブライブラリ
CTYPE_LIB	=	ctype/ctype.a
STRINGS_LIB	=	strings/strings.a
STRING_LIB	=	string/ft_string.a

# 将来追加予定の個別ファイル（コメントアウト）
# SRCS	=	conversion/ft_atoi.c \
#			conversion/ft_itoa.c \
#			...

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

# サブライブラリのビルド
$(CTYPE_LIB):
	@echo "$(CYAN)$(BOLD)Building ctype library...$(RESET)"
	@$(MAKE) -C ctype

$(STRINGS_LIB):
	@echo "$(CYAN)$(BOLD)Building strings library...$(RESET)"
	@$(MAKE) -C strings

$(STRING_LIB):
	@echo "$(CYAN)$(BOLD)Building string library...$(RESET)"
	@$(MAKE) -C string

# メインライブラリの作成（サブライブラリのみ）
$(NAME):	$(CTYPE_LIB) $(STRINGS_LIB) $(STRING_LIB)
			@echo "$(MAGENTA)$(BOLD)Creating unified libft.a...$(RESET)"
			@cp $(CTYPE_LIB) $(NAME)
			@ar x $(STRINGS_LIB)
			@ar rcs $(NAME) *.o
			@$(RM) *.o
			@ar x $(STRING_LIB)
			@ar rcs $(NAME) *.o
			@$(RM) *.o
			@echo "Compiled with $(GREEN)$(BOLD)$(CFLAGS)$(RESET)"
			@echo "$(YELLOW)$(BOLD)========================================="
			@echo "        You can use My $(NAME)!!"
			@echo "        (Including ctype + strings + string)"
			@echo "=========================================$(RESET)"

# =========================================
#         You can use My libft.a!!
# =========================================

%.o: %.c
	@echo "Compiled ✅ $(CYAN) $(BOLD) $^ $(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $^

clean:
			@$(MAKE) -C ctype clean
			@$(MAKE) -C strings clean
			@$(MAKE) -C string clean

fclean:		clean
			@$(RM) $(NAME)
			@$(MAKE) -C ctype fclean
			@$(MAKE) -C strings fclean
			@$(MAKE) -C string fclean

re:			fclean all

test:
	$(MAKE) -C ctype test

.PHONY:		all clean fclean re test

# カラーコード
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
