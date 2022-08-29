# Automatically generated build file. Do not edit.
COMPONENT_INCLUDES += $(IDF_PATH)/AdditionalComponents/esp-face/lib/include
COMPONENT_LDFLAGS += -L$(BUILD_DIR_BASE)/lib -llib -L$(IDF_PATH)/AdditionalComponents/esp-face/lib/ -ldl -lfd -lfr -lod
COMPONENT_LINKER_DEPS += 
COMPONENT_SUBMODULES += 
COMPONENT_LIBRARIES += lib
COMPONENT_LDFRAGMENTS += 
component-lib-build: 
