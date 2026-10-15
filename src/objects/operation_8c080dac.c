typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_fc Arg0_fc;
struct Object {
    char unknown0[0xe8];
    short fe8;
    char unknownea[0x2];
    int fec;
    float ff0;
    char unknownf4[0x8];
    Arg0_fc *ffc;
};
struct Arg0_fc {
    char unknown0[0x4];
    int f04;
};
extern int operation_03d080(unsigned short);
extern void operation_8c05428c(void *, int, int);
void operation_8c080dac(Object *o)
{
    float v3;
    int t1;
    o->ff0 += 0.9f;
    v3 = (float)(float)(unsigned int)(o->ffc->f04 + -1);
    if (o->ff0 > v3) {
        o->ff0 = 0.0f;
    }
    t1 = operation_03d080((unsigned short)(o->fe8));
    if ((unsigned char)t1 == 1) {
        operation_8c05428c((void *)o, 0, 1);
        o->fec = 1;
    }
}
