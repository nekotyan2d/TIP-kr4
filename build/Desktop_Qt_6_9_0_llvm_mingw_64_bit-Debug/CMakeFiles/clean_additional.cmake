# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TIP-pr9_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TIP-pr9_autogen.dir\\ParseCache.txt"
  "TIP-pr9_autogen"
  )
endif()
