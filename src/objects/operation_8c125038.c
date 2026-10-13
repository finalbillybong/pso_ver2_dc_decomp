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
extern void call_8c1265d0(void);
extern void call_8c125520(void);
extern void call_8c125a78(void);
extern void call_8c12609c(void);
extern void call_8c125658(void);
extern void call_8c12586c(void);
extern void call_8c1264f0(void);
extern void call_8c126af0(void);
extern void call_8c126fd0(void);
extern void call_8c127218(void);
extern void call_8c127414(void);
void operation_8c125038(Object *o)
{
    switch (o->f30a) {
    case 0:
        call_8c1265d0();
        return;
    case 1:
        call_8c125520();
        return;
    case 2:
        call_8c125a78();
        return;
    case 9:
        call_8c12609c();
        return;
    case 4:
        call_8c125658();
        return;
    case 5:
        call_8c12586c();
        return;
    case 7:
        call_8c1264f0();
        return;
    case 10:
        call_8c126af0();
        return;
    case 11:
        call_8c126fd0();
        return;
    case 12:
        call_8c127218();
        return;
    case 8:
        call_8c127414();
        return;
    case 3:
    case 6:
        break;
    }
}
