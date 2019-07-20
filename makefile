



CXX = g++
CXXFLAGS = -std=c++0x
//CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
LDFLAGS = -lboost_date_time

OBJS = main

SRCS = main.cpp Zoo.cpp Concessions.cpp Monkeys.cpp FrontGate.cpp Apes.cpp Giraffes.cpp Elephants.cpp Birds.cpp Player.cpp

HEADERS = Zoo.hpp  Concessions.hpp Monkeys.hpp FrontGate.hpp Apes.hpp Giraffes.hpp Elephants.hpp Birds.hpp Player.hpp


#target:  dependencies
#	rule to build
#	




main:  $(SRCS) $(HEADERS)
	${CXX} ${CXXFLAGS} main.cpp Zoo.cpp Concessions.cpp Monkeys.cpp FrontGate.cpp Apes.cpp Birds.cpp Giraffes.cpp Elephants.cpp Player.cpp -o main

clean: 
	rm ${OBJS}
