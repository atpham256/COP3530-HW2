all:
	${MAKE} hw2prob1 hw2prob5 hw2prob6
hw2prob1: hw2prob1.o fibonacci.o rFibonacci.o
	g++ -g -Wall -o hw2prob1 hw2prob1.o fibonacci.o rFibonacci.o
hw2prob1.o: hw2prob1.cpp
	g++ -g -Wall -c hw2prob1.cpp
fibonacci.o: fibonacci.cpp
	g++ -g -Wall -c fibonacci.cpp
rFibonacci.o: rFibonacci.cpp
	g++ -g -Wall -c rFibonacci.cpp
hw2prob5: hw2prob5.o
	g++ -g -Wall -o hw2prob5 hw2prob5.o
hw2prob5.o: hw2prob5.cpp
	g++ -g -Wall -c hw2prob5.cpp
hw2prob6: hw2prob6.o
	g++ -g -Wall -o hw2prob6 hw2prob6.o
hw2prob6.o: hw2prob6.cpp
	g++ -g -Wall -c hw2prob6.cpp
clean:
	rm *.o hw2prob1 hw2prob5 hw2prob6