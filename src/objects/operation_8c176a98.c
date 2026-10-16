typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x4c];
    int f70;
};
struct Frame {
    Vector3 f00;
};
extern Vector3 g_8c319334;
extern int g_8c46f560;
extern int g_8c575570;
extern void operation_8c05b9f4(int, int, int, int);
extern void call_8c38c0f0(void *);
extern void call_8c38c0e6(int, int);
extern void call_8c37b566(int);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c1435d4(void *);
extern void call_8c38ad10(void);
void operation_8c176a98(Object *o)
{
    Frame frame;
    if (((o->f70 & 1)) != 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c319334;
        operation_8c05b9f4((int)(((char *)o + 0x3c)), (int)(((char *)o + 0x48)), 0, (int)(&frame));
    }
    g_8c46f560 = (int)(g_8c575570);
    if (((o->f70 & 2)) != 0) {
        g_8c575570 |= 0x8810;
        call_8c38c0f0((void *)(((char *)o + 0x60)));
        call_8c38c0e6(0xff00, 0x800);
        call_8c37b566(0x2500);
    }
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x30)));
    call_8c1435d4((void *)(o->f20));
    call_8c38ad10();
    g_8c575570 = (int)(g_8c46f560);
}
