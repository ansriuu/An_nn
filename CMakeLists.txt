cmake_minimum_required(VERSION 3.5.2)


project(an_nn)


set(CMAKE_BUIILD_TYPE          Debug)
set(CMAKE_CXX_FLAGS            "${CMAKE_CXX_FLAGS} -std=c++14")


#main app 
add_executable(
	an_nn
	src/main.cpp
	src/neuron.cpp
	src/matrix.cpp
	src/neural_net.cpp
	src/layer.cpp
	src/utils/multiplyMatrix.cpp
	src/utils/matrixToVector.cpp
)
