
set(TARGET_NAME string_utils)

add_library(${TARGET_NAME}
  string_utils.cpp
  string_utils.h)

target_include_directories(${TARGET_NAME}
  INTERFACE ./)

install(TARGETS ${TARGET_NAME}
  ARCHIVE DESTINATION lib/)
