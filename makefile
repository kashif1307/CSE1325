#Makefilefor

CXXFLAGS += --std=c++17

#link rule
main: main.cpp vehicle.cpp gas_vehicle.cpp electric_vehicle.cpp
	${CXX} ${CXXFLAGS} -o main main.cpp


clean:
	-rm -f *.o a.out main

