typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    float f3c;
    float f40;
    float f44;
    char unknown48[0xb0];
    float ff8;
    char unknownfc[0x2a8];
    int f3a4;
    char unknown3a8[0x14];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    char unknown3c8[0x34];
    int f3fc;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    Block_frame_c f0c;
};
struct S_vv4 {
    Vector3 f00;
};
extern float g_8c4d8364;
extern char g_8c4d8368;
extern char g_8c3109c8[];
extern void create_effect_777c(void *, int);
extern void create_effect_at_8c108394(void *, int);
extern void create_resource_effect_8c108170(void *, int);
void operation_8c11c71c(Object *o)
{
    Frame frame;
    S_vv4 *v4;
    *(int *)((char *)o + 0x3a4) -= 1;
    if (g_8c4d8368 == 0) {
        g_8c4d8364 = *(float *)(g_8c3109c8 + 0x48);
        g_8c4d8368 = 1;
    }
    if (!(21.0f > o->ff8) && o->ff8 < (g_8c4d8364 + 21.0f)) {
        v4 = (S_vv4 *)((char *)o + 0x324);
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&v4->f00;
        (&frame)->f0c.f04 += 5.0f;
        create_effect_777c((void *)(&(&frame)->f0c), 0xf0);
    }
    if (!(o->f3a4 > 0x78)) {
        if (o->f3a4 == 0x78) {
            (&frame)->f00 = o->f3c * 0.5f + o->f3bc * 0.5f;
            (&frame)->f04 = o->f40;
            (&frame)->f08 = o->f44 * 0.5f + o->f3c4 * 0.5f;
            create_effect_at_8c108394((void *)(&frame), 0x78);
            create_resource_effect_8c108170((void *)(&frame), 6);
        }
        if (o->f3a4 == 0x5a) {
            o->f3fc = 0;
        }
        o->f40 -= 0.104166664f;
        if (!(o->f3a4 > 0)) {
            o->f04 |= 1;
        }
    }
}
