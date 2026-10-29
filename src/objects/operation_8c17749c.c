typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
    int f2c;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
};
extern S_L8c41cba0 g_8c41cba0;
void operation_8c17749c(Object *o)
{
    int v33;
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 0x20000)) != 0) {
        o->f40 -= 1;
        if (!(o->f40 >= 0)) {
            o->f40 = (int)(o->f44);
        }
        o->f3c = o->f40 * 0x4b;
    }
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 0x10000)) != 0) {
        o->f40 += 1;
        if (o->f40 > o->f44) {
            o->f40 = 0;
        }
        o->f3c = o->f40 * 0x4b;
    }
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 0x10)) != 0) {
        o->f48 -= 1;
    }
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 0x20)) != 0) {
        o->f48 += 1;
    }
    if (((*(int *)((char *)&g_8c41cba0.f20 + (o->f34 * 0x3c)) & 0x10)) != 0 && ++o->f50 > 0xf) {
        o->f48 -= 1;
    }
    if (((*(int *)((char *)&g_8c41cba0.f20 + (o->f34 * 0x3c)) & 0x20)) != 0 && ++o->f50 > 0xf) {
        o->f48 += 1;
    }
    if (((*(int *)((char *)&g_8c41cba0.f2c + (o->f34 * 0x3c)) & 0x10)) == 0 && ((*(int *)((char *)&g_8c41cba0.f2c + (o->f34 * 0x3c)) & 0x20)) == 0) {
    } else {
        o->f50 = 0;
    }
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 0x40)) != 0) {
        o->f48 -= 0x19;
    }
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 0x80)) != 0) {
        o->f48 += 0x19;
    }
    v33 = (int)o->f4c;
    if (v33 != 0 && o->f40 == o->f44) {
        if (!(o->f48 >= 0)) {
            o->f48 = v33 + o->f48;
        }
        if (!((int)o->f4c + -1 < o->f48)) {
            return;
        }
        o->f48 -= o->f4c;
        return;
    }
    if (!(o->f48 >= 0)) {
        o->f48 += 0x4b;
    }
    if (o->f48 > 0x4a) {
        o->f48 -= 0x4b;
    }
}
