typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern int g_8c4dc800;
extern int operation_8c237bd0(void *);
extern void call_8c237dec(Object *);
extern void operation_8c180ae8(void);
extern void call_8c24ff04(Object *);
extern void operation_8c225d74(void);
extern void operation_8c25c41c(int);
extern void operation_8c238fd0(Object *);
void operation_8c237b34(Object *o)
{
    int t1;
    t1 = operation_8c237bd0((void *)o);
    if (t1 == 0) {
        call_8c237dec(o);
        if (g_8c4dc800 != 0) {
            operation_8c180ae8();
            call_8c24ff04(o);
            operation_8c225d74();
            operation_8c25c41c((int)o);
            o->f20 = 2;
            return;
        }
        operation_8c238fd0(o);
    }
}
