set(INCROOT ${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME})
set(SRCROOT ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME})

set(SRC
    ${SRCROOT}/Main.cpp

    ${INCROOT}/EditorWorld.hpp
    ${SRCROOT}/EditorWorld.cpp    
)

add_executable(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PRIVATE ${INCROOT})

target_link_libraries(${PROJECT_NAME} PRIVATE SparkEngine)