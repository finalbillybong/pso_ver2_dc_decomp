typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e3040 S_g8c4e3040;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    unsigned char f2c;
};
extern S_g8c4e3040 *g_8c4e3040;
extern void call_8c380ab8(int, int);
extern void call_8c3827d8(void *);
extern void call_8c38aeb4(int);
extern void call_8c38af22(int, int);
extern void call_8c38b09e(void *, float);
extern void call_8c38af12(void);
void operation_8c1dda64(Object *o)
{
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 0xa);
    call_8c3827d8(g_8c4e3040);
    call_8c38aeb4(1);
    call_8c38af22(0, (int)(o->f2c << 0x18 | 0xffffff));
    call_8c38b09e((void *)(((char *)o + 0x30)), 0.1f);
    call_8c38af12();
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
}
