typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_x38752 S_x38752;
typedef struct S_x58000 S_x58000;
struct Object {
    Vector3 tag;
};
struct S_x58000 {
    Vector3 f00;
};
struct Arg1 {
    Block16 f00;
};
struct S_x38752 {
    Block16 f00;
};
extern int g_8c4189dc;
extern char g_8c418280[];
extern char g_8c4182fc[];
void operation_8c013bd0(Object *o, Arg1 *a1, int a2)
{
    int v3;
    int v1;
    int v7;
    int v6;
    int v4;
    v1 = (int)g_8c4189dc;
    v3 = (int)0;
    v4 = (int)(void *)g_8c4182fc;
    while (v1 > v3) {
        v7 = (int)(v3 * 0x2c);
        v6 = *(int *)((char *)(v4 + 0x28) + v7);
        if (v6 == a2) {
            *(Vector3 *)&o->tag = *(Vector3 *)&((S_x58000 *)(v7 + v4))->f00;
            *(Block16 *)&a1->f00 = *(Block16 *)&((S_x38752 *)(v4 + 0xc + v7))->f00;
            return;
        }
        v3 = (int)(v3 + 1);
    }
    *(Block16 *)&a1->f00 = *(Block16 *)&*(Block16 *)(g_8c418280 + 0x24);
    {
        Vector3 *p_ = (Vector3 *)&*(Vector3 *)(g_8c418280 + 0xc);
        *(Vector3 *)&o->tag = *p_;
    }
}
