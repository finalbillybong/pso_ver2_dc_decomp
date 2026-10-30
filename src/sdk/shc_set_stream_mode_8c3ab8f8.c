/* SDK pool group 0x8c3ab8f8-0x8c3aba08 (Hitachi SHC): copy a stream
   description into the global state, then select the handler routines
   from its mode bits. */
typedef struct StreamDesc {
    int base;
    unsigned int length;
    short format;
    unsigned short flags;
} StreamDesc;

typedef struct StreamState {
    int base;
    char unknown4[8];
    float limit;
    unsigned int length;
    int position;
    int count;
} StreamState;

typedef void (*Handler)(void);

extern StreamState g_stream_8c575dc8;
extern unsigned short g_format_8c575e02;
extern unsigned short g_flags_8c575e00;
extern unsigned short g_extended_8c576140;
extern Handler g_handler_a_8c57678c;
extern Handler g_handler_b_8c576790;
extern Handler g_handler_c_8c576794;
extern Handler g_handler_d_8c576798;
extern Handler g_handler_e_8c57679c;

extern void handler_8c3af18a(void);
extern void handler_8c3af490(void);
extern void handler_8c3af360(void);
extern void handler_8c3af2aa(void);
extern void handler_8c3af3f4(void);
extern void handler_8c3af4a6(void);
extern void handler_8c3af49a(void);
extern void handler_8c3af4b2(void);
extern void handler_8c3af21a(void);
extern void handler_8c3af4c4(void);

void set_stream_mode_8c3ab8f8(StreamDesc *desc, float limit)
{
    if (desc != 0) {
        if (!((float)desc->length > limit)) return;
        g_flags_8c575e00 = desc->flags & 0xff3f;
        g_extended_8c576140 = (desc->flags & 0xc0) > 0;
        g_format_8c575e02 = desc->format;
        g_stream_8c575dc8.base = desc->base;
        g_stream_8c575dc8.length = desc->length;
    } else {
        g_flags_8c575e00 = 0;
        g_extended_8c576140 = 0;
        g_format_8c575e02 = 0;
    }
    g_stream_8c575dc8.limit = limit;
    g_stream_8c575dc8.position = 0;
    g_stream_8c575dc8.count = 0;
    if (g_format_8c575e02 & 1) g_handler_a_8c57678c = handler_8c3af18a;
    else g_handler_a_8c57678c = handler_8c3af490;
    if (g_format_8c575e02 & 2) {
        g_handler_e_8c57679c = handler_8c3af360;
        g_handler_b_8c576790 = handler_8c3af2aa;
    } else if (g_format_8c575e02 & 0x2000) {
        g_handler_c_8c576794 = handler_8c3af3f4;
    } else {
        g_handler_e_8c57679c = handler_8c3af4a6;
        g_handler_b_8c576790 = handler_8c3af49a;
        g_handler_c_8c576794 = handler_8c3af4b2;
    }
    if (g_format_8c575e02 & 4) g_handler_d_8c576798 = handler_8c3af21a;
    else g_handler_d_8c576798 = handler_8c3af4c4;
}
