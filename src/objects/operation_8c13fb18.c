typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30];
    int f30;
    char unknown34[0x38];
    int f6c;
};
extern int g_8c4d9e5c;
void operation_8c13fb18(Object *o)
{
    int v3;
    if (g_8c4d9e5c < 0 || g_8c4d9e5c > 3) {
        v3 = (int)0;
        goto L_8c13fb4a;
    }
    if (o->f6c == 1) {
        v3 = (int)0;
    } else {
        if (g_8c4d9e5c >= 3) {
            v3 = (int)0;
        } else {
            g_8c4d9e5c += 1;
            o->f6c = 1;
            v3 = (int)1;
        }
    }
L_8c13fb4a:;
    if (v3 != 0) {
        o->f30 = 1;
    }
}
