typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x67a];
    short f766;
    char unknown768[0x4];
    int f76c;
};
struct S_vv1 {
    int f00;
};
extern void call_8c03b55c(void *, int);
extern int operation_02c350(void *);
extern float operation_8c1a7304(void *);
extern int check_range_8c01cf68(void *, float);
extern void call_8c1eaf14(Object *);
extern void operation_8c1aa988(void *, void *);
void operation_8c1eaab0(Object *o)
{
    S_vv1 *v1;
    int v2;
    int t1;
    float t2;
    int t3;
    float t4;
    int t5;
    call_8c03b55c((void *)(((char *)o + 0xbcc)), 6);
    t1 = operation_02c350((void *)o);
    if ((short)t1 != 8) {
        t2 = operation_8c1a7304((void *)o);
        t3 = check_range_8c01cf68((void *)o, t2);
        if (t3 == 0) {
            return;
        }
        call_8c1eaf14(o);
        o->f766 += 1;
        operation_8c1aa988((void *)(((char *)o + 0x754)), (void *)o);
        return;
    }
    v1 = (S_vv1 *)((int)((char *)o + 0x754) + 0xc);
    v2 = (int)(((v1->f00 & 8)) != 0);
    if (v2 == 0) {
        t4 = operation_8c1a7304((void *)o);
        t5 = check_range_8c01cf68((void *)o, t4);
        if (t5 != 0) {
            call_8c1eaf14(o);
            *(int *)((char *)o + 0x76c) += 1;
            if (o->f76c >= 3) {
                v1->f00 |= 8;
                operation_8c1aa988((void *)(((char *)o + 0x754)), (void *)o);
                o->fe8 |= 0x40;
                o->fe8 |= 0x10;
            }
        }
    }
}
