typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c466de8 S_L8c466de8;
typedef struct S_L8c466de8_4 S_L8c466de8_4;
typedef struct S_L8c466de8_8 S_L8c466de8_8;
typedef struct S_g8c466de8 S_g8c466de8;
typedef struct Object Object;
struct S_g8c466de8 {
    char unknown0[0x4];
    short f04;
};
struct S_L8c466de8 {
    S_g8c466de8 *f00;
    S_L8c466de8_4 *f04;
    S_L8c466de8_8 *f08;
};
struct S_L8c466de8_4 {
    char unknown0[0x4];
    short f04;
};
struct S_L8c466de8_8 {
    char unknown0[0x4];
    short f04;
};
struct Object {
    char unknown0[0x34];
    int f34;
};
extern int g_8c466df4;
extern S_L8c466de8 g_8c466de8;
extern void call_8c0e9aac(int);
extern void call_8c01c1a4(int);
extern void call_8c0400b0(void);
void operation_8c040034(Object *o)
{
    if ((&g_8c466de8)->f00 != 0) {
        (&g_8c466de8)->f00->f04 |= 1;
        (&g_8c466de8)->f00 = 0;
    }
    if ((&g_8c466de8)->f04 != 0) {
        (&g_8c466de8)->f04->f04 |= 1;
        (&g_8c466de8)->f04 = (S_L8c466de8_4 *)0;
    }
    if ((&g_8c466de8)->f08 != 0) {
        (&g_8c466de8)->f08->f04 |= 1;
        (&g_8c466de8)->f08 = (S_L8c466de8_8 *)0;
    }
    if (g_8c466df4 > (o->f34 * 0x50)) {
        g_8c466df4 = 0;
        call_8c0e9aac(0);
        call_8c01c1a4(6);
        return;
    }
    call_8c0400b0();
}
