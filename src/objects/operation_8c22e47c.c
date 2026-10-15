typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_84 Arg0_84;
typedef struct S_vv81 S_vv81;
typedef struct S_vv81_90 S_vv81_90;
struct Object {
    char unknown0[0x54];
    Arg0_54 *f54;
    Arg0_58 *f58;
    char unknown5c[0x28];
    Arg0_84 *f84;
    char unknown88[0xc];
    int f94;
};
struct S_vv81 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0xe];
    S_vv81_90 *f90;
};
extern int call_8c372d98(void *);
extern void operation_8c184918(void);
extern void call_8c011ec0(void *);
extern void operation_8c19a044(void *, int);
void operation_8c22e47c(Object *o)
{
    S_vv81 *v81;
    int t1;
    t1 = call_8c372d98((void *)(o->f54));
    if (t1 == 0) {
        operation_8c184918();
        if (o->f58 != 0) {
            call_8c011ec0((void *)(o->f58));
            o->f58 = (Arg0_58 *)0;
        }
        v81 = (S_vv81 *)o->f84;
        if (v81 != 0) {
            v81->f80 = (v81->f80 & 0xffff) & -3;
            if (v81->f90 != 0) {
                operation_8c19a044((void *)(v81->f90), 1);
            }
        }
        o->f94 = 0xe;
    }
}
