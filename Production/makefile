BUILD_DIR	:= ./bin
SRC_DIR		:= ./src

OUTPUT_NAME	:= "Production"
COMP_FILES	:= ${SRC_DIR}/Mainline.cpp ${SRC_DIR}/Lottery.cpp

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

	g++ -o ${BUILD_DIR}/${OUTPUT_NAME} ${COMP_FILES}
	@echo ${MSG_END}