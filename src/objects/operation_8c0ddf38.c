typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
};
extern S_g8c46fe20 *g_8c46fe20;
extern int call_8c0de30c(int);
extern int lookup_low_id(int);
extern void call_8c225840(int, int);
extern int operation_8c0ddfd4(void *, int, int, int);
extern void operation_8c0df7d8(void *, int, int);
void operation_8c0ddf38(Object *o)
{
    int v87;
    int v2;
    char *v1;
    int v4;
    int v3;
    int t1;
    int t2;
    int t3;
    v87 = (int)g_8c46fe20;
    if (v87 != 0) {
        t2 = call_8c0de30c(v87);
        v2 = (int)0;
        v1 = (char *)o->f04;
        v3 = (int)0xc78;
        while (0xc > v2) {
            t1 = lookup_low_id(v2);
            if (t1 != 0) {
                v4 = (int)*(int *)((char *)((char *)t1 + 0x0) + (v3));
                if (v4 == (int)(v1)) {
                    goto L_8c0ddf78;
                }
            }
            v2 = (int)(v2 + 1);
        }
L_8c0ddf78:;
        if (!(v2 >= 0xc) && g_8c46fe20 != 0) {
            call_8c225840(v2, t2);
            t3 = operation_8c0ddfd4(g_8c46fe20, v2, 0x4b, t2);
            if (t3 != 0) {
                operation_8c0df7d8((void *)t3, t2, 0x4b);
            }
        }
    }
}
