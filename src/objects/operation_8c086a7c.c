typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469cc0 S_g8c469cc0;
typedef struct S_g8c469cc0_4 S_g8c469cc0_4;
typedef struct S_g8c469cc0_8 S_g8c469cc0_8;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x44];
    float fac;
};
struct S_g8c469cc0 {
    char unknown0[0x4];
    S_g8c469cc0_4 *f04;
    S_g8c469cc0_8 *f08;
};
extern void call_8c38ae68(void);
extern void call_8c382a40(int);
extern void call_8c37df90(int, void *);
extern void call_8c37dd28(int, int);
extern void call_8c3addea(void *, void *, float);
extern void call_8c38ad10(void);
void operation_8c086a7c(Object *o)
{
    call_8c38ae68();
    call_8c382a40((int)((char *)o + 0x3c));
    call_8c37df90(0, o->f64);
    call_8c37dd28(0, -0x2000);
    call_8c3addea((*(S_g8c469cc0 **)0x8c469cc0)->f04, (*(S_g8c469cc0 **)0x8c469cc0)->f08, o->fac);
    call_8c38ad10();
}
