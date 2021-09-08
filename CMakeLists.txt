cmake_minimum_required(VERSION 3.15)
project(spellcheck C)

set(CMAKE_C_STANDARD 99)

add_executable(spellcheck spell.c spell.h spell_lib.c spell_lib.h)