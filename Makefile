all: say_hello bad_buffer

say_hello: say_hello.c
	gcc say_hello.c -g -o say_hello.out

bad_buffer: bad_buffer.c
	gcc bad_buffer.c -g -o bad_buffer.out

clean:
	rm bad_buffer.out say_hello.out
