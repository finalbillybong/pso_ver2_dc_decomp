typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_4 Arg0_30_4;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x48];
    int f7c;
};
struct Arg0_30 {
    char unknown0[0x4];
    Arg0_30_4 *f04;
};
extern int lookup_low_id(int);
extern void refresh_name_8c0e2b78(void *, int);
void operation_8c0e35bc(Object *o)
{
    int v1;
    int t1;
    v1 = (int)(*(int *)0x8c418248 + (int)o->f7c + 1 & 3);
    t1 = lookup_low_id(v1);
    if (t1 != 0) {
        refresh_name_8c0e2b78((void *)(o->f30->f04), v1);
    }
}
