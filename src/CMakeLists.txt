set(SOURCE_FILES
  CMakeLists.txt
  main.cpp
  )


#add_library(curve SHARED ${SOURCE_FILES})
add_executable(curveture main.cpp)

find_library(SDL2 SDL2_image)
target_link_libraries(curveture SDL2 SDL2_image)
