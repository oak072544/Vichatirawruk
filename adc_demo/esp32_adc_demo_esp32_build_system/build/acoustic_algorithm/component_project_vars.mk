# Automatically generated build file. Do not edit.
COMPONENT_INCLUDES += $(IDF_PATH)/AdditionalComponents/esp-sr/acoustic_algorithm/include
COMPONENT_LDFLAGS += -L$(BUILD_DIR_BASE)/acoustic_algorithm -lacoustic_algorithm -L$(IDF_PATH)/AdditionalComponents/esp-sr/acoustic_algorithm/ -lesp_audio_processor
COMPONENT_LINKER_DEPS += 
COMPONENT_SUBMODULES += 
COMPONENT_LIBRARIES += acoustic_algorithm
COMPONENT_LDFRAGMENTS += 
component-acoustic_algorithm-build: 
