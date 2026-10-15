typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_b4 Arg0_b4;
typedef struct Arg0_b8 Arg0_b8;
typedef struct Arg0_bc Arg0_bc;
typedef struct Arg0_e4 Arg0_e4;
typedef struct Arg0_f0 Arg0_f0;
struct Object {
    char unknown0[0xe4];
    Arg0_e4 *fe4;
    int fe8;
    float fec;
    Arg0_f0 *ff0;
};
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void operation_8c161c78(void *);
extern void draw_tree_a702(void *, void *, float);
extern void call_8c161ce4(void *);
extern void call_8c38ad10(void);
void operation_8c22a090(Object *o)
{
    int v1;
    int v2;
    if (!(0x44 > o->fe8)) {
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0xd8)));
        call_8c37df90(0, (void *)(o->fe4));
        v1 = (int)0;
        while (3 > v1) {
            v2 = (int)(v1 * 0xc);
            call_8c3827d8((void *)(*(Arg0_b8 **)((char *)((char *)o + 0xb8) + (v2))));
            if (v1 == 0) {
                operation_8c161c78((void *)(o->ff0));
            }
            draw_tree_a702((void *)(*(Arg0_b4 **)((char *)((char *)o + 0xb4) + (v2))), (void *)(*(Arg0_bc **)((char *)((char *)o + 0xbc) + (v2))), o->fec);
            if (v1 == 0) {
                call_8c161ce4((void *)(o->ff0));
            }
            v1 = (int)(v1 + 1);
        }
        call_8c38ad10();
    }
}
