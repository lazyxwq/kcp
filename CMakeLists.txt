CMAKE_MINIMUM_REQUIRED ( VERSION 2.6 ) #cmake最小版本号
MESSAGE ( STATUS, "cmake version must > 2.6", ${PROJECT_BINARY_DIR} ) #输出提示信息
SET ( SER_SRC_LIST server.c ) #设置源文件列表
SET ( LIBIKCP_SRC ikcp.c )  #设置自定义变量LIBIKCP_SRC
#ADD_LIBRARY ( ikcp SHARED ${LIBIKCP_SRC} )  #添加生成动态库方法
ADD_LIBRARY ( ikcp STATIC ${LIBIKCP_SRC} ) #添加生成静态库方法
LINK_LIBRARIES ( ikcp)
ADD_EXECUTABLE ( server ${SER_SRC_LIST} ) #添加生成执行文件方法

SET (CLI_SRC_LIST client.c )
LINK_LIBRARIES ( ikcp )
ADD_EXECUTABLE (client ${CLI_SRC_LIST} )

SET (TEST_SRC_LIST test.cpp )
LINK_LIBRARIES ( ikcp )
ADD_EXECUTABLE ( test ${TEST_SRC_LIST} )
