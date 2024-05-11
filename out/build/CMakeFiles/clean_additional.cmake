# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Wallpaper_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Wallpaper_autogen.dir\\ParseCache.txt"
  "Wallpaper_autogen"
  )
endif()
