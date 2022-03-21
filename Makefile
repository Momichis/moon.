moon2.exe : src/* src/game-misc/* src/disp/* src/titlescreens/* src/misc/* src/snake/*
	x86_64-w64-mingw32-gcc src/*.c src/game-misc/*.c src/disp/*.c src/misc/*.c src/titlescreens/*.c src/snake/*.c -lwinmm -o moon.exe
