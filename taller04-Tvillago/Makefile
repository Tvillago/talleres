INCLUDE = includes
hash: libsha1.a main.c
	gcc -c main.c -I${INCLUDE} -w
	gcc -static -o hash main.o libsha1.a 
hash_dyn: libsha1.so.0 main.c
	gcc -o hash_dyn main.c -I${INCLUDE} libsha1.so.0 -w -Wl,-rpath,.
.PHONY: clean
clean:
	rm -rf hash hash_dyn