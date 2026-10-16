typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e2c24 S_L8c4e2c24;
typedef struct S_L8c4e2c24_4 S_L8c4e2c24_4;
typedef struct S_g8c4e2c24 S_g8c4e2c24;
typedef struct Object Object;
struct S_L8c4e2c24 {
    S_g8c4e2c24 *f00;
    S_L8c4e2c24_4 *f04;
};
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x58];
    int fe4;
    char unknowne8[0x1c];
    float f104;
    float f108;
    float f10c;
};
extern int g_8c418244;
extern int g_8c4e2c2c;
extern S_L8c4e2c24 g_8c4e2c24;
extern void call_8c0344f0(void *, int, int, int);
void operation_8c1bfd3c(Object *o)
{
    int v2;
    int v1;
    char *v8;
    v1 = (int)g_8c418244;
    v2 = (int)g_8c4e2c2c;
    if (v2 != v1) {
        g_8c4e2c2c = (int)(v1);
        call_8c0344f0((void *)((&g_8c4e2c24)->f00), 1, 0, 1);
        call_8c0344f0((void *)((&g_8c4e2c24)->f04), 1, 0, 1);
    }
    if (o->fe4 != 1) {
        if (o->fe4 == 2) {
            goto L_8c1bfdf2;
        }
        if (o->fe4 == 3) {
            goto L_8c1bfe16;
        }
        o->f10c += 1.0f;
        if (60.0f > o->f10c) {
            return;
        }
        o->fe4 = 1;
        o->f10c = 0.0f;
        o->f88 += 1;
        v8 = (char *)o->f88;
        if (!((int)(v8) >= 4)) {
            return;
        }
        o->f88 = 0;
        return;
    }
    o->f104 += 0.666666687f;
    o->f108 += 0.0666666701f;
    if (!(10.0f > o->f104)) {
        o->fe4 = 2;
        o->f104 = 10.0f;
        o->f108 = 1.0f;
        return;
L_8c1bfdf2:;
        o->f10c += 1.0f;
        if (!(300.0f > o->f10c)) {
            o->fe4 = 3;
            o->f10c = 0.0f;
            return;
L_8c1bfe16:;
            o->f104 -= 0.666666687f;
            o->f108 -= 0.0666666701f;
            if (!(o->f104 > 0.0f)) {
                o->fe4 = 0;
                o->f108 = 0.0f;
                o->f104 = 0.0f;
            }
        }
    }
}
