/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b47d8
 * function: handle_6x68_set_telepipe_state_8c0b47d8
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 2 of 93 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_8 Arg0_8;
struct Object {
    char unknown0[0x4];
    unsigned short f04;
    short f06;
    Arg0_8 *f08;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int lookup_object_by_id(unsigned short);
extern int effect_event_is_distant(void *, short, void *, short);
extern void initialize_effect_event(void *, unsigned short, short, void *, unsigned int);
extern S_c8c021ef8 *lookup_low_id(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TTecLuker_ctor_8c0b3df8(int, int, int, int, int);
void handle_6x68_set_telepipe_state_8c0b47d8(Object *o)
{
    int t1;
    unsigned short v177;
    S_c8c021ef8 *t3;
    int t2;
    int v1;
    S_c8c021ef8 *t4;
    int t5;
    if (o->f04 != 0xffff) {
        t1 = lookup_object_by_id(o->f04);
        if (t1 != 0) {
            if ((unsigned int)4 > o->f04) {
                v1 = (int)(t1 + 0x7b8);
                t2 = effect_event_is_distant((void *)v1, o->f06, (void *)(((char *)o + 0xc)), o->f04);
                if (t2 != 0) {
                    initialize_effect_event((void *)v1, (unsigned short)(o->f04), o->f06, (void *)(((char *)o + 0xc)), (unsigned int)(o->f08));
                    v177 = (unsigned short)o->f04;
                    if (v177 != (int)(g_8c418248)) {
                        t3 = lookup_low_id(v177);
                        t4 = lookup_low_id((int)g_8c418248);
                        if (t3 != 0 && t4 != 0 && t3->f37c == t4->f37c) {
                            t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x12c);
                            if (t5 != 0) {
                                TTecLuker_ctor_8c0b3df8(t5, t1, (int)(t1 + 0x3c), (int)(t1 + 0x3c), 0);
                            }
                        }
                    }
                }
            }
        }
    }
}
