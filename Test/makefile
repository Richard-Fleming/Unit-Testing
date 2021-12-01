BUILD_DIR	:= ./bin
SRC_DIR		:= ./src

OUTPUT_NAME	:= "Testing"
COMP_FILES	:= ${SRC_DIR}/MainlineTest.cpp ${SRC_DIR}/Tests.cpp ../Production/src/Lottery.cpp

INCLUDE		:= "C:/msys64/mingw64/include/cppunit"
LIB			:= "C:/msys64/mingw64/lib" 

MSG_START	:= "Build Started"
MSG_END		:= "Build Complete"
MSG_CLEAN	:= "Cleaning up"

all			:= build

build:
	@echo ${MSG_START}

	#remove directory if it exists
	rm -rf ${BUILD_DIR} || true

	#create bin directory
	mkdir ${BUILD_DIR}

	g++ -o ${BUILD_DIR}/${OUTPUT_NAME} ${COMP_FILES} -I${INCLUDE} -L${LIB} "-lcppunit"
	@echo ${MSG_END}