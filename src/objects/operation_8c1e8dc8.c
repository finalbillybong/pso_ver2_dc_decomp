typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    float fe4;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
extern char g_8c41cba0[];
extern int operation_8c248584(void);
extern S_c8c021ef8 *lookup_low_id(int);
extern float distance_xz(void *, void *);
int operation_8c1e8dc8(Object *o)
{
    float v1;
    int v8;
    int t1;
    S_c8c021ef8 *t2;
    float t3;
    t1 = operation_8c248584();
    if (t1 == 0) {
        return 0;
    }
    if (!(*(float *)(g_8c41cba0 + 0x3c) > 0.25f)) {
        v1 = (float)o->fe4;
        t2 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t2 != 0 && (int)t2->f37c == *(int *)0x8c44be04) {
            t3 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)t2 + 0x3c)));
            if ((v1 * v1) > t3) {
                v8 = (int)t2;
                goto L_8c1e8e28;
            }
        }
        v8 = (int)0;
L_8c1e8e28:;
        if (v8 != 0) {
            goto L_8c1e8e30;
        }
    }
    return 1;
L_8c1e8e30:;
    return 0;
}
