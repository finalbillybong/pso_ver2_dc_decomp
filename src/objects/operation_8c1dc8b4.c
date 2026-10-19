typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block128 {
    int words[32];
} Block128;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
typedef struct Block_p0_0 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x78];
} Block_p0_0;
typedef struct Block_vv3_0 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x71];
    char f79;
    char unknown7a[0x6];
} Block_vv3_0;
struct Object {
    Block_p0_0 tag;
};
struct S_vv3 {
    Block_vv3_0 f00;
};
extern int g_8c4db9e8;
extern int call_8c1dc920(Object *);
int operation_8c1dc8b4(Object *o)
{
    int v2;
    S_vv3 *v3;
    int v1;
    int t1;
    t1 = call_8c1dc920(o);
    if (t1 != 0) {
        return 0;
    }
    v1 = (int)o->tag.f04;
    v2 = (int)0;
    v3 = (S_vv3 *)(g_8c4db9e8 + 4);
    while (0x64 > v2) {
        if (((v3->f00.f79 & 1)) == 0) {
            return 0;
        }
        if (v1 == v3->f00.f04) {
            *(Block128 *)&v3->f00 = *(Block128 *)&o->tag;
            return 1;
        }
        v2 = (int)(v2 + 1);
        v3 = (S_vv3 *)((char *)v3 + 128);
    }
    return 0;
}
