typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x74];
    int f74;
};
extern int g_8c418248;
extern int g_8c418258;
extern char g_8c339ca0[];
extern int operation_8c25062c(void);
extern int call_8c25069c(void);
extern void call_8c248850(Object *, int);
void operation_8c237dec(Object *o)
{
    int v1;
    int v4;
    int t1;
    int t2;
    if (g_8c418248 == g_8c418258) {
        v1 = (int)0;
        t1 = operation_8c25062c();
        v4 = (int)v1;
        if (t1 == 2) {
            t2 = call_8c25069c();
            v4 = (int)1;
            if (t2 >= 0) {
                if (0x33 > t2 || t2 >= 0x56) {
                    v4 = (int)0;
                    goto L_8c237e36;
                }
                if (0x3c > t2) {
                    v4 = (int)(t2 + -0x31);
                } else {
                    v4 = (int)(t2 + -0x31);
                }
            }
        }
L_8c237e36:;
        if (v4 == 0) {
            if (--o->f74 >= 0) {
                goto L_8c237e56;
            }
            o->f74 = 0;
        } else {
            o->f74 = 0x1e;
        }
L_8c237e56:;
        if (o->f74 > 0 && v4 == 0) {
            return;
        }
        if ((int)v4 != *(int *)(g_8c339ca0 + 0x4c)) {
            call_8c248850(o, v4);
        }
    }
}
