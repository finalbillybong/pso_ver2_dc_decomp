/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16aebc
 * function: operation_8c16aebc
 * language: c
 * reference size: 876 bytes
 * compiled size: 876 bytes (+0.0%)
 * differing lines: 252 of 359 reference instruction lines
 * differing bytes: 146
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Node Node;
typedef struct Child Child;
typedef struct Entry Entry;
typedef struct List List;
typedef struct Object Object;
struct Node {
    int f00;
    char unknown4[0x8];
    Node *f0c;
    int f10;
    Node *f14;
    char unknown18[0x8];
    Child *f20;
};
struct Child {
    char unknown0[0xec];
    int fec;
    char unknownf0[0x44];
    unsigned char f134;
    char unknown135[0x1];
    unsigned char f136;
};
struct Entry {
    int f00;
    Child *f04;
};
struct List {
    int f00;
    Entry *f04;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x18a];
    Node *f1ac;
};
extern int g_8c317ab0;
extern int hierarchy_is_active(void *);
extern List *game_malloc_8c011ecc(int);
extern int operator_new_8c18de4c(int);
extern Entry *call_8c18e130(int, void *, int, int, int);
extern void call_8c18df98(Entry *, int);
extern void call_8c011ed8(List *);
extern void operation_8c16ae6c(List *);
extern void operation_8c16b228();
static inline int is_node(Node *n)
{
    int t;
    int r;
    t = n->f00 == g_8c317ab0;
    r = 0;
    if (t != 0) {
        if (hierarchy_is_active(n) != 0) {
            r = 1;
        }
    }
    return r;
}
static inline Child *active_child(Node *n)
{
    if (hierarchy_is_active(n->f20) == 0) {
        return 0;
    }
    return n->f20;
}
static inline void free_list(List *l)
{
    if (l != 0) {
        if (l->f04 != 0) {
            call_8c18df98(l->f04, 0);
        }
        call_8c011ed8(l);
    }
}
int operation_8c16aebc(Object *o)
{
    List *l;
    int n;
    int k;
    if (o->f1ac == 0) {
        return 0;
    }
    if (is_node(o->f1ac) == 0) {
        return 0;
    }
    if (o->f20 > 0x1e || 1 > o->f20) {
        return 0;
    }
    l = game_malloc_8c011ecc(8);
    if (l != 0) {
        l->f00 = o->f20;
        n = l->f00;
        l->f04 = call_8c18e130(operator_new_8c18de4c((n << 3) + 8), operation_8c16b228, 0, 8, n);
    }
    if (l == 0) {
        return 0;
    }
    if (l->f04 == 0) {
        free_list(l);
        return 0;
    }
    {
        Node *node;
        Entry *p;
        int cnt;
        p = l->f04;
        cnt = 0;
        for (node = o->f1ac->f14; node != 0; node = node->f0c) {
            if (is_node(node) != 0 && active_child(node) != 0) {
                p++;
                cnt++;
            }
        }
        if (cnt != o->f20) {
            free_list(l);
            return 0;
        }
    }
    {
        Node *node;
        Entry *p;
        Child *c;
        int off;
        int f;
        int fec;
        k = 0;
        p = l->f04;
        off = 0x136;
        for (node = o->f1ac->f14; node != 0; node = node->f0c) {
            if (is_node(node) != 0) {
                c = active_child(node);
                if (c != 0) {
                    p->f04 = c;
                    p->f00 = 0;
                    p->f00 = (c->f134 << 24 & 0xff000000) | p->f00;
                    if (c->f134 == 1) {
                        p->f00 = (*((unsigned char *)c + off) << 16 & 0xff0000) | p->f00;
                    } else {
                        p->f00 = (unsigned char)*((unsigned char *)c + off) | p->f00;
                    }
                    fec = c->fec;
                    f = 0;
                    if ((fec & 4) != 0 && (fec & 8) != 0) {
                        f = 1;
                    }
                    if (f == 0) {
                        p->f00 |= 0x100;
                    }
                    p++;
                    k++;
                }
            }
        }
    }
    operation_8c16ae6c(l);
    {
        Node *node;
        Entry *p;
        int cnt;
        cnt = 0;
        p = l->f04;
        for (node = o->f1ac->f14; node != 0; node = node->f0c) {
            if (is_node(node) != 0 && active_child(node) != 0) {
                if (p->f04 != 0) {
                    p++;
                    cnt++;
                }
            }
        }
        if (k != cnt) {
            free_list(l);
            return 0;
        }
    }
    {
        Node *node;
        Entry *p;
        p = l->f04;
        for (node = o->f1ac->f14; node != 0; node = node->f0c) {
            if (is_node(node) != 0 && active_child(node) != 0) {
                if (p->f04 != 0) {
                    node->f20 = p->f04;
                    p++;
                }
            }
        }
    }
    free_list(l);
    return 1;
}
