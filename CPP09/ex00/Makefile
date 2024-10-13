NAME = bitcoin_exchange

CC = c++

OBJSDIR = obj/

SRCS = main.cpp \
	   BitcoinExchange.cpp

OBJS = $(addprefix $(OBJSDIR), $(SRCS:.cpp=.o))

FLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "✅ Compiled"

$(OBJSDIR)%.o: %.cpp
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) $< -c -o $@

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@rm -Rf $(OBJSDIR)
	@echo "🧹 Cleaned"

re: fclean all

.PHONY: clean all re fclean
