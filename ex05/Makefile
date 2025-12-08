# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/30 20:14:49 by bde-luce          #+#    #+#              #
#    Updated: 2025/10/30 20:16:19 by bde-luce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl_2.0

SRC_DIR = src
SRC = $(SRC_DIR)/Harl.cpp $(SRC_DIR)/main.cpp

CXX = @c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

OBJ_DIR = obj
OBJS = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJS)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re