#ifndef __HISI_AUDIO_CODEC_COMMON_H__
#define __HISI_AUDIO_CODEC_COMMON_H__

#include "hi_type.h"
#include "hi_audio_codec.h"
#include "securec.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* __cplusplus */

#define HA_CHECK_MEM_SUCCESS(api)\
do {\
    errno_t _ret_mem_ = (api); \
    if(EOK != _ret_mem_) { \
        HA_ERR_PRINT("%s[%d]:%s failed(0x%x)\n", __FUNCTION__, __LINE__, #api, _ret_mem_); \
    } \
} while(0)

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __HISI_AUDIO_CODEC_COMMON_H__ */
