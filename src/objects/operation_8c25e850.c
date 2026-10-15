typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
};
extern int current_effect_mode(void);
extern void operation_8c25eb44(Object *);
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c25ec50(Object *);
extern void operation_8c25ebe0(Object *);
extern void operation_8c25edac(int);
void operation_8c25e850(Object *o)
{
    int v2;
    int v4;
    int v3;
    int v1;
    int t1;
    S_c8c021ef8 *t2;
    t1 = current_effect_mode();
    if (t1 != 0 || *(int *)0x8c4e2ba0 == 0) {
        return;
    }
    operation_8c25eb44(o);
    v1 = (int)0x2000000;
    v2 = (int)1;
    v3 = (int)0;
    while (4 > v3) {
        t2 = lookup_low_id(v3);
        if (t2 != 0 && ((t2->f34 & v1)) != 0) {
            v4 = (int)0;
            goto L_8c25e89e;
        }
        v3 = (int)(v3 + 1);
    }
    v4 = (int)v2;
L_8c25e89e:;
    if (v4 != 0) {
        if (o->f24 != 0) {
            operation_8c25ec50(o);
            operation_8c25ebe0(o);
            o->f20 = 2;
            return;
        }
        operation_8c25ec50(o);
        operation_8c25eb44(o);
        operation_8c25edac((int)o);
        o->f20 = 3;
    }
}
