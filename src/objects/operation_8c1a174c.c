typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    float fe4;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_c8c021ef8 {
    char unknown0[0xbc4];
    int fbc4;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c41bce4;
extern S_L8c41cba0 g_8c41cba0;
extern int operation_8c1a1830(int, float);
extern S_c8c021ef8 *lookup_low_id(int);
extern int player_flag9_8c026508(void);
extern void call_8c016b78(void);
void operation_8c1a174c(Object *o)
{
    int v3;
    int v5;
    int t1;
    S_c8c021ef8 *t2;
    int t3;
    t1 = operation_8c1a1830((int)o, o->fe4 * o->fe4);
    if (t1 == 1 && (((&g_8c41cba0)->f28 & 4)) != 0) {
        t2 = lookup_low_id((int)g_8c418248);
        if (t2 != 0) {
            t3 = player_flag9_8c026508();
            if (t3 != 0) {
                return;
            }
        }
        if (t2 != 0) {
            v3 = (int)(t2->fbc4 == 0);
            if (v3 == 0) {
                return;
            }
        }
        v5 = (int)(g_8c41bce4 == 0);
        if (v5 != 0) {
            call_8c016b78();
        }
    }
}
