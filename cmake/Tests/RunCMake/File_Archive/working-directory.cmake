set(OUTPUT_NAME "test.zip")

set(ARCHIVE_FORMAT zip)

get_filename_component(CURRENT_FILE_NAME ${CMAKE_CURRENT_LIST_FILE} NAME_WE)
set(CUSTOM_OUTPUT_DIRECTORY "${CURRENT_FILE_NAME}-build")

set(WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/../")

include(${CMAKE_CURRENT_LIST_DIR}/roundtrip.cmake)

check_magic("504b0304" LIMIT 4 HEX)