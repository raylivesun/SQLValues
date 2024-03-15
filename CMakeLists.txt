cmake_minimum_required(VERSION 3.28)
project(SQLValues)

set(CMAKE_CXX_STANDARD 17)

add_executable(SQLValues main.cpp
        Values/bellow.cpp
        Values/bellow.h
        Values/called.cpp
        Values/called.h
        Values/vectors.cpp
        Values/vectors.h
        Values/examples.cpp
        Values/examples.h
        Values/matrix.cpp
        Values/matrix.h
        Values/list.cpp
        Values/list.h
        Values/freed.cpp
        Values/freed.h
        Values/size.cpp
        Values/size.h
        Values/develop.cpp
        Values/develop.h
        Values/location.cpp
        Values/location.h
        Values/every.cpp
        Values/every.h
        Values/goodmemory.cpp
        Values/goodmemory.h
        Values/shared.cpp
        Values/shared.h
        Values/blocks.cpp
        Values/blocks.h
        Values/both.cpp
        Values/both.h
        Values/simples.cpp
        Values/simples.h
        Values/exam.cpp
        Values/exam.h
        Values/effects.cpp
        Values/effects.h
        Values/backme.cpp
        Values/backme.h
        Values/backend.cpp
        Values/backend.h
        Values/splits.cpp
        Values/splits.h)
