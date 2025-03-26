CC = g++



SCR = hw06.cpp menu.cpp poplist.cpp addrec.cpp delrec.cpp showrec.cpp showrecs.cpp saveexit.cpp 
OBJ = $(SCR:.cpp=.o)

hw06:$(OBJ)
	$(CC) $(OBJ) -o hw06
%.o:%.cpp
	$(CC) -c $< -o $@


clean:
	rm -f $(OBJ)

