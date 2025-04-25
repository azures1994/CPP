cmake_minimum_required(VERSION 3.5.0)
project(CPP VERSION 0.1.0 LANGUAGES C CXX)

set(Package_ROOT /data_ssd/qlh_ssd/QFile/QPackages/)
set(CMAKE_BUILD_TYPE Debug)
set(EXECUTABLE_OUTPUT_PATH ../bin/)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-elide-constructors") #! 优化类构造函数

set(spdlog_DIR ${Package_ROOT}/Linux/spdlog/spdlog-1.14.1/install_ubuntu2004/)
include_directories(${spdlog_DIR}/include/)
link_directories(${spdlog_DIR}/lib/)
set(spdlog_LIBS libspdlog.a)


include_directories(./src/)

aux_source_directory(./src/Least_Squares_Method/ SRC_LIST)
aux_source_directory(./src/ Demo_LIST)

set(LIB_LIST ${spdlog_LIBS})
set(SRC_LIST main.cpp  ${SRC_LIST} ${Demo_LIST})

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} ${LIB_LIST})

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
