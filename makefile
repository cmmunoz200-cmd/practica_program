#definir el compilador y las banderas
CC = gcc
CFLAGS= -Wall
all : $(nombre)
$(nombre): $(nombre).c
	$(CC) $(CFLAGS) $(nombre).c -o $(nombre).exe
	run: 
	./$(nombre).exe
	clean:
	rm -f *.exe