OBJ:=$(patsubst %.c,%.o,$(wildcard *.c))
a.out:$(OBJ)
	gcc -o a.out $(OBJ)
clean:
	rm *.out *.o
