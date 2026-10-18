typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_a4 Arg0_a4;
typedef struct Arg0_a8 Arg0_a8;
typedef struct Arg0_ac Arg0_ac;
typedef struct S_x53008 S_x53008;
struct Object {
    char unknown0[0x110];
    Arg0_110 *f110;
    int f114;
};
struct S_x53008 {
    float f00;
};
extern void set_effect_blend_state(float);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void draw_tree_a702(void *, void *, float);
extern void call_8c38ad10(void);
extern void restore_effect_blend_state(void);
void operation_8c228b08(Object *o)
{
    float v2;
    float v1;
    int v12;
    int v11;
    int v13;
    float v14;
    float v16;
    float v19;
    v1 = (float)1.0f;
    if (!(o->f114 >= 0x88)) {
        if (o->f114 > 0x7c) {
            v2 = (float)((float)(0x88 - (int)o->f114) / 12.0f);
            v1 = (float)v2;
        }
        if (1.0f > v1) {
            set_effect_blend_state(v1);
        }
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x104)));
        call_8c37df90(0, (void *)(o->f110));
        v11 = (int)0x118;
        v12 = (int)0;
        while (6 > v12) {
            v13 = (int)(v12 * 0xc);
            call_8c3827d8((void *)(*(Arg0_a8 **)((char *)((char *)o + 0xa8) + (v13))));
            v14 = (float)((S_x53008 *)((int)o + v11))->f00;
            switch (v12) {
            case 0:
            case 1:
                if (v14 > 30.0f) {
                    v14 = (float)30.0f;
                }
                break;
            }
            draw_tree_a702((void *)(*(Arg0_a4 **)((char *)((char *)o + 0xa4) + (v13))), (void *)(*(Arg0_ac **)((char *)((char *)o + 0xac) + (v13))), v14);
            v12 = (int)(v12 + 1);
        }
        call_8c38ad10();
        if (1.0f > v1) {
            restore_effect_blend_state();
        }
    }
}
