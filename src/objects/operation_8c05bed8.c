typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x3a8];
    unsigned short f3a8;
    char unknown3aa[0x2];
    Arg1 *f3ac;
};
struct Arg1 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c467874;
void operation_8c05bed8(Object *o, Arg1 *a1)
{
    int v2;
    int pm1;
    int v1;
    o->f3a8 = 0xffff;
    v2 = 0;
    o->f3ac = (Arg1 *)0;
    v1 = (int)g_8c467874;
    while (v1 > v2) {
        if ((int)a1 == *(int *)((char *)0x8c467240 + (v2 << 2))) {
            o->f3a8 = a1->f20;
            o->f3ac = a1;
            return;
        }
        pm1 = v2 + 1;
        v2 = (pm1);
    }
}
