all: all.out 
all.out : Game.o GameCalculations.o GameDbTest.o 
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
GameDbTest.o : GameDbTest.cpp GameCalculations.h Game.h 
	g++ $< -c
GameCalculations.o : GameCalculations.cpp Game.h
	g++ $< -c    
Game.o : Game.cpp Game.h
	g++ $< -c
clean:
	rm -rf *.o *.out
