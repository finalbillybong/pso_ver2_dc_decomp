typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0d9e2c_sa0 S_c8c0d9e2c_sa0;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
struct Arg0_13c {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x396];
    int f3b8;
};
struct S_c8c0d9e2c_sa0 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c418248;
extern int find_entry_8c0d9e2c(int, int, int);
extern void operation_8c1ecfe0(short, short);
void operation_8c24dcec(Object *o)
{
    int v1;
    char *v79;
    int t1;
    short *v2;
    short v5;
    v1 = (int)(o->f13c->f20 == g_8c418248);
    if (v1 != 0) {
        v79 = (char *)o->f13c->f3b8;
        if (v79 != 0) {
            t1 = find_entry_8c0d9e2c((int)(v79), 4, 9);
            if (t1 != 0) {
                v2 = &((S_c8c0d9e2c_sa0 *)((char *)t1 + 0xa0))->f04;
                v5 = *v2;
                if ((unsigned short)v5 != 0xffff) {
                    operation_8c1ecfe0(o->f13c->f20, v5);
                }
            }
        }
    }
}
