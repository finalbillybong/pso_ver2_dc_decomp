typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
};
extern void call_8c1cc690(void);
extern void call_8c25f118(Object *);
extern void operation_8c25f158(Object *);
extern void select_mode17_8c1cc618(void);
void operation_8c25f050(Object *o)
{
    char *v1;
    call_8c1cc690();
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c25f074;
        }
        if (o->f20 == 2) {
            goto L_8c25f092;
        }
        return;
    }
    o->f20 = 1;
    return;
L_8c25f074:;
    if (*(int *)0x8c4dbaec == 0) {
        call_8c25f118(o);
        operation_8c25f158(o);
        select_mode17_8c1cc618();
        return;
L_8c25f092:;
        v1 = (char *)o->f24;
        o->f24 += 1;
        if ((float)(int)v1 > 4.5f) {
            select_mode17_8c1cc618();
        }
    }
}
