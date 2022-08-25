# Automatically generated build file. Do not edit.
COMPONENT_INCLUDES += $(IDF_PATH)/AdditionalComponents/esp-sr/lib/include $(IDF_PATH)/AdditionalComponents/esp-sr/wake_word_engine/include $(IDF_PATH)/AdditionalComponents/esp-sr/acoustic_algorithm/include
COMPONENT_LDFLAGS += -L$(BUILD_DIR_BASE)/esp-sr -lesp-sr -L$(IDF_PATH)/AdditionalComponents/esp-sr/lib -L$(IDF_PATH)/AdditionalComponents/esp-sr/wake_word_engine -L$(IDF_PATH)/AdditionalComponents/esp-sr/acoustic_algorithm $(IDF_PATH)/AdditionalComponents/esp-sr/wake_word_engine/libhilexin_wn5.a $(IDF_PATH)/AdditionalComponents/esp-sr/lib/libc_speech_features.a $(IDF_PATH)/AdditionalComponents/esp-sr/lib/libdl_lib_sr.a $(IDF_PATH)/AdditionalComponents/esp-sr/lib/libwakenet.a $(IDF_PATH)/AdditionalComponents/esp-sr/acoustic_algorithm/libesp_audio_processor.a
COMPONENT_LINKER_DEPS += 
COMPONENT_SUBMODULES += 
COMPONENT_LIBRARIES += esp-sr
COMPONENT_LDFRAGMENTS += 
component-esp-sr-build: 
