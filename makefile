CC=g++
FLAGS=-Iinclude -o build/window_kill
LIBS=-Lexternal_libs -limgui_docking -lraylib_imgui -lraylib -lm -DNO_FONT_AWESOME -lGL
SRC=src/main.cpp

window_kills:
	$(CC) $(SRC) $(FLAGS) $(LIBS) 