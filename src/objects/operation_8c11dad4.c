typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d8384 S_g8c4d8384;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_f8 Arg0_f8;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x90];
    Arg0_f8 *ff8;
};
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(int);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3a944a(void *);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c11dad4(Object *o)
{
    call_8c3827d8(*(S_g8c4d8384 **)0x8c4d8384);
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((int)((char *)o + 0x3c));
    njRotateY_8c37df90(0, o->f64);
    call_8c3a944a(o->ff8);
    njPopMatrixEx_8c38ad10();
}
