CC = c++
LINKFLAGS = -framework OpenGL -framework GLUT

glstat : main.cpp
	$(CC) $(LINKFLAGS) main.cpp -o glstat