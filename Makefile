main: geometry.c
	gcc -Wall -Werror -o geo geometry.c
clean:
	rm geo
run:
	./geo
