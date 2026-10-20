typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x62];
    Arg0_84 *f84;
};
struct Arg0_84 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    char f00;
    char unknown1[0x3];
};
struct S_vv2 {
    char f00;
};
extern S_g8c46ed0c *g_8c46ed0c;
extern void call_8c05406c(Object *, Frame *);
static inline int get_entry(Object *o, SBlock4 *out)
{
    if (o->f84 == 0) {
        return 0;
    }
    if (o->f84->f04 < 0 || o->f84->f04 > 0xb9f) {
        return 0;
    }
    *out = *(SBlock4 *)((char *)g_8c46ed0c + (o->f84->f04 << 2));
    return 1;
}
static inline void set_entry(Object *o, SBlock4 *in)
{
    if (o->f84 != 0 && o->f84->f04 >= 0 && !(o->f84->f04 > 0xb9f)) {
        *(SBlock4 *)((char *)g_8c46ed0c + (o->f84->f04 << 2)) = *in;
    }
}
float operation_8c084f64(Object *o)
{
    Frame frame;
    if ((unsigned int)o->f20 >= (unsigned int)0x1000 && o->f84 != 0) {
        if (get_entry(o, (SBlock4 *)&frame)) {
            *(short *)&(&frame)->f00 = 1;
            set_entry(o, (SBlock4 *)&frame);
            call_8c05406c(o, (Frame *)((&frame)));
        }
    }
    return 0.0f;
}
