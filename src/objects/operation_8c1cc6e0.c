typedef struct Block24 {
    int words[6];
} Block24;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    Block24 f00;
    Block24 f18;
    Block24 f30;
};
#define KEY(o, k, off) (unsigned int)((unsigned char *)((int)(o) + (k)))[off]
#define REC(o, off) (*(Block24 *)((char *)(o) + (off)))
static inline int greater2(Object *o, int a, int b)
{
    unsigned int x;
    unsigned int y;
    x = KEY(o, 0, a);
    y = KEY(o, 0, b);
    if (x > y) {
        return 1;
    }
    if (x == y && KEY(o, 1, a) > KEY(o, 1, b)) {
        return 1;
    }
    return 0;
}
static inline int greater3(Object *o, int a, int b)
{
    unsigned int x;
    unsigned int y;
    x = KEY(o, 0, a);
    y = KEY(o, 0, b);
    if (x > y) {
        return 1;
    }
    if (x == y) {
        x = KEY(o, 1, a);
        y = KEY(o, 1, b);
        if (x > y) {
            return 1;
        }
        if (x == y && KEY(o, 2, a) > KEY(o, 2, b)) {
            return 1;
        }
    }
    return 0;
}
void operation_8c1cc6e0(Object *o, int a1, int a2)
{
    Frame frame;
    int i;
    int j;
    int oi;
    int m1;
    int oj;
    i = 0;
    m1 = -1;
    for (; a1 + m1 > i; i++) {
        oi = i * 0x18;
        for (j = i + 1; a1 > j; j++) {
            switch (a2) {
            case 0:
                oj = j * 0x18;
                if (KEY(o, 0, oi) > KEY(o, 0, oj)) {
                    frame.f30 = REC(o, oi);
                    REC(o, oi) = REC(o, oj);
                    REC(o, oj) = frame.f30;
                }
                break;
            case 1:
                oj = j * 0x18;
                if (greater2(o, oi, oj)) {
                    frame.f18 = REC(o, oi);
                    REC(o, oi) = REC(o, oj);
                    REC(o, oj) = frame.f18;
                }
                break;
            case 2:
                oj = j * 0x18;
                if (greater3(o, oi, oj)) {
                    frame.f00 = REC(o, oi);
                    REC(o, oi) = REC(o, oj);
                    REC(o, oj) = frame.f00;
                }
                break;
            default:
                break;
            }
        }
    }
}
