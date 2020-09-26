poleBalancing_RL.exe		: 	poleBalancing_RL.o cartpole.o getbox.o 
	g++ -Wl,-s -o poleBalancing_RL.exe poleBalancing_RL.o cartpole.o getbox.o  
			
poleBalancing_RL.o		:	poleBalancing_RL.cpp cartpole.h getbox.h
	g++ -c -fpermissive -fconserve-space poleBalancing_RL.cpp
	
cartpole.o		:	 cartpole.cpp cartpole.h 
	g++ -c -fpermissive -fconserve-space cartpole.cpp

getbox.o		:	 getbox.cpp getbox.h 
	g++ -c -fpermissive -fconserve-space getbox.cpp
