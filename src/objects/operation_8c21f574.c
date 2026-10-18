typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_s54 Arg0_s54;
struct Object {
    char unknown0[0x54];
    char f54;
};
struct Arg0_s54 {
    char unknown0[0x1];
    char f01;
    char f02;
    char f03;
};
extern void call_8c388984(void *, void *, int);
void operation_8c21f574(Object *o, int a1)
{
    char *p;
    char *q;
    if (0xb > a1) {
        p = (char *)o + (a1 << 2) + 0x28;
        call_8c388984((void *)p, (void *)(p + 4), (int)((unsigned int)0xb - a1 << 2 >> 2));
    }
    q = (char *)o + 0x54;
    q[0] = -1;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;
}
