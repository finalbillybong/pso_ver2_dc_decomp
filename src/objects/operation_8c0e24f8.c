typedef struct Object Object;
typedef struct Node Node;
typedef struct List List;
struct Object {
    char unknown0[0x20];
    float f20;
    char unknown24[0x38];
    float f5c;
};
struct Node {
    char unknown0[0xc];
    Node *f0c;
    char unknown10[0x10];
    float f20;
    char unknown24[0x38];
    float f5c;
};
struct List {
    char unknown0[0x14];
    Node *f14;
};
void operation_8c0e24f8(Object *o)
{
    float v1;
    Node *v2;
    List *v3;
    v1 = o->f20;
    o->f5c = -1.3f;
    if (v1 > 0.0f) {
        o->f5c += -0.3f;
    }
    v3 = *(List **)0x8c4e2ba0;
    if (v3 != 0) {
        if (v1 != 0.0f) {
            *(float *)0x8c4e2bb8 += -0.3f;
        }
        for (v2 = v3->f14; v2 != 0; v2 = v2->f0c) {
            if (v2 != (Node *)o) {
                if (v2->f20 > v1) {
                    if (v1 != 0.0f) {
                        v2->f5c += -0.3f;
                    }
                } else {
                    if (v2->f20 != 0.0f) {
                        o->f5c += -0.3f;
                    }
                }
            }
        }
        v3 = *(List **)0x8c4e2ba4;
        if (v3 != 0) {
            for (v2 = v3->f14; v2 != 0; v2 = v2->f0c) {
                if (v2 != (Node *)o) {
                    if (v2->f20 > v1) {
                        if (v1 != 0.0f) {
                            v2->f5c += -0.3f;
                        }
                    } else {
                        if (v2->f20 != 0.0f) {
                            o->f5c += -0.3f;
                        }
                    }
                }
            }
        }
    }
}
