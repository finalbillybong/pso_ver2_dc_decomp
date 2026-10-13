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
extern void call_8c1e83fc(void);
extern void call_8c1e8670(void);
extern void call_8c1e8788(void);
extern void update_overlay_menu(void *);
extern void advance_request_8c1e8ad0(void *);
void operation_8c1e7e18(Object *o)
{
    switch (o->f10e) {
    case 0:
        call_8c1e83fc();
        return;
    case 1:
        call_8c1e8670();
        return;
    case 2:
        call_8c1e8788();
        return;
    case 3:
        update_overlay_menu((void *)o);
        return;
    case 4:
        advance_request_8c1e8ad0((void *)o);
    }
}
