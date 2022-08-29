# Automatically generated build file. Do not edit.
COMPONENT_INCLUDES += $(IDF_PATH)/AdditionalComponents/esp-sr/wake_word_engine/include
COMPONENT_LDFLAGS += -L$(BUILD_DIR_BASE)/wake_word_engine -lwake_word_engine -L$(IDF_PATH)/AdditionalComponents/esp-sr/wake_word_engine/ -lhilexin_wn5
COMPONENT_LINKER_DEPS += 
COMPONENT_SUBMODULES += 
COMPONENT_LIBRARIES += wake_word_engine
COMPONENT_LDFRAGMENTS += 
component-wake_word_engine-build: 
