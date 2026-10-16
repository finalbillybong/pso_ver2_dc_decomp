typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d9bac S_L8c4d9bac;
typedef struct S_L8c4d9bb8 S_L8c4d9bb8;
typedef struct S_L8c4d9bc4 S_L8c4d9bc4;
typedef struct S_L8c4d9bd0 S_L8c4d9bd0;
typedef struct S_g8c4d9b8c S_g8c4d9b8c;
typedef struct S_g8c4d9b94 S_g8c4d9b94;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
struct S_vv1 {
    float f00;
    float f04;
    float f08;
    float f0c;
    char unknown10[0x8];
    int f18;
};
struct S_L8c4d9bac {
    float f00;
    float f04;
    float f08;
};
struct S_L8c4d9bb8 {
    float f00;
    float f04;
    float f08;
};
struct S_vv4 {
    float f00;
    float f04;
    float f08;
    float f0c;
    char unknown10[0x8];
    int f18;
};
struct S_L8c4d9bc4 {
    float f00;
    float f04;
    float f08;
};
struct S_L8c4d9bd0 {
    float f00;
    float f04;
    float f08;
};
extern S_g8c4d9b8c *g_8c4d9b8c;
extern int g_8c4d9b90;
extern S_g8c4d9b94 *g_8c4d9b94;
extern int g_8c4d9b98;
extern S_L8c4d9bac g_8c4d9bac;
extern S_L8c4d9bb8 g_8c4d9bb8;
extern S_L8c4d9bc4 g_8c4d9bc4;
extern S_L8c4d9bd0 g_8c4d9bd0;
extern void call_8c139ad8(Object *);
extern void call_8c139400(Object *);
extern void call_8c05fd7c(int, Object *, int, int, int);
extern void call_8c139594(Object *);
extern void forward_effect_view(void *, void *);
extern void call_8c13981c(Object *);
extern void operation_8c1399fc(void *);
void operation_8c138424(Object *o)
{
    S_vv1 *v1;
    int v2;
    S_vv4 *v4;
    switch (o->f30a) {
    case 0:
        call_8c139ad8(o);
        return;
    case 1:
        call_8c139400(o);
        call_8c05fd7c(0x30000, o, 0, 0, 0);
        return;
    case 2:
        call_8c139594(o);
        v1 = (S_vv1 *)g_8c4d9b8c;
        if (v1->f18 == 0) {
            return;
        }
        (&g_8c4d9bac)->f00 = 0.0f;
        (&g_8c4d9bac)->f04 = v1->f0c;
        (&g_8c4d9bac)->f08 = v1->f08;
        (&g_8c4d9bb8)->f00 = 0.0f;
        (&g_8c4d9bb8)->f04 = v1->f04;
        (&g_8c4d9bb8)->f08 = v1->f00;
        forward_effect_view((void *)((void *)&g_8c4d9bac), (void *)((void *)&g_8c4d9bb8));
        return;
    case 3:
        call_8c13981c(o);
        call_8c05fd7c(0x30001, o, 0, 0, 0);
        return;
    case 4:
        operation_8c1399fc((void *)o);
        if (g_8c4d9b98 != 0) {
            v4 = (S_vv4 *)g_8c4d9b94;
        } else {
            v2 = (int)g_8c4d9b90;
            v4 = (S_vv4 *)v2;
        }
        if (v4->f18 != 0) {
            (&g_8c4d9bc4)->f00 = 0.0f;
            (&g_8c4d9bc4)->f04 = v4->f0c;
            (&g_8c4d9bc4)->f08 = v4->f08;
            (&g_8c4d9bd0)->f00 = 0.0f;
            (&g_8c4d9bd0)->f04 = v4->f04;
            (&g_8c4d9bd0)->f08 = v4->f00;
            forward_effect_view((void *)((void *)&g_8c4d9bc4), (void *)((void *)&g_8c4d9bd0));
        }
        return;
    case 5:
        break;
    }
}
