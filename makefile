main: main.c
	gcc $< -o $@

.PHONY: run clean

run:
	./main

clean:
	rm main