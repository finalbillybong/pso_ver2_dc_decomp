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
extern void start_positioned_view_8c106208(void *);
extern void call_8c10629c(Object *);
extern void operation_8c10639c(void *);
extern void create_callback_dialog(void *);
extern void operation_8c1064c0(Object *);
extern void operation_8c106470(void *);
extern void operation_8c1064c4(void *);
void operation_8c106144(Object *o)
{
    switch (o->f24) {
    case 0:
        operation_8c1065dc((void *)o);
        o->f24 = 1;
        return;
    case 1:
        start_positioned_view_8c106208((void *)o);
        return;
    case 2:
        call_8c10629c(o);
        return;
    case 3:
        operation_8c10639c((void *)o);
        return;
    case 4:
        create_callback_dialog((void *)o);
        return;
    case 5:
        o->f24 = 9;
        return;
    case 6:
        o->f24 = 9;
        return;
    case 7:
        operation_8c1064c0(o);
        return;
    case 9:
        operation_8c106470((void *)o);
        return;
    case 8:
        operation_8c1064c4((void *)o);
        return;
    }
}
