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
extern void operation_8c1cc690(void);
extern void call_8c1e6de0(Object *);
extern void call_8c1e6f50(Object *);
extern void call_8c1e70bc(Object *);
extern void operation_8c1e71b8(void *);
extern void operation_8c1e732c(void *);
extern void advance_timer_8c1e735c(void *);
extern void call_8c1e73c0(Object *);
extern void call_8c1e6ac8(Object *);
extern void operation_8c1e6ce0(void *);
extern void operation_8c1e7484(void *);
extern void call_8c1e74f4(Object *);
void operation_8c1e6968(Object *o)
{
    operation_8c1cc690();
    switch (o->f20) {
    case 0:
        call_8c1e6de0(o);
        return;
    case 1:
        call_8c1e6f50(o);
        return;
    case 2:
        call_8c1e70bc(o);
        return;
    case 3:
        operation_8c1e71b8((void *)o);
        return;
    case 4:
        operation_8c1e732c((void *)o);
        return;
    case 5:
        advance_timer_8c1e735c((void *)o);
        return;
    case 6:
        call_8c1e73c0(o);
        return;
    case 7:
        call_8c1e6ac8(o);
        return;
    case 8:
        operation_8c1e6ce0((void *)o);
        return;
    case 9:
        operation_8c1e7484((void *)o);
        return;
    case 10:
        call_8c1e74f4(o);
        return;
    }
}
