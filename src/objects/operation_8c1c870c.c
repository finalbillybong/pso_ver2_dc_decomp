typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
};
extern float call_8c1c8764(Object *, int);
extern float call_8c1c88b0(Object *, int);
extern float call_8c1c8b88(Object *, int);
float operation_8c1c870c(Object *o, int a1)
{
    unsigned char v1;
    unsigned char v2;
    float t1;
    float t2;
    float t3;
    v1 = (unsigned char)o->tag;
    if (v1 != 0) {
        if (v1 == 1) {
            goto L_8c1c872a;
        }
    } else {
        t1 = call_8c1c8764(o, a1);
        return t1;
L_8c1c872a:;
        v2 = (unsigned char)o->f01;
        if (v2 != 1) {
            if (v2 == 2) {
                goto L_8c1c8744;
            }
        } else {
            t2 = call_8c1c88b0(o, a1);
            return t2;
L_8c1c8744:;
            t3 = call_8c1c8b88(o, a1);
            return t3;
        }
    }
    return 1.0f;
}
