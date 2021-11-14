NAME = Worker
INC = Worker.h
SRC := $(wildcard *.cpp)
OBJ = $(addprefix obj/, $(notdir $(SRC:%.cpp=%.o)))
FLAGS = -fPIE
SANFLAG = -g -fsanitize=address

all: $(NAME)

install: $(NAME)

$(NAME): $(OBJ)
	@make clean
	@g++ $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ): | obj

obj:
	@mkdir obj

obj/%.o: %.cpp $(INC)
	@clang $(FLAGS) -c $< -o $@
	@printf "compiled: $<\n"

clean:
	@rm -rf *.o Worker

uninstall: clean
	@make clean
	@rm -rf ./obj
	@rm -rf $(NAME)

reinstall: uninstall install

