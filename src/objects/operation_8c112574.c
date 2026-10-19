typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern void operation_8c1065dc(void *);
extern void operation_8c112618(void *);
extern void call_8c1126ac(Object *);
extern void operation_8c1127ac(void *);
extern void create_callback_dialog_8c11280c(void *);
extern void operation_8c112880(void *);
extern void operation_8c1128d0(void *);
void operation_8c112574(Object *o)
{
    switch (o->f24) {
    case 0:
        operation_8c1065dc((void *)o);
        o->f24 = 1;
        return;
    case 1:
        operation_8c112618((void *)o);
        return;
    case 2:
        call_8c1126ac(o);
        return;
    case 3:
        operation_8c1127ac((void *)o);
        return;
    case 4:
        create_callback_dialog_8c11280c((void *)o);
        return;
    case 6:
        operation_8c112880((void *)o);
        return;
    case 7:
        operation_8c1128d0((void *)o);
        return;
    case 5:
        break;
    }
}
