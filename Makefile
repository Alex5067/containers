NAME = containers
STL = stl_containers

INC = 	vector.hpp \
		stack.hpp \
		map/map.hpp \
		map/red_black_tree.hpp \
		iterator_traits.hpp \
		set.hpp \

SRCS = mains/mine.cpp
SRCS_STL = mains/stl.cpp

OBJS = $(SRCS:.cpp=.o)
OBJS_STL = $(SRCS_STL:.cpp=.o)


CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address
CXX = clang++

all : $(NAME)

stl : $(STL)

%.o : %.cpp $(INC)
	$(CXX) -c $(CXXFLAGS) $< -o $(<:.cpp=.o) -g

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o ${NAME} $(OBJS)

$(STL) : $(OBJS_STL)
	$(CXX) $(CXXFLAGS) -o ${STL} $(OBJS_STL)

clean : 
	rm -f $(OBJS)
	rm -f $(OBJS_STL)

fclean : clean
	rm -f $(NAME)
	rm -f $(STL)

re : fclean all

.PHONY : all clean fclean re stl