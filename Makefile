##
## Makefile for Makefile in /home/faudil.puttilli/delivery/CPool_Day10/CPool_Day10/do-op
##
## Made by Faudil PUTTILLI
## Login   <faudil.puttilli@epitech.net>
##
## Started on  Sun Oct 16 19:25:02 2016 Faudil PUTTILLI
## Last update Tue Jun 13 16:37:56 2017 guacamole
##


LIBS=	-lsfml-graphics -lsfml-window -lsfml-system
CXX = g++

SRC =  src/main.o

all: thegame

%.o: %.cpp
	$(CXX) -c $< -o $@

%.o: %.hpp
	$(CXX) -c $< -o $@

thegame: $(SRC)
	@echo "** Building the game"
	$(CXX) -o thegame $(SRC) $(LIBS)

clean:
	@echo "** Removing object files and executable..."
	rm -f thegame src/*.o

install:
	@echo '** Installing...'
	#cp thegame /usr/bin/

uninstall:
	@echo '** Uninstalling...'
	$(RM) /usr/bin/thegame

re: clean all
