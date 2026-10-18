typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9bdc S_g8c4d9bdc;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x20];
    short f20;
};
extern int call_8c13a528(void);
extern int call_8c12b944(void);
unsigned short operation_8c13a5bc(void)
{
    S_vv1 *v1;
    int t1;
    int t2;
    t1 = call_8c13a528();
    if (t1 == 0) {
        return 0xffff;
    }
    t2 = call_8c12b944();
    v1 = (S_vv1 *)*(S_g8c4d9bdc **)((char *)0x8c4d9bdc + ((int)((float)*(int *)0x8c4d9bec * ((float)t2 / 32768.0f)) << 2));
    if (v1 != 0) {
        return v1->f20;
    }
    return 0xffff;
}
