Main.exe		: 	Main.o  transform.o DstarLite.o LPAstar.o gridworld.o graphics.o 
	g++ -Wl,-s -o Main.exe Main.o transform.o DstarLite.o LPAstar.o gridworld.o graphics.o -l gdi32 
			
Main.o		:	Main.cpp graphics.h transform.h DstarLite.h LPAstar.h gridworld.h globalvariables.h
	g++ -c -std=c++11 -O2  -fpermissive -fconserve-space -Wno-write-strings  Main.cpp
	
transform.o		:	 transform.cpp transform.h
	g++ -c -std=c++11 -O2  -fpermissive -fconserve-space -Wno-write-strings  transform.cpp	
	
DstarLite.o	:	 DstarLite.cpp DstarLite.h
	g++ -c -std=c++11 -O2  -fpermissive -fconserve-space -Wno-write-strings  DstarLite.cpp

LPAstar.o	:	 LPAstar.cpp LPAstar.h
	g++ -c -std=c++11 -O2  -fpermissive -fconserve-space -Wno-write-strings  LPAstar.cpp

gridworld.o	:	 gridworld.cpp gridworld.h
	g++ -c -std=c++11 -O2  -fpermissive -fconserve-space -Wno-write-strings  gridworld.cpp

graphics.o		:	 graphics.cpp graphics.h
	g++ -c -std=c++11 -O2  -fpermissive -fconserve-space -Wno-write-strings  graphics.cpp
	
clean:
	del *.o
	del *.exe
