#include "src/include/emit.h"
#include "src/include/emit_listener.h"
/* Provisional names: calculate the slot's attenuation and pan, then optionally
 * forward the stored values to its handle. Preserve the -256 rejection sentinel
 * and ordered floating comparison used by the lower clamp (including NaN).
 */
extern unsigned char emit_slots[];
extern unsigned char emit_handles[];
#define listener ((unsigned char **)0x8c46ee80)
#define listener_position ((float *)0x8c46885c)
extern float distance_xz_at(void *,void *);
#define root_at ((float (*)(float))0x8c37f6c0)
#define angle_at ((float (*)(float,float))0x8c130334)
extern float direction_at(int);
#define gain_a ((int *)0x8c467a68)
#define gain_b ((int *)0x8c467a64)
#define handle_field_at ((void (*)(void *,int,int))0x8c345864)
#define handle_byte_at ((void (*)(void *,int,int))0x8c3456fc)
int prepare_emit_slot(int slot,int update)
{
    int offset = slot << 5;
    int attenuation, level, pan;
    float *position;
    if (*(unsigned int *)(emit_slots+offset)&0x2000) attenuation=0;
    else {
        { register unsigned char *base=emit_slots+8; position=*(float **)(base+offset); }
        if (!position) attenuation=0;
        else if (!*listener) attenuation=0;
        else {
            float d=distance_xz_at(position,listener_position);
            if (d<90000.0f) {
                float a=(root_at(d)-40.0f)/260.0f;
                a=a>0.0f?a:0.0f;
                attenuation=(int)(-(a*127.0f));
            } else attenuation=-256;
        }
    }
    if (attenuation==-256) {
        *(unsigned int *)(emit_slots+offset)|=0x100;
        return 0;
    }
    *(unsigned int *)(emit_slots+offset)&=~0x100;
    {
        register unsigned char *base = emit_slots + 20;
        level = *(int *)(base + offset) + attenuation;
    }
    { register unsigned char *base=emit_slots+4;
    if ((*(unsigned int *)(base+offset)&0xff0000)==0x50000) level+=*gain_a;
    else level+=*gain_b; }
    level=level < -127 ? -127 : (level < 127 ? level : 127);
    {
        register unsigned char *base = emit_slots + 24;
        *(int *)(base + offset) = level;
    }
    if (update) handle_field_at(*(void **)(emit_handles+(slot<<2)),level,0);
    { register unsigned char *base=emit_slots+8; position=*(float **)(base+offset); }
    pan=0;
    if (position && *listener) {
        int converted=(int)(angle_at(position[2]-*(float *)(*listener+EMIT_LISTENER_OFFSET(EmitListener, z)),position[0]-*(float *)(*listener+EMIT_LISTENER_OFFSET(EmitListener, x)))*65536.0f/6.283184051513671875f);
        pan=(int)(direction_at(converted+*(int *)(*listener+EMIT_LISTENER_OFFSET(EmitListener, angle))+0x4000)*127.0f);
    } else if (position && (*(unsigned int *)(emit_slots+offset)&0x800)) pan=(int)(position[0]*1.587499976158142f);
    {
        register unsigned char *base = emit_slots + 28;
        *(signed char *)(base + offset) = pan;
    }
    if (update) handle_byte_at(*(void **)(emit_handles+(slot<<2)),pan,0);
    return 1;
}
