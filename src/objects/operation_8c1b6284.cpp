typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame {
    Vector3 f00;
} Frame;
typedef struct Phase {
    char unknown0[0x4];
    int next;
    Vector3 pmf;
    char unknown14[0x18];
} Phase;
typedef struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0xc];
    int f3a0;
    char unknown3a4[0x34];
    int f3d8;
    char unknown3dc[0x8];
    int f3e4;
    float f3e8;
    char unknown3ec[0x4];
    int f3f0;
} Object;
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Phase g_8c3268ec[];
extern "C" void create_related_object_8c21aeb4(void *, void *);
extern "C" void operation_8c1b349c(int);
extern "C" void mark_effect_for_release(void *);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bits(void *, unsigned short);
extern "C" void call_8c0a7608(void *, int);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1b6284(Object *o)
{
    Frame frame;
    int a;
    int b;
    int i;
    int p;
    int *s1;
    int *s2;
    int *s3;
    int *s4;
    int k;
    int *s;
    int n;
    a = (int)o + 0x484;
    b = (int)o + 0x490;
    if (o->f3a0 == 6) {
        p = 0x8c4e2840;
        for (i = 0; i < 0x40; i++, p += 0xc) {
            create_related_object_8c21aeb4(o, (void *)p);
        }
    } else if (o->f3a0 == 1) {
        operation_8c1b349c((int)o);
    }
    if (o->f3e4 == 0xd) {
        s4 = (int *)((char *)o + 0x41c);
        s3 = (int *)((char *)o + 0x424);
        if (o->f3e8 > 28.0f) {
            if (*s4 != 0) {
                mark_effect_for_release((void *)*s4);
                *s4 = 0;
            }
            if (*s3 != 0) {
                mark_effect_for_release((void *)*s3);
                *s3 = 0;
            }
        } else if (!(15.0f > o->f3e8)) {
            if (*s4 == 0) {
                if ((*s4 = create_effect_769c((void *)a, 0x142)) != 0) {
                    set_effect_bits((void *)*s4, 0x40);
                }
            }
            if (*s3 == 0) {
                if ((*s3 = create_effect_769c((void *)b, 0x142)) != 0) {
                    set_effect_bits((void *)*s3, 0x40);
                }
            }
        }
        if (*s4 != 0) {
            call_8c0a7608((void *)*s4, a);
        }
        if (*s3 != 0) {
            call_8c0a7608((void *)*s3, b);
        }
    }
    if (o->f3e4 == 0xe) {
        s1 = (int *)((char *)o + 0x41c);
        s2 = (int *)((char *)o + 0x420);
        s3 = (int *)((char *)o + 0x424);
        s4 = (int *)((char *)o + 0x428);
        if (o->f3e8 > 10.0f) {
            if (*s1 != 0) {
                mark_effect_for_release((void *)*s1);
                *s1 = 0;
            }
            if (*s2 != 0) {
                mark_effect_for_release((void *)*s2);
                *s2 = 0;
            }
            if (*s3 != 0) {
                mark_effect_for_release((void *)*s3);
                *s3 = 0;
            }
            if (*s4 != 0) {
                mark_effect_for_release((void *)*s4);
                *s4 = 0;
            }
        } else if (!(2.0f > o->f3e8)) {
            if (*s1 == 0) {
                if ((*s1 = create_effect_769c((void *)a, 0x13a)) != 0) {
                    set_effect_bits((void *)*s1, 0x40);
                }
                call_8c05fbf8(0x30017, (char *)o + 0x3c, 0, 1);
            }
            if (*s2 == 0) {
                if ((*s2 = create_effect_769c((void *)a, 0x13b)) != 0) {
                    set_effect_bits((void *)*s2, 0x40);
                }
            }
            if (*s3 == 0) {
                if ((*s3 = create_effect_769c((void *)b, 0x13a)) != 0) {
                    set_effect_bits((void *)*s3, 0x40);
                }
            }
            if (*s4 == 0) {
                if ((*s4 = create_effect_769c((void *)b, 0x13b)) != 0) {
                    set_effect_bits((void *)*s4, 0x40);
                }
            }
        }
        if (*s1 != 0) {
            call_8c0a7608((void *)*s1, a);
        }
        if (*s2 != 0) {
            call_8c0a7608((void *)*s2, a);
        }
        if (*s3 != 0) {
            call_8c0a7608((void *)*s3, b);
        }
        if (*s4 != 0) {
            call_8c0a7608((void *)*s4, b);
        }
    }
    if (--o->f3a0 < 0) {
        o->f390 = 1;
        i = 0x3f8;
        for (k = 8; k < 0xd; k++) {
            s = (int *)((char *)((char *)o + (k << 2)) + i);
            if (*s != 0) {
                mark_effect_for_release((void *)*s);
                *s = 0;
            }
        }
        o->f3d8 = 5;
        n = *(int *)((char *)&g_8c3268ec[0].next + o->f390 * 0x2c);
        if (n != -1) {
            o->f3e4 = n;
            o->f3e8 = 0.0f;
            o->f3f0 = *(int *)((char *)0x8c326b6c + (n << 5));
        }
        frame.f00 = *(Vector3 *)((char *)&g_8c3268ec[0].pmf + o->f390 * 0x2c);
        if (call_8c18e6fc(&frame) != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)(&frame)))();
        }
    }
}
