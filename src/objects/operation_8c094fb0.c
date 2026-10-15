typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x370];
    float f370;
    char unknown374[0x70];
    int f3e4;
};
extern int call_8c05a0a8(void);
extern float call_8c12b570(float);
void operation_8c094fb0(Object *o)
{
    int t1;
    float t2;
    t1 = call_8c05a0a8();
    if (t1 != 0) {
        t2 = call_8c12b570(o->f370);
        if ((int)t2 == 0) {
            *(int *)((char *)o + 0x3e4) |= 0x100;
            o->f3e4 &= -0x201;
            return;
        }
        *(int *)((char *)o + 0x3e4) |= 0x200;
        o->f3e4 &= -0x101;
    }
}
