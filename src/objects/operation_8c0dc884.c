typedef struct Node Node;
typedef struct S_g8c4e2ba4 S_g8c4e2ba4;
struct S_g8c4e2ba4 {
    char unknown0[0x14];
    Node *f14;
};
struct Node {
    char unknown0[0xc];
    Node *f0c;
    char unknown10[0x24];
    int f34;
    char unknown38[0x28];
    float f60;
};
extern S_g8c4e2ba4 *g_8c4e2ba4;
extern Node *operation_8c0dc4fc(Node *, Node *);
void operation_8c0dc884(void)
{
    Node *v2;
    int v4;
    int v5;
    int v6;
    int v10;
    int v11;
    Node *v9;
    Node *v8;
    Node *v7;
    v2 = g_8c4e2ba4->f14;
    if (v2 != 0) {
        v4 = -0x401;
        while (v2 != 0) {
            v2->f34 &= v4;
            v2 = v2->f0c;
        }
        v5 = 0x200;
        v6 = 0x400;
        for (v8 = g_8c4e2ba4->f14; (v7 = v8->f0c) != 0; v8 = v8->f0c) {
            for (v9 = operation_8c0dc4fc(v8, v7); v9 != 0; v9 = operation_8c0dc4fc(v8, v9->f0c)) {
                v10 = v8->f34;
                if ((v10 & v5) != 0) {
                    v9->f34 |= v6;
                } else {
                    v11 = v9->f34;
                    if ((v11 & v5) != 0) {
                        v8->f34 = v10 | v6;
                    } else if (v8->f60 > v9->f60) {
                        v8->f34 = v10 | v6;
                    } else {
                        v9->f34 = v11 | v6;
                    }
                }
            }
        }
    }
}
