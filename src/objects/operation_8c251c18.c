typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x234];
    int f234;
};
struct S_c8c053d84 {
    char unknown0[0xdc];
    int fdc;
    int fe0;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void create_effect_777c(void *, int);
void operation_8c251c18(int a0, Arg1 *a1, int a2, int a3)
{
    S_c8c053d84 *t1;
    if (a1 != 0) {
        a1->f234 &= -3;
    }
    t1 = lookup_object_by_id((unsigned short)a2);
    if (t1 != 0 && t1->fdc != 0 && t1->fe0 > a3) {
        create_effect_777c((void *)(t1->fdc + a3 * 0x2c + 0x1c), 0x45);
    }
}
