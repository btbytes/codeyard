all: basen base64c

base64c: base64c.cpp
	g++ -Wc++11-extensions -std=c++17 base64c.cpp -o base64c

basen: basen.cpp
	g++ -Wc++11-extensions -std=c++17 basen.cpp -o basen


.PHONY:
clean:
	rm -f basen
	rm -f base64c
