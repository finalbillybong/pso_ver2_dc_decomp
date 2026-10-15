typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_g8c4dbde0 *g_8c4dbde0;
extern S_L8c41cba0 g_8c41cba0;
extern int current_effect_mode(void);
extern int operation_8c2097a8(int);
extern int operation_8c20985c(void);
extern void call_8c20978c(int, int);
void operation_8c0dd670(Object *o)
{
    int v1;
    int v2;
    int t1;
    int t2;
    int t3;
    t1 = current_effect_mode();
    if (t1 != 0xf || ((o->f20 & 1)) != 0 || ((o->f20 & 2)) != 0) {
        return;
    }
    if (((g_8c4dbde0->f20 & 1)) == 0) {
        t2 = operation_8c2097a8(2);
        if (t2 != 0) {
            v1 = (int)0x20000;
        } else {
            v1 = (int)0x10000;
        }
        if ((((&g_8c41cba0)->f28 & v1)) != 0) {
            t3 = operation_8c20985c();
            v2 = (int)(t3 + 1);
            if ((t3 + 1) >= 5) {
                v2 = (int)0;
            }
            call_8c20978c((int)(v2 << 0xd), -0xe001);
        }
    }
}
