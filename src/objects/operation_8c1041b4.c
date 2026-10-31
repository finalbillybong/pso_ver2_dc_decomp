typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv6 S_vv6;
typedef struct S_vv8 S_vv8;
struct Object {
    char unknown0[0x30];
    float f30;
    int f34;
};
struct S_vv6 {
    char unknown0[0xc];
    int f0c;
};
struct S_vv8 {
    char unknown0[0xc];
    int f0c;
};
extern int g_8c4d5a88;
extern float call_8c12b570(float);
void operation_8c1041b4(Object *o)
{
    int *v8;
    S_vv6 *v6;
    int v9;
    int v4;
    int v7;
    v9 = (unsigned char)(unsigned int)call_8c12b570(o->f30 * 255.0f) << 24;
    v4 = o->f34;
    v6 = (S_vv6 *)((char *)o + 0x44);
    v8 = (int *)((v4 << 2) + (int)&g_8c4d5a88);
    for (; 0xc > v4; v4++) {
        v6->f0c = *v8 | v9;
        v6++;
    }
    v8 = &g_8c4d5a88;
    for (v7 = 0; v7 < o->f34; v7++) {
        v6->f0c = *v8 | v9;
        v6++;
    }
}
