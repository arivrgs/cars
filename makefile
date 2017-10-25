car-test:	Car.h CarTest.cpp
	g++ -o CarTest Car.cpp CarTest.cpp -I
	./CarTest && rm CarTest Car.h.gch
