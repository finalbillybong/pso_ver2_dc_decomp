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
extern void call_8c128608(void);
extern void call_8c127f80(void);
extern void call_8c1282e4(void);
extern void call_8c1280d0(void);
extern void call_8c128230(void);
extern void call_8c128538(void);
extern void call_8c128bdc(void);
extern void call_8c128834(void);
extern void call_8c128c7c(void);
extern void call_8c128a48(void);
extern void call_8c128d1c(void);
void operation_8c127c98(Object *o)
{
    switch (o->f30a) {
    case 0:
        call_8c128608();
        return;
    case 1:
        call_8c127f80();
        return;
    case 2:
        call_8c1282e4();
        return;
    case 4:
        call_8c1280d0();
        return;
    case 5:
        call_8c128230();
        return;
    case 7:
        call_8c128538();
        return;
    case 9:
        call_8c128bdc();
        return;
    case 10:
        call_8c128834();
        return;
    case 11:
        call_8c128c7c();
        return;
    case 8:
        call_8c128a48();
        return;
    case 12:
        call_8c128d1c();
        return;
    case 3:
    case 6:
        break;
    }
}
