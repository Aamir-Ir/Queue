A4: testA4.o miscFunctions.o queueFunctions.o mainA4.o
	gcc -Wall -std=c99 testA4.o miscFunctions.o queueFunctions.o mainA4.o -o A4

testA4.o: testA4.c headerA4.h
	gcc -Wall -std=c99 -c testA4.c

miscFunctions.o: miscFunctions.c headerA4.h
	gcc -Wall -std=c99 -c miscFunctions.c

queueFunctions.o: queueFunctions.c headerA4.h
	gcc -Wall -std=c99 -c queueFunctions.c

mainA3.o: mainA4.c headerA4.h
	gcc -Wall -std=c99 -c mainA4.c

clean:
	rm *.o A4

