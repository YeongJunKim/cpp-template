* How to g++ build
``` bash
$ g++ -o test1 main.cpp -I./ -D TEST1
$ g++ -o test2 main.cpp -I./ -D TEST2
```
* How to gcc build
``` bash
$ gcc -o test3 main.c -I./
```
* How to CMake build
``` bash
$ mkdir build
$ cd build
$ cmake ..
$ make
```
* read output binary file
``` bash
$ nm ${TARGET} | grep ${TEXT}
```