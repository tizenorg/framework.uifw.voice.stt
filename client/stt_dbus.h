/*
* Copyright (c) 2011 Samsung Electronics Co., Ltd All Rights Reserved 
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*  http://www.apache.org/licenses/LICENSE-2.0
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*/

 
#ifndef __STT_DBUS_H_
#define __STT_DBUS_H_

#include "stt.h"
#include "stt_main.h"

#ifdef __cplusplus
extern "C" {
#endif

int stt_dbus_open_connection();

int stt_dbus_close_connection();


int stt_dbus_request_hello();

int stt_dbus_request_initialize(int uid, bool* silence_supported, bool* profanity_supported, bool* punctuation_supported);

int stt_dbus_request_finalize(int uid);

int stt_dbus_request_get_support_langs(int uid, stt_h stt, stt_supported_language_cb callback, void* user_data);

int stt_dbus_request_get_default_lang(int uid, char** language);

int stt_dbus_request_get_audio_volume(int uid, float* volume); 

int stt_dbus_request_is_partial_result_supported(int uid, bool* partial_result);

int stt_dbus_request_start(int uid, const char* lang, const char* type, int profanity, int punctuation, int silence);

int stt_dbus_request_stop(int uid);

int stt_dbus_request_cancel(int uid);


#ifdef __cplusplus
}
#endif

#endif /* __STT_DBUS_H_ */
