CC=g++
SRC := $(MNIST_ML_ROOT)/KNN/src
CFLAGS := -std=c++11 -DEUCLID -g
INCLUDE_DIR := $(MNIST_ML_ROOT)/KNN/inc

all : main

main : $(SRC)/knn.cc
	$(CC) $(CFLAGS) $(SRC)/knn.cc -o main -L$(MNIST_ML_ROOT)/lib/ -I$(INCLUDE_DIR)\
	-I$(MNIST_ML_ROOT)/include -ldata 

clean:
	rm main