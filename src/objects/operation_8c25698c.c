typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    int f24;
    int f28;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern float distance_xz(void *, void *);
extern float call_8c37f6c0(float);
extern int call_8c05fbf8(int, int, int, int);
extern void emit_control_60320(int, int, int);
void operation_8c25698c(Object *o)
{
    float v1;
    int v3;
    int v5;
    int v2;
    float v4;
    float v13;
    float v11;
    S_c8c021ef8 *t1;
    float t2;
    float t3;
    int t4;
    int t5;
    if (!(--o->f20 > 0)) {
        o->f04 |= 1;
        return;
    }
    if (!(0x5a >= o->f20) && !(--o->f24 > 0)) {
        v1 = (float)2250000.0f;
        v4 = (float)v1;
        v2 = (int)0x800;
        v3 = (int)0;
        while (4 > v3) {
            t1 = lookup_low_id(v3);
            if (t1 != 0) {
                v5 = (int)o->f28;
                if ((int)(t1) != v5 && ((t1->f34 & v2)) == 0) {
                    t2 = distance_xz((void *)(v5 + 0x3c), (void *)(((char *)t1 + 0x3c)));
                    v4 = t2 > v4 ? v4 : t2;
                }
            }
            v3 = (int)(v3 + 1);
        }
        t3 = call_8c37f6c0(v4);
        if (t3 > 200.0f) {
            v11 = call_8c37f6c0(v4);
        } else {
            v11 = 200.0f;
        }
        v13 = 1.0f;
        v13 = v13 - (v11 - 200.0f) * 0.00076923077f;
        t4 = call_8c05fbf8(0x20030, 0, 0, 0);
        emit_control_60320(t4, (int)((int)(v13 * 256.0f)), 0);
        o->f24 = (int)(v13 * -53.0f) + 0x3c;
    }
}
