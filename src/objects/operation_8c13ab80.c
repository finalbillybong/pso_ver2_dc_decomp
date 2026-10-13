typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern void call_8c13b1b0(void);
extern void call_8c13b64c(void);
extern void call_8c13ad4c(void);
extern void call_8c13b030(void);
extern void operation_8c13b174(void *);
extern void call_8c13b2b4(void);
extern void call_8c13b8d4(void);
extern void call_8c13bbb0(void);
void operation_8c13ab80(Object *o)
{
    switch (o->f30a) {
    case 0:
        call_8c13b1b0();
        return;
    case 1:
        call_8c13b64c();
        return;
    case 2:
        call_8c13ad4c();
        return;
    case 4:
        call_8c13b030();
        return;
    case 5:
        operation_8c13b174((void *)o);
        return;
    case 7:
        call_8c13b2b4();
        return;
    case 9:
        call_8c13b8d4();
        return;
    case 10:
        call_8c13bbb0();
        return;
    case 3:
    case 6:
    case 8:
        break;
    }
}
