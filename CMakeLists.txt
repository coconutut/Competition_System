cmake_minimum_required(VERSION 3.10)

project(competition_system)

include_directories(include)

aux_source_directory(src SOURCES)
add_executable(main ${SOURCES})