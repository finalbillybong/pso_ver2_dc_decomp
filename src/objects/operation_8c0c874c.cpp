typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg0_s3f8;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x160];
    short f198;
    char unknown19a[0x196];
    short f330;
    char unknown332[0xb6];
    int f3e8;
    int f3ec;
    char unknown3f0[0x4];
    float f3f4;
    char unknown3f8[0x2c];
    int f424;
};
class Arg0_s3f8 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct Arg0_s3f8Data {

} Arg0_s3f8Data;
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c0c874c(Object *o, int a1)
{
    int *cnt;
    cnt = (int *)((char *)o + 0x424);
    switch (a1) {
    case 4:
        *cnt = 0;
        *(int *)((char *)o + 0x3e8) |= 0x204;
        o->f3e8 &= -9;
        ((Arg0_s3f8 *)((char *)o + 0x3f8))->v2();
        o->f3e8 |= 0x400;
        call_8c05fbf8(0x30015, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 3:
        if (((o->f3e8 & 8)) == 0) {
            return;
        }
        call_8c05fbf8(0x30016, (void *)(((char *)o + 0x3c)), 0, 0);
        operation_8c059ea4((void *)o, 1);
        return;
    case 0:
        *cnt += 1;
        if (!(*cnt >= 0x384)) {
            return;
        }
        if (((o->f3e8 & 0x10)) != 0) {
            return;
        }
        o->f3e8 &= -0x401;
        o->f3e8 &= -5;
        o->f3e8 |= 0x308;
        ((Arg0_s3f8 *)((char *)o + 0x3f8))->v3();
        return;
    case 5:
        o->f34 &= -0x801;
        o->f330 = o->f198;
        o->f3ec = 3;
        o->f3f4 = 0.0f;
    }
}
