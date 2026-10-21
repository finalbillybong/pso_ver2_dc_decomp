typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern unsigned short g_8c313110;
extern int g_8c313114;
extern short g_8c313118;
extern short g_8c31311a;
extern unsigned short g_8c313128;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4d9b70;
extern int global_present_8c13a3e0(void);
extern void operation_8c09e6d0(void *);
extern void destroy_actor_mode_state(void *, short);
extern void operation_8c122774(void *, void *);
Object *operation_8c1380d0(Object *o, int a1)
{
    int v10;
    int v3;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c26d0e0;
        t1 = global_present_8c13a3e0();
        if (t1 != 0) {
            operation_8c09e6d0((void *)o);
        }
        v10 = (int)0xffff;
        g_8c4d9b70 = v10;
        g_8c313110 = v10;
        g_8c313114 = v10;
        g_8c313118 = v10;
        g_8c31311a = v10;
        v3 = (int)0;
        while (6 > v3) {
            *(short *)((char *)0x8c31311c + (v3 << 1)) = v10;
            v3 = (int)(v3 + 1);
        }
        g_8c313128 = 0xffff;
        destroy_actor_mode_state((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, (void *)o);
        }
    }
    return o;
}
