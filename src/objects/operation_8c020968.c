typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Node Node;
struct Node {
    int f00;
    char unknown4[0x8];
    Node *f0c;
    char unknown10[0x2c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x4];
    float f6c;
    char unknown70[0x18];
    int f88;
};
typedef struct S_g8c44be9c {
    char unknown0[0x14];
    Node *f14;
} S_g8c44be9c;
typedef struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
} Object;
typedef struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    Vector3 f0c;
} Frame;
extern int g_8c300198;
extern S_g8c44be9c *g_8c44be9c;
extern void operation_8c0368a8(Frame *);
void operation_8c020968(Object *o, int a1)
{
    Frame frame;
    Node *p;
    int found;
    int k;
    int m;
    int key;
    key = (unsigned short)a1;
    found = 0;
    p = g_8c44be9c->f14;
    k = g_8c300198;
    while (p != 0) {
        if ((m = p->f00 == k) != 0 && p->f88 == 0 && (int)p->f6c == key) {
            found = 1;
            break;
        }
        p = p->f0c;
    }
    if (!found) {
        return;
    }
    if (o != 0 && (m = o->f308 == 2) != 0) {
        return;
    }
    frame.f00 = 0x1a;
    frame.f01 = 1;
    frame.f00 = 0x3d;
    frame.f01 = 1;
    frame.f04 = 0;
    frame.f06 = 0;
    frame.f08 = -1;
    frame.f0a = -1;
    frame.f00 = 0x3f;
    frame.f01 = 6;
    frame.f02 = o->f20;
    frame.f06 = p->f64;
    frame.f0c = p->f3c;
    operation_8c0368a8(&frame);
}
