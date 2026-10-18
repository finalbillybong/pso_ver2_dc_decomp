typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    short f30c;
    char unknown30e[0x26];
    int f334;
    char unknown338[0x20];
    unsigned short f358;
    char unknown35a[0x2];
    int f35c;
    float f360;
    float f364;
    char unknown368[0x4];
    int f36c;
    int f370;
};
extern void operation_8c05426c(void *, int, int);
extern void call_8c027090(Object *);
void operation_8c14de34(Object *o)
{
    float v3;
    float v4;
    operation_8c05426c((void *)o, 0, 1);
    if (o->f35c == 1) {
        call_8c027090(o);
    }
    switch (o->f30c) {
    case 0:
    case 1:
        o->f30c = 2;
    case 2:
        *(int *)((char *)o + 0x370) -= 1;
        if (o->f370 >= 0) {
            return;
        }
        o->f30c = 3;
        o->f370 = (int)(o->f36c);
        return;
    case 3:
        v3 = (float)o->f364;
        if (v3 > 0.0f) {
            o->f364 = v3 - 1.0f;
            return;
        }
        o->f30c = 4;
        o->f364 = 0.0f;
        return;
    case 4:
        v4 = (float)o->f360;
        if (v4 > 0.0f) {
            o->f360 = v4 - 1.0f;
            return;
        }
        o->f30a = 0;
        o->f30c = 0;
        o->f360 = 0.0f;
        o->f358 = 0xffff;
        o->f334 = 0;
        return;
    }
}
