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
extern void start_positioned_view_8c112b10(void *);
extern void call_8c112ba4(Object *);
extern void operation_8c112cac(void *);
extern void create_callback_dialog_8c112d0c(void *);
extern void operation_8c112d80(void *);
extern void operation_8c112dd0(void *);
void operation_8c112a6c(Object *o)
{
    switch (o->f24) {
    case 0:
        operation_8c1065dc((void *)o);
        o->f24 = 1;
        return;
    case 1:
        start_positioned_view_8c112b10((void *)o);
        return;
    case 2:
        call_8c112ba4(o);
        return;
    case 3:
        operation_8c112cac((void *)o);
        return;
    case 4:
        create_callback_dialog_8c112d0c((void *)o);
        return;
    case 7:
        operation_8c112d80((void *)o);
        return;
    case 6:
        operation_8c112dd0((void *)o);
        return;
    case 5:
        break;
    }
}
