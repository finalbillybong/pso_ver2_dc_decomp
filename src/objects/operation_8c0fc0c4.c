typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
struct Object {
    float tag;
    float f04;
    float f08;
    float f0c;
    char unknown10[0x8];
    float dispatch;
};
struct S_vv5 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct S_vv4 {
    float f00;
};
void operation_8c0fc0c4(Object *o)
{
    S_vv5 *v5;
    S_vv4 *v4;
    float v8;
    v4 = (S_vv4 *)&o->dispatch;
    v5 = (S_vv5 *)o;
    if (o->dispatch > 1.0f) {
        if (o->dispatch > 2.0f) {
            o->tag = 0.0f;
        } else {
            o->tag = o->dispatch - 2.0f;
        }
        o->f04 = 0.0f;
        o->f08 = 0.0f;
        o->f0c = 0.0f;
        return;
    }
    v5->f00 = -1.0f;
    v8 = (float)(v4->f00 - 1.0f);
    if (-1.0f > (v4->f00 - 1.0f)) {
        v8 = (float)-1.0f;
    }
    v5->f04 = v8;
    v5->f08 = v8;
    v5->f0c = v8;
}
