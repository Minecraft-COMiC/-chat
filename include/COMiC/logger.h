#include <COMiC/env.h>

#ifndef COMiC_LOGGER_H
#define COMiC_LOGGER_H

#if COMiC_LIMITED
# pragma pack(push, 1)
#endif

typedef COMiC_uint32 COMiC_TextStyle;

#define COMiC_TextStyle_TEXT (0)

#define COMiC_TextStyle_MASK_FG ((COMiC_TextStyle)0x000000FFLL)
#define COMiC_TextStyle_MASK_BG ((COMiC_TextStyle)0x0000FF00LL)
#define COMiC_TextStyle_MASK_STYLE ((COMiC_TextStyle)0x7A000000LL)
#define COMiC_TextStyle_MASK_RESERVED ((COMiC_TextStyle)0x03FF0000LL)

#define COMiC_TextStyle_RESET (COMiC_TextStyle_REMOVE & COMiC_TextStyle_MASK_STYLE & COMiC_TextStyle_BG_DEFAULT & COMiC_TextStyle_FG_DEFAULT)

#define COMiC_TextStyle_REMOVE ((COMiC_TextStyle)0x80000000)

#define COMiC_TextStyle_UNDERLINE ((COMiC_TextStyle)0x40000000LL)
#define COMiC_TextStyle_STRIKED ((COMiC_TextStyle)0x20000000LL)
#define COMiC_TextStyle_BOLD ((COMiC_TextStyle)0x10000000LL)
#define COMiC_TextStyle_ITALIC ((COMiC_TextStyle)0x08000000LL)
#define COMiC_TextStyle_OBFUSCATED ((COMiC_TextStyle)0x04000000LL)

#define COMiC_TextStyle_FG_DEFAULT ((COMiC_TextStyle)0x00000001LL)
#define COMiC_TextStyle_BG_DEFAULT ((COMiC_TextStyle)0x00000100LL)

#define COMiC_TextStyle_FG_OK ((COMiC_TextStyle)0x00000002LL)
#define COMiC_TextStyle_FG_INFO ((COMiC_TextStyle)0x00000003LL)
#define COMiC_TextStyle_FG_WARN ((COMiC_TextStyle)0x00000004LL)
#define COMiC_TextStyle_FG_ERROR ((COMiC_TextStyle)0x00000005LL)
#define COMiC_TextStyle_FG_FATALERROR ((COMiC_TextStyle)0x00000006LL)
#define COMiC_TextStyle_FG_REVERSED ((COMiC_TextStyle)0x00000007LL)

#define COMiC_TextStyle_BG_OK ((COMiC_TextStyle)0x00000200LL)
#define COMiC_TextStyle_BG_INFO ((COMiC_TextStyle)0x00000300LL)
#define COMiC_TextStyle_BG_WARN ((COMiC_TextStyle)0x00000400LL)
#define COMiC_TextStyle_BG_ERROR ((COMiC_TextStyle)0x00000500LL)
#define COMiC_TextStyle_BG_FATALERROR ((COMiC_TextStyle)0x00000600LL)
#define COMiC_TextStyle_BG_REVERSED ((COMiC_TextStyle)0x00000700LL)

#define COMiC_TextStyle_FG_MC_BLACK ((COMiC_TextStyle)0x000000FELL)
#define COMiC_TextStyle_FG_MC_DARKBLUE ((COMiC_TextStyle)0x000000FDLL)
#define COMiC_TextStyle_FG_MC_DARKGREEN ((COMiC_TextStyle)0x000000FCLL)
#define COMiC_TextStyle_FG_MC_DARKAQUA ((COMiC_TextStyle)0x000000FBLL)
#define COMiC_TextStyle_FG_MC_DARKRED ((COMiC_TextStyle)0x000000FALL)
#define COMiC_TextStyle_FG_MC_DARKPURPLE ((COMiC_TextStyle)0x000000F9LL)
#define COMiC_TextStyle_FG_MC_GOLD ((COMiC_TextStyle)0x000000F8LL)
#define COMiC_TextStyle_FG_MC_GRAY ((COMiC_TextStyle)0x000000F7LL)
#define COMiC_TextStyle_FG_MC_DARKGRAY ((COMiC_TextStyle)0x000000F6LL)
#define COMiC_TextStyle_FG_MC_BLUE ((COMiC_TextStyle)0x000000F5LL)
#define COMiC_TextStyle_FG_MC_GREEN ((COMiC_TextStyle)0x000000F4LL)
#define COMiC_TextStyle_FG_MC_AQUA ((COMiC_TextStyle)0x000000F3LL)
#define COMiC_TextStyle_FG_MC_RED ((COMiC_TextStyle)0x000000F2LL)
#define COMiC_TextStyle_FG_MC_LIGHTPURPLE ((COMiC_TextStyle)0x000000F1LL)
#define COMiC_TextStyle_FG_MC_YELLOW ((COMiC_TextStyle)0x000000F0LL)
#define COMiC_TextStyle_FG_MC_WHITE ((COMiC_TextStyle)0x000000EFLL)
#define COMiC_TextStyle_FG_MC_MINECOINGOLD ((COMiC_TextStyle)0x000000EELL)

#define COMiC_TextStyle_BG_MC_BLACK ((COMiC_TextStyle)0x0000FE00LL)
#define COMiC_TextStyle_BG_MC_DARKBLUE ((COMiC_TextStyle)0x0000FD00LL)
#define COMiC_TextStyle_BG_MC_DARKGREEN ((COMiC_TextStyle)0x0000FC00LL)
#define COMiC_TextStyle_BG_MC_DARKAQUA ((COMiC_TextStyle)0x0000FB00LL)
#define COMiC_TextStyle_BG_MC_DARKRED ((COMiC_TextStyle)0x0000FA00LL)
#define COMiC_TextStyle_BG_MC_DARKPURPLE ((COMiC_TextStyle)0x0000F900LL)
#define COMiC_TextStyle_BG_MC_GOLD ((COMiC_TextStyle)0x0000F800LL)
#define COMiC_TextStyle_BG_MC_GRAY ((COMiC_TextStyle)0x0000F700LL)
#define COMiC_TextStyle_BG_MC_DARKGRAY ((COMiC_TextStyle)0x0000F600LL)
#define COMiC_TextStyle_BG_MC_BLUE ((COMiC_TextStyle)0x0000F500LL)
#define COMiC_TextStyle_BG_MC_GREEN ((COMiC_TextStyle)0x0000F400LL)
#define COMiC_TextStyle_BG_MC_AQUA ((COMiC_TextStyle)0x0000F300LL)
#define COMiC_TextStyle_BG_MC_RED ((COMiC_TextStyle)0x0000F200LL)
#define COMiC_TextStyle_BG_MC_LIGHTPURPLE ((COMiC_TextStyle)0x0000F100LL)
#define COMiC_TextStyle_BG_MC_YELLOW ((COMiC_TextStyle)0x0000F000LL)
#define COMiC_TextStyle_BG_MC_WHITE ((COMiC_TextStyle)0x0000EF00LL)
#define COMiC_TextStyle_BG_MC_MINECOINGOLD ((COMiC_TextStyle)0x0000EE00LL)

typedef struct COMiC_Logger_BuilderCell
{
    COMiC_TextStyle type;
    const char *string;
    COMiC_uint8 bytes_per_char;

    void (*deallocator)(char *);
} COMiC_Logger_BuilderCell;

typedef struct COMiC_Logger_Builder COMiC_Logger_Builder;

typedef struct COMiC_Logger_BuilderBufferHead
{
    struct COMiC_Logger_BuilderBuffer *_prev;
    struct COMiC_Logger_BuilderBuffer *_next;
    COMiC_Logger_Builder *_owner;
    COMiC_usize filled;
    COMiC_usize max_size;
} COMiC_Logger_BuilderBufferHead, *COMiC_Logger_BuilderBuffer;

#define COMiC_Logger_Builder_START_BUFFER_SIZE (16)

struct COMiC_Logger_Builder
{
    COMiC_Instance *_owner;
    COMiC_Lock *queue_lock;
    COMiC_Logger_BuilderBuffer buffer;
    COMiC_Logger_BuilderBufferHead _buffer_head;
    COMiC_Logger_BuilderCell _buffer_array[COMiC_Logger_Builder_START_BUFFER_SIZE];
};

typedef struct COMiC_Logger_MessageCell
{
    COMiC_TextStyle style;
    const char *msg;
} COMiC_Logger_MessageCell;

typedef struct COMiC_Logger_MessageHead
{
    COMiC_Instance *_owner;
} COMiC_Logger_MessageHead, *COMiC_Logger_Message;

typedef struct COMiC_Logger
{
    COMiC_Instance *_owner;

} COMiC_Logger;

COMiC_success COMiC_Logger_Init(COMiC_Logger *storage);

void COMiC_Logger_Finalize(COMiC_Logger *storage);

#if COMiC_LIMITED
# pragma pop()
#endif

#endif /* COMiC_LOGGER_H */
