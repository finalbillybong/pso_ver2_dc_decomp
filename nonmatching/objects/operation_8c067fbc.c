/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c067fbc
 * function: operation_8c067fbc
 * language: c
 * reference size: 692 bytes
 * compiled size: 692 bytes (+0.0%)
 * differing lines: 6 of 221 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction or operand order; review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Unit {
    char unknown0[0x34];
    int f34;
    char unknown38[0x8];
    float f40;
    char unknown44[0x584];
    int f5c8;
} Unit;
typedef struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x38c];
    int f698;
    char unknown69c[0x8c];
    int f728;
    unsigned short f72c;
} Object;
extern int g_8c418248;
extern Unit *lookup_low_id(int);
extern void operation_8c0220a4(Unit *);
extern void operation_8c02a5a8(int, int, int);
extern void call_8c06741c(Object *);
void operation_8c067fbc(Object *o)
{
    Unit *u;
    int id;
    int low;
    int flag;
    u = lookup_low_id(o->f72c & 0xffff);
    if (u != 0) {
        operation_8c0220a4(u);
        u->f34 &= -0x2000001;
        u->f5c8 = 0;
        u->f40 = 0.0f;
        id = (unsigned short)o->f72c;
        if ((unsigned short)id == g_8c418248 && o->f30a == 0x15) {
            operation_8c02a5a8(0xffff, id, 0);
        }
    }
    flag = 0;
    o->f728 = 0;
    if (o->f30a == 0x15) {
        return;
    }
    low = 0x32 > o->f698;
    if (low != 0) {
        o->f698 = 0;
        switch (o->f30a) {
        case 0x17:
        case 0x18:
            o->f698 = 0;
            flag = 1;
            break;
        case 3:
            o->f698 = 2;
            break;
        case 4:
            o->f698 = 3;
            break;
        case 5:
            o->f698 = 4;
            break;
        case 0x19:
        case 0x1a:
            o->f698 = 6;
            flag = 1;
            break;
        case 7:
            o->f698 = 6;
            break;
        case 8:
            o->f698 = 7;
            break;
        case 9:
            o->f698 = 0;
            break;
        }
    } else {
        o->f698 = 0;
        switch (o->f30a) {
        case 0x17:
        case 0x18:
            o->f698 = 0;
            flag = 1;
            break;
        case 3:
        case 4:
            o->f698 = 0;
            break;
        case 5:
            o->f698 = 1;
            break;
        case 0x19:
        case 0x1a:
            o->f698 = 10;
            flag = 1;
            break;
        case 7:
            o->f698 = 10;
            break;
        case 8:
        case 0x13:
            o->f698 = 11;
            break;
        case 0xf:
            o->f698 = 2;
            break;
        case 0x24:
        case 0x25:
            o->f698 = 9;
            flag = 1;
            break;
        case 9:
            o->f698 = 0;
            break;
        }
        o->f698 += 0x32;
    }
    if (flag != 0) {
        call_8c06741c(o);
    }
}
