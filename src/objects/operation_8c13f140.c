typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    char f00;
    char f01;
    short f02;
    float f04;
    float f08;
};
struct S_L8c46efc8 {
    char unknown0[0x8];
    int f08;
};
struct Object {
    char unknown0[0x134];
    int f134;
};
extern S_L8c46efc8 g_8c46efc8;
extern int current_effect_mode(void);
extern void call_8c0a1a78(int);
extern void call_8c0a5400(Frame *, int);
extern void set_view_offsets(void *, void *, void *);
void operation_8c13f140(Object *o, int a1)
{
    Frame frame;
    int t1;
    (&frame)->f01 = a1;
    t1 = current_effect_mode();
    if (t1 == 0xe) {
        (&frame)->f00 = 1;
    } else {
        (&frame)->f00 = 0;
    }
    (&frame)->f02 = 0;
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = 1.0f;
    if ((((&g_8c46efc8)->f08 & 4)) == 0 && (((&g_8c46efc8)->f08 & 8)) == 0) {
    } else {
        call_8c0a1a78(2);
    }
    call_8c0a5400((Frame *)((&frame)), 0x4222);
    set_view_offsets((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x60)));
    o->f134 = 1;
}
