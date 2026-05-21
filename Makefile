GNU = g++
CLG = clang++
STD = -std=c++20
FLAG = -static -Wall -Wextra

#IGNORE Error:
.IGNORE: Season1 Season2 Season3 Season4 Season5 Season6
# .IGNORE: cleanLinux

#Compile all projects
all: Season1 Season2 Season3 Season4 Season5 Season6

# Season1
Season1: Season1.cpp
	$(GNU) $(STD) $(FLAG) Season1.cpp -o Season1_GNU
	$(CLG) $(STD) $(FLAG) Season1.cpp -o Season1_CLG
	./Season1_GNU
	./Season1_CLG

# Season2
Season2: Season2.cpp
	$(GNU) $(STD) $(FLAG) Season2.cpp -o Season2_GNU
	$(CLG) $(STD) $(FLAG) Season2.cpp -o Season2_CLG
	./Season2_GNU
	./Season2_CLG

# Season3
Season3: Season3.cpp
	$(GNU) $(STD) $(FLAG) Season3.cpp -o Season3_GNU
	$(CLG) $(STD) $(FLAG) Season3.cpp -o Season3_CLG
	./Season3_GNU
	./Season3_CLG

# Season4
Season4: Season4.cpp
	$(GNU) $(STD) $(FLAG) Season4.cpp -o Season4_GNU
	$(CLG) $(STD) $(FLAG) Season4.cpp -o Season4_CLG
	./Season4_GNU
	./Season4_CLG

# Season5
Season5: Season5.cpp
	$(GNU) $(STD) $(FLAG) Season5.cpp -o Season5_GNU
	$(CLG) $(STD) $(FLAG) Season5.cpp -o Season5_CLG
	./Season5_GNU
	./Season5_CLG

# Season6
Season6: Season6.cpp
	$(GNU) $(STD) $(FLAG) Season6.cpp -o Season6_GNU
	$(CLG) $(STD) $(FLAG) Season6.cpp -o Season6_CLG
	./Season6_GNU
	./Season6_CLG

cleanLinux:
#Updated Soon
# 	rm -r ./Season1.exe ./Season2.exe
# 	rm -r ./Season3.exe ./Season4.exe 
# 	rm -r ./Season5.exe ./Season6.exe

