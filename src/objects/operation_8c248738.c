typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block160 {
    int words[40];
} Block160;
typedef struct Frame Frame;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x4];
    unsigned short f04;
    char unknown6[0x2];
    Block160 f08;
};
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    short f04;
    char unknown6[0x2];
    Block160 f08;
    char fa8;
    char fa9;
    char unknownaa[0x2];
    short fac;
    char unknownae[0x2];
    Block160 fb0;
};
struct S_g8c4db9e4 {
    char unknown0[0x11c4];
    Block160 f11c4;
};
struct S_vv4 {
    int f00;
    Block160 f04;
};
extern int g_8c418248;
extern S_g8c4db9e4 *g_8c4db9e4;
extern int g_8c510ba0;
extern char g_8c339ca0[];
extern void operation_8c0368a8(void *);
void handle_6x7C_set_challenge_records_8c248738(Object *o)
{
    Frame frame;
    int v1;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 != 0) {
        {
            Object *base = o;
            int v3;
            int v2;
            S_vv4 *v4;
            v2 = (int)g_8c418248;
            v3 = (int)base->f04;
            if (v3 != v2) {
                if (v3 == 0xffff) {
                    (&frame)->fa8 = 0x7c;
                    (&frame)->fa9 = 0x2a;
                    (&frame)->fac = v2;
                    *(Block160 *)&(&frame)->fb0 = *(Block160 *)&g_8c4db9e4->f11c4;
                    operation_8c0368a8((void *)(&(&frame)->fa8));
                    return;
                }
                if (v3 < 0 || v3 >= 4) {
                    return;
                }
                v4 = (S_vv4 *)(v3 * 0xa4 + g_8c339ca0 + 0x274);
                if (v4->f00 == 0) {
                    (&frame)->f00 = 0x7c;
                    (&frame)->f01 = 0x2a;
                    (&frame)->f04 = v2;
                    *(Block160 *)&(&frame)->f08 = *(Block160 *)&g_8c4db9e4->f11c4;
                    operation_8c0368a8((void *)(&frame));
                }
                v4->f00 = 1;
                *(Block160 *)&v4->f04 = *(Block160 *)&base->f08;
            }
        }
    }
}
