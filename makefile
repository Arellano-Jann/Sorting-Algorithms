HDIR = headers# directories/folders
CDIR = src
ODIR = objs
CPPFLAGS = -std=c++11 -g# flags
DEPS = $(wildcard $(HDIR)/*.h)
OBJ_FILES = main.o Grapher.o NumberGenerator.o# put all dependencies for driver here
OBJS = $(patsubst %.o, $(ODIR)/%.o, $(OBJ_FILES))# replaces everything in source ending in arg1 with arg2
vpath %.h headers# basically a search function
vpath %.cpp src
vpath %.o objs
DIRS = $(HDIR) $(CDIR) $(ODIR)
$(shell mkdir -p $(DIRS))# makes all directories if it's not there

$(ODIR)/%.o: %.cpp $(DEPS)
    g++ $(CPPFLAGS) -c $< -o $@

main: $(OBJS)
    g++ $(CPPFLAGS) -o $@ $^

clean:
    rm $(ODIR)/*.o main

.PHONY: clean all