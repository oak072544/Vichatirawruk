# Automatically generated build file. Do not edit.
COMPONENT_INCLUDES += $(IDF_PATH)/AdditionalComponents/esp32-camera/driver/include $(IDF_PATH)/AdditionalComponents/esp32-camera/conversions/include
COMPONENT_LDFLAGS += -L$(BUILD_DIR_BASE)/esp32-camera -lesp32-camera
COMPONENT_LINKER_DEPS += 
COMPONENT_SUBMODULES += 
COMPONENT_LIBRARIES += esp32-camera
COMPONENT_LDFRAGMENTS += 
component-esp32-camera-build: 
