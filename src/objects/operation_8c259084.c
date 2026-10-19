typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    short f20;
    short f22;
    Arg0_24 *f24;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c46ee80;
extern int operation_03d080(unsigned short);
extern int lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern void set_effect_bit0(void *);
extern void clear_effect_bit0(void *);
void operation_8c259084(Object *o)
{
    int v60;
    int t1;
    int t2;
    int t3;
    float t4;
    float t5;
    t1 = operation_03d080((unsigned short)(o->f20));
    if ((unsigned char)t1 == 1) {
        o->f04 |= 1;
        return;
    }
    t2 = operation_03d080((unsigned short)(o->f22));
    if ((unsigned char)t2 == 0) {
        o->f04 |= 1;
        return;
    }
    if (o->f24 != 0) {
        t3 = lookup_low_id((int)g_8c418248);
        if (t3 != 0) {
            v60 = (int)g_8c46ee80;
            if (v60 != 0) {
                t4 = squared_distance_xz((void *)(t3 + 0x3c), (void *)(v60 + 0x90));
                t5 = squared_distance_xz((void *)(((char *)o + 0x28)), (void *)(g_8c46ee80 + 0x90));
                if (t4 > (t5 * 2.0f)) {
                    set_effect_bit0((void *)(o->f24));
                    return;
                }
                clear_effect_bit0((void *)(o->f24));
            }
        }
    }
}
