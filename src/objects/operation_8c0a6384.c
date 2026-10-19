typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0a2040 S_c8c0a2040;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
struct S_c8c0a2040 {
    char unknown0[0x8];
    int f08;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    int f3c;
};
struct S_g8c46ee80 {
    char unknown0[0xac];
    int fac;
};
extern S_g8c46ee80 *g_8c46ee80;
extern S_c8c0a2040 *call_8c0a2040(int);
void operation_8c0a6384(Object *o, int a1)
{
    int v41;
    S_c8c0a2040 *t1;
    if (a1 == 1) {
        v41 = (int)g_8c46ee80;
        if (v41 != 0) {
            t1 = call_8c0a2040(v41);
            if (t1->f08 == 1) {
                o->f3c &= -5;
                return;
            }
            if (g_8c46ee80 != 0) {
                o->f34 = (int)(g_8c46ee80->fac);
            }
        }
    }
}
