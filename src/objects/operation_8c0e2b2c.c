typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_4 Arg0_30_4;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    char unknown0[0x4];
    Arg0_30_4 *f04;
};
extern void refresh_name_8c0e2b78(void *, int);
void operation_8c0e2b2c(Object *o)
{
    refresh_name_8c0e2b78((void *)(o->f30->f04), (int)(*(S_g8c418248 **)0x8c418248));
}
