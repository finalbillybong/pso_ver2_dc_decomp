typedef struct S_g8c418248 S_g8c418248;
typedef struct Item {
    char unknown0[0x2c];
    int f2c;
} Item;
typedef struct Pair {
    unsigned char a;
    unsigned char b;
    char unknown2[0x2];
} Pair;
typedef struct Object {
    char unknown0[0x30];
    Item **f30;
    char unknown34[0x34];
    Pair f68[3];
} Object;
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern int operation_8c0261f8(void *, int);
extern void operation_8c103ac8(void *, void *, int, int);
extern void operation_8c10393c(void *, int, int);
void operation_8c103874(Object *o, int a1, int a2, int a3)
{
    Item *v1;
    Pair *p;
    int t1;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        v1 = *(Item **)((char *)o->f30 + ((unsigned char)((unsigned char *)0x8c285d54)[a1] << 2));
        if ((unsigned int)a1 < 3) {
            if (operation_8c0261f8((void *)t1, (unsigned char)((unsigned char *)0x8c285d58)[a1]) != 0) {
                v1->f2c = -1;
            } else {
                v1->f2c = -0xbfbfc0;
            }
            operation_8c103ac8(*(Item **)((char *)o->f30 + ((unsigned char)((unsigned char *)0x8c285d5b)[a1] << 2)), v1, a2, a3);
        }
        p = (Pair *)((char *)o + (a1 << 2) + 0x68);
        if ((unsigned short)a2 == p->a && (unsigned short)a3 == p->b) {
            return;
        }
        p->a = a2;
        p->b = a3;
        operation_8c10393c(v1, a2, a3);
    }
}
