CC = gcc
CFLAGS = -Wall -Wextra -g
CCFLAGS = 
LDFLAGS =

BIN = test
OBJ = $(BIN).o
$(BIN) : $(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^
$(OBJ).o : $(OBJ).c

.PHONY : clean
clean :
	rm *.o $(BIN)
