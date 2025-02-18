# my first make file!!!
CC = gcc
CFLAGS = -Iinclude
SRC = main.c src/prime.c 
OUT = program

# this enables three commands:

# all -compile the project
# run -launch the project
# clean - delete the exe file

all:
	echo "compiling..."
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run:
	./$(OUT)

clean:
	echo "cleanup..."
	rm -f $(OUT)