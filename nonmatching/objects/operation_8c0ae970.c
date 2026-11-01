/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ae970
 * function: operation_8c0ae970
 * language: c
 * reference size: 2352 bytes
 * compiled size: 2356 bytes (+0.2%)
 * differing lines: 364 of 952 reference instruction lines
 * differing bytes: 2112
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in stack
 *   frame and spills, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Elem {
    unsigned short id;
    short bone;
    int f04;
} Elem;
typedef struct List {
    int n;
    Elem e[11];
} List;
typedef struct Node {
    unsigned short id;
    short bone;
} Node;
typedef struct Bone {
    char unknown0[0x1c];
    Vector3 pos;
    char unknown28[0x4];
} Bone;
typedef struct Target {
    char unknown0[0xdc];
    Bone *bones;
} Target;
typedef struct Owner {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2];
    char unknown24[0x18];
    Vector3 f3c;
    char unknown48[0x1c];
    void *f64;
} Owner;
extern int g_8c418248;
extern void call_8c18e044(void *, void (*)(), int, int, int);
extern short operation_8c2478a8(void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, Vector3 *, Vector3 *);
extern void njPopMatrix_8c38accc(int);
extern void operation_8c0246a0(Owner *, Vector3 *);
extern Target *lookup_object_by_id(unsigned short);
extern char call_8c247730(void *, int);
extern void create_effect_b0ffc(Owner *, Vector3 *, Vector3 *, int);
extern void create_effect_b0fac(Owner *, Vector3 *, void *, int);
extern void TTecGiFoie_create_8c0b2190(Owner *, Vector3 *, int);
extern void TTecRaFoie_create_8c0b7ca0(Owner *, Vector3 *, List *, int);
extern void TTecBarta_create_8c0ad2f8(Owner *, Vector3 *, Vector3 *, int);
extern void TTecBarta_create_8c0ad2a8(Owner *, Vector3 *, void *, int);
extern void TTecGiBarta_create_8c0b1af0(Owner *, Vector3 *, Vector3 *, int);
extern void TTecGiBarta_create_8c0b1aa0(Owner *, Vector3 *, void *, int);
extern void create_effect_b03c8_8c0b7640(Owner *, Vector3 *, int);
extern void TTecZonde_ctor_8c0bb6fc(Owner *, Vector3 *, List *, int);
extern void TTecGiZonde_create_8c0b29c8(Owner *, Vector3 *, List *, int);
extern void TTecRaZonde_create_8c0b8c68(Owner *, Vector3 *, int);
extern void TTecGrants_ctor_8c0b3178(Owner *, Vector3 *, List *, int);
extern void TTecDeband_create_8c0b040c(Owner *, Vector3 *, List *, int);
extern void TTecJelin_create_8c0b3b80(Owner *, Vector3 *, Vector3 *, int);
extern void TTecZarua_create_8c0bada4(Owner *, Vector3 *, Vector3 *, int);
extern void TTecSifta_create_8c0ba96c(Owner *, Vector3 *, List *, int);
extern void TTecLuker_create_8c0b44f4(Owner *, Vector3 *, Vector3 *, int);
extern void TTecResta_create_8c0b9488(Owner *, Vector3 *, List *, int);
extern void TTecAnti_create_8c0ac674(Owner *, Vector3 *, List *, int);
extern void TTecReverser_ctor_8c0abf80(Owner *, Vector3 *, List *, int);
extern void TTecMegid_create_8c0b55f0(Owner *, Vector3 *, Vector3 *, int);
extern void TTecMegid_create_8c0b55a0(Owner *, Vector3 *, void *, int);
extern void operation_8c07de9c();
void operation_8c0ae970(int a0, int a1, Owner *a2)
{
    Vector3 tgt;
    Vector3 at;
    Vector3 pos;
    List l;
    Node *nodes;
    char *list;
    int q_a0 = a0;
    int n;
    Target *t;
    int i;
    unsigned short none;
    call_8c18e044(&l.e, operation_8c07de9c, 0, 8, 0xb);
    pos.x = 0.0f;
    l.n = 0;
    pos.y = 0.0f;
    pos.z = 100.0f;
    if (a2 == 0) return;
    list = (char *)a2 + 0x3bc;
    nodes = (Node *)(list + 0x20);
    if (nodes == 0) return;
    n = operation_8c2478a8(list);
    njPushMatrix_8c38ade4((void *)0x8c400500);
    njRotateY_8c37df90(0, a2->f64);
    call_8c3be280(0, &pos, &pos);
    njPopMatrix_8c38accc(1);
    pos.x += a2->f3c.x;
    pos.y += a2->f3c.y;
    pos.z += a2->f3c.z;
    operation_8c0246a0(a2, &at);
    switch (q_a0) {
    case 0:
        if (n != 0) {
            if (nodes->id == 0xffff) return;
            t = lookup_object_by_id(nodes->id);
            if (t == 0) return;
            if (t->bones == 0) return;
            tgt = *(Vector3 *)((char *)&t->bones->pos + nodes->bone * 0x2c);
            create_effect_b0ffc(a2, &at, &tgt, call_8c247730(list, 0));
            return;
        }
        create_effect_b0fac(a2, &at, a2->f64, call_8c247730(list, 0));
        return;
    case 1:
        TTecGiFoie_create_8c0b2190(a2, &at, call_8c247730(list, 1));
        return;
    case 2:
        none = 0xffff;
        l.n = 0;
        for (i = 0; i < n; i++, nodes++) {
            if (nodes == 0) break;
            if (nodes->id == none) break;
            *(unsigned short *)((char *)&l.e[0].id + (i << 3)) = nodes->id;
            *(short *)((char *)&l.e[0].bone + (i << 3)) = nodes->bone;
        }
        l.n = n;
        if (l.n == 0) return;
        TTecRaFoie_create_8c0b7ca0(a2, &at, &l, call_8c247730(list, 2));
        return;
    case 3:
        if (n != 0) {
            if (nodes->id == 0xffff) return;
            t = lookup_object_by_id(nodes->id);
            if (t == 0) return;
            if (t->bones == 0) return;
            tgt = *(Vector3 *)((char *)&t->bones->pos + nodes->bone * 0x2c);
            TTecBarta_create_8c0ad2f8(a2, &a2->f3c, &tgt, call_8c247730(list, 3));
            return;
        }
        TTecBarta_create_8c0ad2a8(a2, &a2->f3c, a2->f64, call_8c247730(list, 3));
        return;
    case 4:
        if (n != 0) {
            if (nodes->id == 0xffff) return;
            t = lookup_object_by_id(nodes->id);
            if (t == 0) return;
            if (t->bones == 0) return;
            tgt = *(Vector3 *)((char *)&t->bones->pos + nodes->bone * 0x2c);
            TTecGiBarta_create_8c0b1af0(a2, &at, &tgt, call_8c247730(list, 4));
            return;
        }
        TTecGiBarta_create_8c0b1aa0(a2, &at, a2->f64, call_8c247730(list, 4));
        return;
    case 5:
        create_effect_b03c8_8c0b7640(a2, &at, call_8c247730(list, 5));
        return;
    case 6:
        none = 0xffff;
        l.n = 0;
        for (i = 0; i < n; i++, nodes++) {
            if (nodes == 0) break;
            if (nodes->id == none) break;
            *(unsigned short *)((char *)&l.e[0].id + (i << 3)) = nodes->id;
            *(short *)((char *)&l.e[0].bone + (i << 3)) = nodes->bone;
        }
        l.n = n;
        if (l.n == 0) return;
        TTecZonde_ctor_8c0bb6fc(a2, &at, &l, call_8c247730(list, 6));
        return;
    case 7:
        none = 0xffff;
        l.n = 0;
        for (i = 0; i < n; i++, nodes++) {
            if (nodes == 0) break;
            if (nodes->id == none) break;
            *(unsigned short *)((char *)&l.e[0].id + (i << 3)) = nodes->id;
            *(short *)((char *)&l.e[0].bone + (i << 3)) = nodes->bone;
        }
        l.n = n;
        if (l.n == 0) return;
        TTecGiZonde_create_8c0b29c8(a2, &at, &l, call_8c247730(list, 7));
        return;
    case 8:
        TTecRaZonde_create_8c0b8c68(a2, &at, call_8c247730(list, 8));
        return;
    case 9:
        none = 0xffff;
        l.n = 0;
        for (i = 0; i < n; i++, nodes++) {
            if (nodes == 0) break;
            if (nodes->id == none) break;
            *(unsigned short *)((char *)&l.e[0].id + (i << 3)) = nodes->id;
            *(short *)((char *)&l.e[0].bone + (i << 3)) = nodes->bone;
        }
        l.n = n;
        if (l.n == 0) return;
        TTecGrants_ctor_8c0b3178(a2, &at, &l, call_8c247730(list, 9));
        return;
    case 10:
        none = 0xffff;
        l.n = 0;
        for (i = 0; i < n; i++, nodes++) {
            if (nodes == 0) break;
            if (nodes->id == none) break;
            *(unsigned short *)((char *)&l.e[0].id + (i << 3)) = nodes->id;
            *(short *)((char *)&l.e[0].bone + (i << 3)) = nodes->bone;
        }
        l.n = n;
        TTecDeband_create_8c0b040c(a2, &at, &l, call_8c247730(list, 10));
        return;
    case 11:
        if (n == 0) return;
        if (nodes->id == 0xffff) return;
        t = lookup_object_by_id(nodes->id);
        if (t == 0) return;
        if (t->bones == 0) return;
        tgt = *(Vector3 *)((char *)&t->bones->pos + nodes->bone * 0x2c);
        TTecJelin_create_8c0b3b80(a2, &at, &tgt, call_8c247730(list, 11));
        return;
    case 12:
        if (n == 0) return;
        if (nodes->id == 0xffff) return;
        t = lookup_object_by_id(nodes->id);
        if (t == 0) return;
        if (t->bones == 0) return;
        tgt = *(Vector3 *)((char *)&t->bones->pos + nodes->bone * 0x2c);
        TTecZarua_create_8c0bada4(a2, &at, &tgt, call_8c247730(list, 12));
        return;
    case 13:
        none = 0xffff;
        l.n = 0;
        for (i = 0; i < n; i++, nodes++) {
            if (nodes == 0) break;
            if (nodes->id == none) break;
            *(unsigned short *)((char *)&l.e[0].id + (i << 3)) = nodes->id;
            *(short *)((char *)&l.e[0].bone + (i << 3)) = nodes->bone;
        }
        l.n = n;
        TTecSifta_create_8c0ba96c(a2, &at, &l, call_8c247730(list, 13));
        return;
    case 14:
        if (g_8c418248 != a2->f20) return;
        TTecLuker_create_8c0b44f4(a2, &at, &pos, call_8c247730(list, 14));
        return;
    case 15:
        none = 0xffff;
        l.n = 0;
        for (i = 0; i < n; i++, nodes++) {
            if (nodes == 0) break;
            if (nodes->id == none) break;
            *(unsigned short *)((char *)&l.e[0].id + (i << 3)) = nodes->id;
            *(short *)((char *)&l.e[0].bone + (i << 3)) = nodes->bone;
        }
        l.n = n;
        TTecResta_create_8c0b9488(a2, &at, &l, call_8c247730(list, 15));
        return;
    case 16:
        none = 0xffff;
        l.n = 0;
        for (i = 0; i < n; i++, nodes++) {
            if (nodes == 0) break;
            if (nodes->id == none) break;
            *(unsigned short *)((char *)&l.e[0].id + (i << 3)) = nodes->id;
            *(short *)((char *)&l.e[0].bone + (i << 3)) = nodes->bone;
        }
        l.n = n;
        TTecAnti_create_8c0ac674(a2, &at, &l, call_8c247730(list, 16));
        return;
    case 17:
        none = 0xffff;
        l.n = 0;
        for (i = 0; i < n; i++, nodes++) {
            if (nodes == 0) break;
            if (nodes->id == none) break;
            *(unsigned short *)((char *)&l.e[0].id + (i << 3)) = nodes->id;
            *(short *)((char *)&l.e[0].bone + (i << 3)) = nodes->bone;
        }
        l.n = n;
        if (l.n == 0) return;
        TTecReverser_ctor_8c0abf80(a2, &at, &l, call_8c247730(list, 17));
        return;
    case 18:
        if (n != 0) {
            if (nodes->id == 0xffff) return;
            t = lookup_object_by_id(nodes->id);
            if (t == 0) return;
            if (t->bones == 0) return;
            tgt = *(Vector3 *)((char *)&t->bones->pos + nodes->bone * 0x2c);
            TTecMegid_create_8c0b55f0(a2, &at, &tgt, call_8c247730(list, 18));
            return;
        }
        TTecMegid_create_8c0b55a0(a2, &at, a2->f64, call_8c247730(list, 18));
        return;
    }
}
