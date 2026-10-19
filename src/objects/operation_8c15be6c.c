typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct Object Object;
struct S_g8c4db9e4 {
    char unknown0[0x244];
    int f244;
    int f248;
};
struct Object {
    char unknown0[0x4];
    short f04;
};
extern int g_8c4db120;
extern int g_8c4db124;
extern S_g8c4db9e4 *g_8c4db9e4;
extern int operation_8c220ce0(void);
extern int operation_8c106760(Object *);
extern int operation_8c106798(Object *);
extern int operation_8c19b054(void);
extern int call_8c372d98(int);
extern void call_8c12b77c(void *, void *, int);
extern void operation_8c1066c0(Object *);
extern void operation_8c10664c(void *);
void operation_8c15be6c(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c220ce0();
    if (t1 != 0) {
        t2 = operation_8c106760(o);
        if (t2 == 0) {
            t3 = operation_8c106798(o);
            if (t3 == 0) {
                return;
            }
        }
        t4 = operation_8c19b054();
        t5 = call_8c372d98((int)((char)t4));
        if (t5 == 0) {
            if (g_8c4db9e4 != 0) {
                g_8c4db9e4->f248 = (int)(g_8c4db124);
                g_8c4db9e4->f244 = (int)(g_8c4db120);
                call_8c12b77c((void *)(((char *)g_8c4db9e4 + 0x24c)), (void *)((void *)0x8c4dab80), 0x5a0);
            }
            operation_8c1066c0(o);
            operation_8c10664c((void *)o);
            o->f04 |= 1;
        }
    }
}
