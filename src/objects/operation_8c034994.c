typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be90 S_g8c44be90;
typedef struct S_g8c460904 S_g8c460904;
typedef struct Object Object;
struct S_g8c460904 {
    char unknown0[0x30];
    int f30;
};
struct Object {
    char unknown0[0x4];
    short f04;
};
extern void call_8c027a24(void);
extern void call_8c17fff4(int);
extern void select_state2_8c01c1b4(void);
extern void call_8c09649c(void *);
int operation_8c034994(Object *o)
{
    int v1;
    int v22;
    v1 = (int)((*(S_g8c460904 **)0x8c460904)->f30 == 3);
    if (v1 != 0) {
        if (*(int *)0x8c461ac4 == 0) {
            call_8c027a24();
            call_8c17fff4(1);
        } else {
            call_8c17fff4(0);
        }
        o->f04 |= 1;
        select_state2_8c01c1b4();
        return 1;
    }
    v22 = (int)((*(S_g8c460904 **)0x8c460904)->f30 == 4);
    if (v22 != 0) {
        o->f04 |= 1;
        call_8c09649c(*(S_g8c44be90 **)0x8c44be90);
        return 1;
    }
    return 0;
}
