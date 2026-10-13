typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x10e];
    short f10e;
};
extern void call_8c25a0ec(void);
extern void call_8c25a354(void);
extern void call_8c25a47c(void);
extern void update_overlay_menu_8c25a590(void *);
extern void advance_request_8c25a7e8(void *);
void operation_8c259b24(Object *o)
{
    switch (o->f10e) {
    case 0:
        call_8c25a0ec();
        return;
    case 1:
        call_8c25a354();
        return;
    case 2:
        call_8c25a47c();
        return;
    case 3:
        update_overlay_menu_8c25a590((void *)o);
        return;
    case 4:
        advance_request_8c25a7e8((void *)o);
    }
}
