typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469c84 S_g8c469c84;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
};
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37e2e4(int, float, float, float);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
void operation_8c084ed0(Object *o)
{
    if (*(int *)0x8c469c80 != 0) {
        if (o->f30a != 0) {
            if (o->f30a == 1) {
                return;
            }
            return;
        }
        call_8c3827d8((void *)(*(S_g8c469c84 **)0x8c469c84));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(o->f64));
        call_8c37e2e4(0, 0.85f, 0.85f, 0.85f);
        call_8c3aa716((void *)(o->f38));
        call_8c38ad10();
    }
}
