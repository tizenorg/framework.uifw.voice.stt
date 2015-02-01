## configure pkgconfig files ##
CONFIGURE_FILE(stt.pc.in "${PROJECT_NAME}.pc" @ONLY)
CONFIGURE_FILE(stt-file.pc.in "${PROJECT_NAME}-file.pc" @ONLY)
CONFIGURE_FILE(stt-setting.pc.in "${PROJECT_NAME}-setting.pc" @ONLY)
CONFIGURE_FILE(stt-engine.pc.in "${PROJECT_NAME}-engine.pc" @ONLY)

## Install header, pc files ##
INSTALL(FILES "${CMAKE_BINARY_DIR}/include/${PROJECT_NAME}.pc" DESTINATION lib/pkgconfig)
INSTALL(FILES "${CMAKE_BINARY_DIR}/include/${PROJECT_NAME}-file.pc" DESTINATION lib/pkgconfig)
INSTALL(FILES "${CMAKE_BINARY_DIR}/include/${PROJECT_NAME}-setting.pc" DESTINATION lib/pkgconfig)
INSTALL(FILES "${CMAKE_BINARY_DIR}/include/${PROJECT_NAME}-engine.pc" DESTINATION lib/pkgconfig)
INSTALL(FILES "${CMAKE_BINARY_DIR}/include/stt.h" DESTINATION include)
INSTALL(FILES "${CMAKE_BINARY_DIR}/include/stt_file.h" DESTINATION include)
INSTALL(FILES "${CMAKE_BINARY_DIR}/include/stt_setting.h" DESTINATION include)
INSTALL(FILES "${CMAKE_BINARY_DIR}/server/sttp.h" DESTINATION include)
