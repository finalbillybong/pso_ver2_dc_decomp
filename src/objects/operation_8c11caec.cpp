typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c285da0 S_g8c285da0;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_x39728 S_x39728;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0xc];
    float ff8;
    char unknownfc[0x294];
    int f390;
};
struct S_vv4 {
    int f00;
};
struct Frame {
    Vector3 f00;
};
struct S_x39728 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" int create_effect_769c(void *, int);
extern "C" void operation_8c11afa0(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c11caec(Object *o)
{
    Frame frame;
    S_vv4 *v4;
    int v3;
    int v1;
    int v2;
    int t1;
    int t2;
    if (!(10.0f > o->ff8)) {
        v1 = (int)0x3b0;
        v3 = (int)0;
        v2 = (int)0x3bc;
        while (2 > v3) {
            v4 = (S_vv4 *)((char *)(&*(int *)((char *)((char *)o + 0x0) + (v3 << 2))) + v1);
            if (v4->f00 == 0) {
                t1 = create_effect_769c((void *)((int)o + *(int *)((char *)0x8c285da8 + (v3 << 2)) * 0xc + v2), (int)(*(S_g8c285da0 **)((char *)0x8c285da0 + (v3 << 2))));
                v4->f00 = (int)t1;
            }
            v3 = (int)(v3 + 1);
        }
    }
    if (((o->fe8 & 0x10)) != 0) {
        o->f390 = 8;
        if (o->f390 >= 0 && !(o->f390 >= 0xe)) {
            operation_8c11afa0((int)o);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x39728 *)(o->f390 * 0x18 + 0x8c310bd8))->f00;
            t2 = call_8c18e6fc((Frame *)((&frame)));
            if (t2 != 0) {
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
            }
        }
    }
}
