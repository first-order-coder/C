CFLAGS = -ggdb -Wall -Wextra

all: ex6.i ex6.s ex6.o ex6.lst

# ex6.exe: ex6.c
# 	gcc $(CFLAGS) ex6.c -o ex6.exe

ex6.o: ex6.c
	gcc $(CFLAGS) -Wa,-a=ex6.lst -c ex6.c #object file

ex6: ex6.o
	gcc $(CFLAGS) -static -Wl, -Map=ex6.map -o ex6 ex6.o #executable file

ex6.i: ex6.c
	gcc -E ex6.c > ex6.i #output of the preprocessor preporecessed source file

ex6.s: ex6.c
	gcc -S ex6.c #assembly output #assembly output

verbose:
	gcc -v $(CFLAGS) -Wextra -c ex6.c

clean:
	rm -f ex6 ex6.o ex6.i ex6.s ex6.lst 


