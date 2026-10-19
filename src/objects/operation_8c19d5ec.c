typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    float fe4;
    char unknowne8[0x4];
    int fec;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_g8c418248 *g_8c418248;
extern S_L8c41cba0 g_8c41cba0;
extern int lookup_low_id(int);
extern int player_flag9_8c026508(void);
extern void operation_8c0292ec(void);
extern int call_8c02631c(int);
extern void call_8c027090(Object *);
extern float squared_distance_xyz(void *, void *);
extern void operation_8c029294(void);
int operation_8c19d5ec(Object *o)
{
    float v3;
    int v7;
    int v10;
    int t1;
    int t2;
    int t3;
    int t4;
    float t5;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        t2 = player_flag9_8c026508();
        if (t2 != 0) {
            operation_8c0292ec();
            return 0;
        }
        t3 = call_8c02631c(t1);
        if (t3 != 0) {
            operation_8c0292ec();
            return 0;
        }
    }
    call_8c027090(o);
    v3 = (float)o->fe4;
    t4 = lookup_low_id((int)g_8c418248);
    if (t4 != 0) {
        t5 = squared_distance_xyz((void *)(t4 + 0x3c), (void *)(((char *)o + 0x3c)));
        if ((v3 * v3) > t5) {
            v7 = (int)1;
            goto L_8c19d660;
        }
    }
    v7 = (int)0;
L_8c19d660:;
    if (v7 != 0) {
        if (o->fec != 0) {
            o->fec = 0;
            v10 = (int)1;
            goto L_8c19d68a;
        }
        v10 = (int)0;
    } else {
        if (o->fec != 0) {
            v10 = (int)2;
        } else {
            o->fec = 1;
            v10 = (int)3;
        }
    }
L_8c19d68a:;
    if (v10 == 1) {
        operation_8c029294();
    }
    if (v10 == 3) {
        operation_8c0292ec();
    }
    if (v10 == 0) {
        operation_8c029294();
        if ((((&g_8c41cba0)->f28 & 4)) != 0) {
            return 1;
        }
    }
    return 0;
}
