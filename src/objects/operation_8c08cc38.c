typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block60 {
    int words[15];
} Block60;
typedef struct S_c8c08d934 S_c8c08d934;
typedef struct S_g8c469da4 S_g8c469da4;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct Block_p0_c0 {
    short f00;
    char unknown2[0x2];
    short f04;
    char unknown6[0x6];
    Vector3 f0c;
    char unknown18[0x24];
} Block_p0_c0;
typedef struct Block_c8c08d934_4 {
    char unknown0[0x8];
    short f08;
    char unknowna[0x32];
} Block_c8c08d934_4;
struct S_c8c08d934 {
    short f00;
    char unknown2[0x2];
    Block_c8c08d934_4 f04;
};
struct Object {
    char unknown0[0x20];
    Vector3 f20;
    char unknown2c[0x94];
    Block_p0_c0 fc0;
    char unknownfc[0x4];
    int f100;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_c8c08d934 *call_8c08d934(Object *, void *);
extern int call_8c08da4c(Object *, short);
extern int advance_counter_8c01d5fc(int);
extern void operation_8c08dc38(void *, int);
void operation_8c08cc38(Object *o)
{
    S_vv1 *v1;
    S_c8c08d934 *t1;
    int t2;
    int t3;
    t1 = call_8c08d934(o, (void *)(&o->f20));
    if (t1 != 0) {
        t2 = call_8c08da4c(o, t1->f00);
        if (t2 != 0) {
            *(Block60 *)&o->fc0 = *(Block60 *)&t1->f04;
            t3 = advance_counter_8c01d5fc(0);
            o->fc0.f04 = t3;
            o->fc0.f00 = -1;
            *(Vector3 *)&o->f20 = *(Vector3 *)&o->fc0.f0c;
            o->f100 = (int)(t2);
            v1 = (S_vv1 *)*(S_g8c469da4 **)0x8c469da4;
            v1->f04 |= 1;
            *(int *)0x8c469da4 = 0;
            operation_8c08dc38((void *)o, (int)(t1->f04.f08));
        }
    }
}
