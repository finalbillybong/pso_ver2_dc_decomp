typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Block_p0_30 {
    float f00;
    float f04;
    float f08;
} Block_p0_30;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    float f24;
    char unknown28[0x4];
    float f2c;
    Block_p0_30 f30;
    Block_p0_3c f3c;
    char unknown48[0xc];
    float f54;
    int f58;
    int f5c;
    float f60;
    char unknown64[0xc];
    int f70;
};
extern int query_vector_position_normal(void *, void *, void *);
void operation_8c176958(Object *o)
{
    int t1;
    if (o->f58 != 0) {
        if (o->f58 == 1) {
            goto L_8c1769c2;
        }
    } else {
        o->f30.f00 += o->f24 * 4.0f;
        o->f30.f08 += o->f2c * 4.0f;
        o->f54 -= 0.1f;
        if (-4.0f > o->f54) {
            o->f54 = -4.0f;
        }
        o->f30.f04 += o->f54;
        goto L_8c1769ce;
L_8c1769c2:;
        o->f30.f04 -= 1.0f;
    }
L_8c1769ce:;
    *(Vector3 *)&o->f3c = *(Vector3 *)&o->f30;
    t1 = query_vector_position_normal((void *)(&o->f3c), (void *)(&o->f3c), (void *)(((char *)o + 0x48)));
    if (t1 != 0) {
        o->f70 |= 1;
        if (0.0f > o->f54 && 10.0f > (o->f30.f04 - o->f3c.f04)) {
            o->f70 |= 2;
            o->f54 = o->f54 * -0.8f;
        }
    }
    o->f5c += 1;
    if (o->f5c > 0x50) {
        o->f70 |= 2;
    }
    o->f60 -= 0.01f;
    if (!(o->f60 > 0.0f)) {
        o->f04 |= 1;
    }
}
