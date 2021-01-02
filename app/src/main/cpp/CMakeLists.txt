cmake_minimum_required(VERSION 3.10.2)

project("a0rbiantanniirantolojisi")

add_library(
             native
             SHARED
             native.cpp )

find_library(
              log-lib
              log )


target_link_libraries(
                       native
                       ${log-lib} )