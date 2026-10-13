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
extern void call_8c242678(void);
extern void call_8c2426a0(void);
extern void call_8c242988(void);
extern void call_8c242abc(void);
extern void call_8c24323c(void);
extern void call_8c243784(void);
extern void call_8c243a9c(void);
void operation_8c2425e0(Object *o)
{
    switch (o->f20) {
    case 0:
        call_8c242678();
        return;
    case 1:
        call_8c2426a0();
        return;
    case 2:
        call_8c242988();
        return;
    case 3:
        call_8c242abc();
        return;
    case 4:
        call_8c24323c();
        return;
    case 5:
        call_8c243784();
        return;
    case 6:
        call_8c243a9c();
    }
}
