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
extern void operation_8c15297c(void *);
extern void dispatch_idle_8c152898(void *);
extern void call_8c1529d0(void);
extern void call_8c1528c4(void);
extern void call_8c153ffc(void);
extern void call_8c153078(void);
extern void call_8c1537c8(void);
extern void call_8c153b08(void);
extern void operation_8c153ef8(void *);
extern void call_8c154f24(void);
void operation_8c152508(Object *o)
{
    switch (o->f30a) {
    case 0:
        operation_8c15297c((void *)o);
        return;
    case 1:
        dispatch_idle_8c152898((void *)o);
        return;
    case 2:
        call_8c1529d0();
        return;
    case 4:
        call_8c1528c4();
        return;
    case 5:
        call_8c153ffc();
        return;
    case 9:
        call_8c153078();
        return;
    case 10:
        call_8c1537c8();
        return;
    case 11:
        call_8c153b08();
        return;
    case 7:
        operation_8c153ef8((void *)o);
        return;
    case 12:
        call_8c154f24();
        return;
    case 3:
    case 6:
    case 8:
        break;
    }
}
