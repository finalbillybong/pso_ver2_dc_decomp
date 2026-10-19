typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern S_g8c44bea0 *g_8c44bea0;
extern int operation_8c01c25c(void);
extern int current_effect_mode(void);
extern void create_manager_8c25e570(void *);
extern void operation_8c2497f4(int);
void operation_8c237ad4(Object *o)
{
    int v1;
    int t1;
    int t2;
    v1 = (int)0;
    t1 = operation_8c01c25c();
    switch (t1) {
    case 16:
        t2 = current_effect_mode();
        if (t2 == 0xf) {
            break;
        }
        v1 = (int)1;
        break;
    default:
        v1 = (int)1;
        break;
    }
    if (v1 != 0) {
        create_manager_8c25e570(g_8c44bea0);
        operation_8c2497f4((int)g_8c44bea0);
        o->f20 = 1;
    }
}
