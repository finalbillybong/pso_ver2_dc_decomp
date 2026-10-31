typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Node Node;
struct Node {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char f20;
    char f21;
    char f22;
    char unknown23[0x11];
    int f34;
};
extern int g_8c3381b8;
extern int g_8c418248;
extern void *g_8c4d97e0;
extern Node *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(Node *, int);
extern void operation_8c22b148(Node *, int, void *);
extern void operation_8c22b1a4(Node *, Vector3 *);
extern int create_effect_7708(Vector3 *, int, int);
Node *operation_8c22afc0(int a0, int a1, int a2, int a3)
{
    Vector3 pos;
    int id;
    int g;
    Node *t;
    int m;
    if ((unsigned short)a1 == (unsigned short)a2) {
        return 0;
    }
    if ((unsigned short)a1 >= 4) {
        return 0;
    }
    if ((unsigned short)a2 >= 4) {
        return 0;
    }
    switch (a3) {
    case 6:
    case 8:
        id = 0x99;
        break;
    case 7:
        id = 0x98;
        break;
    case 9:
        id = 0x96;
        break;
    case 10:
        id = 0x95;
        break;
    case 0:
        id = 0x97;
        break;
    default:
        return 0;
    }
    g = g_8c418248;
    m = -4;
    a1 -= g;
    if (((unsigned short)a1 & m) != 0) {
        a1 += 4;
    }
    a2 -= g;
    if ((unsigned int)(unsigned short)a2 >> 2 << 2 != 0) {
        a2 += 4;
    }
    t = allocate_block(g_8c4d97e0, 0x38);
    if (t != 0) {
        Node *self = t;
        Node **home = &self;
        (void)home;
        initialize_hierarchy_node(t, a0);
        self->f18 = (void *)0x8c278d98;
        self->f00 = g_8c3381b8;
        self->f1e = 0x38;
        self->f21 = a1;
        operation_8c22b148(self, self->f21, (char *)self + 0x24);
        self->f22 = a2;
        operation_8c22b148(self, self->f22, (char *)self + 0x2c);
        operation_8c22b1a4(self, &pos);
        self->f34 = create_effect_7708(&pos, id, 0xc0);
        self->f20 = 0;
    }
    return t;
}
