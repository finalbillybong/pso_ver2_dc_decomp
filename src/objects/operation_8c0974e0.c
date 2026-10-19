typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30];
    int f30;
    char unknown34[0x4];
    int f38;
    char unknown3c[0x14];
    float f50;
};
extern int g_8c46ec14;
extern int operation_8c09a640(int);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c0974e0(Object *o)
{
    float v3;
    int t1;
    o->f50 += 0.0133333337f;
    if (!(--o->f38 >= 0)) {
        o->f38 = 0;
    }
    if (g_8c46ec14 != 2 && o->f38 != 0) {
        goto L_8c097558;
    }
    v3 = (float)o->f50;
    if (0.8f > v3) {
        o->f50 = v3 + (0.8f - v3) * 0.25f;
    }
    if (o->f50 > 1.0f) {
        o->f50 = 1.0f;
    }
    t1 = operation_8c09a640(4);
    if (t1 != 0) {
        call_8c05fbf8(0x50001, 0, 0, 0);
        o->f38 = 7;
        o->f30 = 5;
        return;
L_8c097558:;
        if (o->f50 > 0.8f) {
            o->f50 = 0.8f;
        }
    }
}
