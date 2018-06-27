CFLAGS = -Wall -Werror -MP -MMD
SOURCES = src/main.c src/deposit.c
.PHONY: clean all deposit-calc test

all :
	make bin/deposit-calc

bin/deposit-calc : build/main.o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit-calc $(CFLAGS)

build/main.o : src/main.c src/deposit.h
	gcc -c src/main.c -o build/main.o $(CFLAGS)

build/deposit.o : src/deposit.c src/deposit.h
	gcc -c src/deposit.c -o build/deposit.o $(CFLAGS)

test:
	make bin/deposit-calc-test
	bin/deposit-calc-test

bin/deposit-calc-test : build/test/main.o build/test/deposit-test.o
	gcc build/test/main.o build/test/deposit-test.o build/test/deposit.o -o bin/deposit-calc-test $(CFLAGS)

build/test/main.o : src/deposit.h test/main.c
	gcc -I thirdparty -c test/main.c -o build/test/main.o $(CFLAGS)
	gcc -c src/deposit.c -o build/test/deposit.o $(CFLAGS) 

build/test/deposit-test.o : src/deposit.h test/deposit-test.c
	gcc -c -I thirdparty test/deposit-test.c -o build/test/deposit-test.o $(CFLAGS)

build/test/deposit.o : src/deposit.h src/deposit.c
	gcc -c src/deposit.c -o build/test/deposit.o $(CFLAGS)

clean :
	@rm -rf build/*.d build/test/*.d 
	@rm -rf build/*.o build/test/*.o
	@rm bin/deposit-calc bin/deposit-calc-test
	@echo "All files have been cleaned."
	
-include build/*.d
