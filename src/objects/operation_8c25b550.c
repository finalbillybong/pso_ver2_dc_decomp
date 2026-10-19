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
extern void call_8c25b9c8(Object *);
extern void operation_8c25bb38(void *);
extern void call_8c25bca4(Object *);
extern void operation_8c25bda4(void *);
extern void operation_8c25bf18(void *);
extern void advance_timer_8c25bf48(void *);
extern void call_8c25bfac(Object *);
extern void call_8c25b684(Object *);
extern void operation_8c25b8c0(void *);
extern void operation_8c25c070(void *);
extern void call_8c25c10c(Object *);
void operation_8c25b550(Object *o)
{
    operation_8c1cc690();
    switch (o->f20) {
    case 0:
        call_8c25b9c8(o);
        return;
    case 1:
        operation_8c25bb38((void *)o);
        return;
    case 2:
        call_8c25bca4(o);
        return;
    case 3:
        operation_8c25bda4((void *)o);
        return;
    case 4:
        operation_8c25bf18((void *)o);
        return;
    case 5:
        advance_timer_8c25bf48((void *)o);
        return;
    case 6:
        call_8c25bfac(o);
        return;
    case 7:
        call_8c25b684(o);
        return;
    case 8:
        operation_8c25b8c0((void *)o);
        return;
    case 9:
        operation_8c25c070((void *)o);
        return;
    case 10:
        call_8c25c10c(o);
        return;
    }
}
