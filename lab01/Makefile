# compile project
all:
	g++ -Wall -Werror -O1 -pedantic -g main.cpp -o lab01

# test
test:
	./lab01 | tee lab01.out
	diff lab01.out lab01.out.correct

