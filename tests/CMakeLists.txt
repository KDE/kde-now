find_package(Qt5 REQUIRED COMPONENTS Test)

include_directories(
    ${CMAKE_BINARY_DIR}
    ${CMAKE_SOURCE_DIR}
)
set(kdenow_libraries
	kdenowcore
    Qt5::Test
)
ecm_add_test(main.cpp LINK_LIBRARIES ${kdenow_libraries})
