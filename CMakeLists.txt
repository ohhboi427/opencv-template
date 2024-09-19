cmake_minimum_required(VERSION 3.12)

project(opencv_template)

find_package(OpenCV CONFIG REQUIRED)

file(GLOB_RECURSE OPENCV_TEMPLATE_SOURCES CMAKE_CONFIGURE_DEPENDS
	"src/*.cpp"
	"src/*.hpp"
)
add_executable(opencv_template ${OPENCV_TEMPLATE_SOURCES})

target_link_libraries(opencv_template PRIVATE
	${OpenCV_LIBS}
)

target_include_directories(opencv_template PRIVATE
	"src"
)

set_target_properties(opencv_template PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED TRUE
)
