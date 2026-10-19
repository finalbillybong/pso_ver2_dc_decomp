typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c286438 S_g8c286438;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x2aa];
    int f39c;
    int f3a0;
    int f3a4;
};
extern void call_8c05fbf8(void *, void *, int, int);
void operation_8c15fdd8(Object *o)
{
    o->f3a0 = 1;
    o->f3a4 = 1;
    call_8c05fbf8((void *)(*(S_g8c286438 **)((char *)0x8c286438 + (o->f39c << 2))), (void *)(((char *)o + 0x3c)), 0, 0);
    o->fe8 = (unsigned int)o->fe8 >> 1 << 1;
    o->ff0 = 5;
}
