typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x60];
    int f60;
    char unknown64[0x8];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x10];
    int f88;
    int f8c;
    int f90;
    float f94;
    float f98;
    float f9c;
    int fa0;
    volatile unsigned short fa4;
    volatile unsigned short fa6;
    volatile unsigned short fa8;
    char unknownaa[0x1];
    unsigned char fab;
};
extern int g_8c4703c0;
void operation_8c258df8(Object *o)
{
    float v5;
    int v2;
    o->fab = o->f60;
    v5 = (float)o->f6c;
    o->f98 = v5 * v5;
    o->f9c = o->f70 * ((float)(g_8c4703c0 + 1) * 2.0f);
    o->f94 = o->f74;
    if ((unsigned int)o->fab >= (unsigned int)0x15) {
        o->fab = 0;
    }
    o->fa0 = 0;
    o->fa4 = o->f88;
    v2 = (int)0x100;
    if ((unsigned int)(unsigned short)v2 <= (unsigned int)(o->fa4 & 0xffff)) {
        o->fa4 = 0xffff;
    }
    o->fa6 = o->f8c;
    if ((unsigned int)(o->fa6 & 0xffff) >= (unsigned int)0x100) {
        o->fa6 = 0xffff;
    }
    o->fa8 = o->f90;
    if ((unsigned int)(o->fa8 & 0xffff) > (unsigned int)1) {
        o->fa8 = 1;
    }
}
