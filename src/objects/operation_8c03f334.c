typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x58];
    int f58;
};
extern int g_8c466de4;
extern void operation_8c1cc690(void);
extern int hierarchy_is_active(void *);
extern void operation_8c01c1a4(int);
extern int operation_8c03f908(void *);
extern void call_8c03fd7c(Object *);
extern void operation_8c03ff08(void *);
extern void operation_8c040034(void *);
void operation_8c03f334(Object *o)
{
    char *v5;
    int t1;
    int t2;
    operation_8c1cc690();
    v5 = (char *)o->f58;
    if (v5 != 0) {
        t1 = hierarchy_is_active((void *)v5);
        if (t1 == 0) {
            operation_8c01c1a4(0x20);
            return;
        }
    }
    t2 = operation_8c03f908((void *)o);
    if (t2 != -1) {
        switch (g_8c466de4) {
        case 1:
            call_8c03fd7c(o);
            return;
        case 2:
            operation_8c03ff08((void *)o);
            return;
        case 4:
            operation_8c040034((void *)o);
            return;
        case 0:
        case 3:
            break;
        }
    }
}
