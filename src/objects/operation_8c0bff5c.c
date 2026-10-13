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
extern void call_8c0c02a4(void);
extern void call_8c0c046c(void);
extern void update_actor_mode_three(void *);
extern void call_8c0c14dc(void);
extern void call_8c0c1760(void);
extern void call_8c0c0a3c(void);
extern void call_8c0c07c8(void);
extern void call_8c0c0d34(void);
extern void call_8c0c1370(void);
extern void call_8c0c1df4(void);
void operation_8c0bff5c(Object *o)
{
    switch (o->f30a) {
    case 0:
        call_8c0c02a4();
        return;
    case 1:
        call_8c0c046c();
        return;
    case 3:
        update_actor_mode_three((void *)o);
        return;
    case 4:
        call_8c0c14dc();
        return;
    case 5:
        call_8c0c1760();
        return;
    case 9:
        call_8c0c0a3c();
        return;
    case 10:
        call_8c0c07c8();
        return;
    case 11:
        call_8c0c0d34();
        return;
    case 12:
        call_8c0c1370();
        return;
    case 7:
        call_8c0c1df4();
        return;
    case 2:
    case 6:
    case 8:
        break;
    }
}
