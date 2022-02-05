set(INCROOT ${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME})
set(SRCROOT ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME})

set(SRC
    ${SRCROOT}/Main.cpp

    ${INCROOT}/EditorWorld.hpp
    ${SRCROOT}/EditorWorld.cpp
    
    ${INCROOT}/TileMapEditorLevel.hpp
    ${SRCROOT}/TileMapEditorLevel.cpp
    ${INCROOT}/TileMapEditorCamera.hpp
    ${SRCROOT}/TileMapEditorCamera.cpp
)

add_executable(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PRIVATE ${INCROOT})

target_link_libraries(${PROJECT_NAME} PRIVATE SparkEngine)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
					COMMAND ${CMAKE_COMMAND} -E copy_directory
					${CMAKE_SOURCE_DIR}/assets $<TARGET_FILE_DIR:${PROJECT_NAME}>/assets)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
					COMMAND ${CMAKE_COMMAND} -E copy_directory
					${CMAKE_SOURCE_DIR}/assets ${CMAKE_SOURCE_DIR}/build/src/SparkEditor/assets)