typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fa68 S_g8c46fa68;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x26];
    Vector3 f2c;
    float f38;
    float f3c;
    char unknown40[0x4];
    int f44;
    int f48;
    char unknown4c[0x4];
    int f50;
};
struct S_g8c46fa68 {
    Vector3 f00;
};
void operation_8c0cd3e8(Object *o)
{
    if (o->f48 != 0) {
        if (o->f48 == 1) {
            goto L_8c0cd434;
        }
        if (o->f48 == 2) {
            goto L_8c0cd454;
        }
        return;
    }
    o->f38 += 4.0f;
    if (!(o->f3c > o->f38)) {
        o->f38 = o->f3c;
        o->f48 = 1;
    }
    *(Vector3 *)&o->f2c = *(Vector3 *)&(*(S_g8c46fa68 **)0x8c46fa68)->f00;
    return;
L_8c0cd434:;
    o->f44 += 1;
    if (o->f44 > o->f50) {
        o->f48 = 2;
        return;
L_8c0cd454:;
        o->f38 -= 0.5f;
        if (-32.0f > o->f38) {
            o->f04 |= 1;
        }
    }
}
