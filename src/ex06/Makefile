include lint

build:
	gcc $(CFLAGS) -c src/main.c -o appendix/main.o
	gcc $(CFLAGS) -c src/c.c -o appendix/c.o
	gcc appendix/*.o -o run/run

clean:
	rm -rf appendix/*.o run/run

rebuild: clean build