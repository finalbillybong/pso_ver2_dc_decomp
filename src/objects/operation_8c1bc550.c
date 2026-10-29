typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
typedef struct Block_p0_3e0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3e0;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x35c];
    int f3a4;
    float f3a8;
    float f3ac;
    float f3b0;
    float f3b4;
    char unknown3b8[0x4];
    float f3bc;
    char unknown3c0[0x20];
    Block_p0_3e0 f3e0;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
extern void operation_8c1bc0c4(void *);
extern float call_8c37e480(void *);
extern void call_8c37b630(void *);
void operation_8c1bc550(Object *o)
{
    char *v41;
    int v7;
    float v8;
    float v9;
    float v10;
    float v19;
    S_c8c021ef8 *t1;
    float t2;
    float t3;
    float t4;
    v41 = (char *)o->f3a4;
    if ((int)(v41) != 0xffff) {
        t1 = lookup_low_id((int)(v41));
        if (t1 != 0) {
            *(Vector3 *)&o->f3e0 = *(Vector3 *)&t1->f3c;
        }
    }
    v7 = (int)(o->f20 << 0xd);
    t3 = call_8c37eb0c(v7);
    v8 = (float)o->f3e0.f00;
    v9 = (float)(v8 + t3 * 16.0f);
    t4 = call_8c38c154(v7);
    v10 = (float)(o->f3e0.f08 + t4 * 16.0f);
    o->f3ac = 0.0f;
    if (v9 > o->f3c) {
        o->f3a8 += 0.0510416627f;
    } else {
        o->f3a8 -= 0.0510416627f;
    }
    if (v10 > o->f44) {
        o->f3b0 += 0.0510416627f;
    } else {
        o->f3b0 -= 0.0510416627f;
    }
    operation_8c1bc0c4((void *)o);
    t2 = call_8c37e480((void *)(&o->f3a8));
    o->f3b4 = t2;
    v19 = (float)o->f3b4;
    if (v19 > o->f3bc) {
        o->f3b4 = v19 + -0.0510416627f;
        call_8c37b630((void *)(&o->f3a8));
        o->f3a8 *= o->f3b4;
        o->f3b0 *= o->f3b4;
    }
}
