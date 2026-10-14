typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x94];
    int f94;
    int f98;
    int f9c;
    float fa0;
};
struct S_vv3 {
    char unknown0[0xa0];
    float fa0;
};
void operation_8c1c28e4(Object *o)
{
    S_vv3 *v3;
    int v2;
    if (o->f94 != 0) {
        if (o->f94 == 1) {
            goto L_8c1c2938;
        }
        if (o->f94 == 2) {
            goto L_8c1c2960;
        }
        return;
    }
    o->f9c += -1;
    if (!(o->f9c > 0)) {
        o->f9c = 0x12c;
        v2 = (int)0x94;
        v3 = (S_vv3 *)o;
        if (o->f98 == 2) {
            o->f94 = 1;
            o->fa0 = -200.0f;
            return;
        }
        *(int *)((char *)((char *)v3 + 0x0) + (v2)) = 2;
        v3->fa0 = 200.0f;
        return;
L_8c1c2938:;
        o->fa0 += 2.0f;
        if (!(200.0f > o->fa0)) {
            o->f98 = 1;
            o->f94 = 0;
            return;
L_8c1c2960:;
            o->fa0 -= 2.0f;
            if (!(o->fa0 > -200.0f)) {
                o->f98 = 2;
                o->f94 = 0;
            }
        }
    }
}
