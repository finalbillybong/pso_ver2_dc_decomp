/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c17fc24
 * function: operation_8c17fc24
 * language: c
 * reference size: 976 bytes
 * compiled size: 976 bytes (+0.0%)
 * differing lines: 388 of 360 reference instruction lines
 * differing bytes: 451
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Save {
    unsigned int crc;
    char unknown4[0x3200];
    short f3204;
    char f3206;
    char f3207;
    int f3208;
    char f320c[0x108];
} Save;
typedef struct Pair {
    int f00;
    int f04;
} Pair;
typedef struct Stamp {
    char unknown0[0xc];
} Stamp;
extern Save *g_8c4db9e8;
extern char *g_8c4dbb14;
extern int g_8c4dbb20;
extern Pair g_8c4dbaf8;
extern int operation_8c2324e0(void);
extern int operation_8c2324c0(void);
extern int operation_8c2324a0(void);
extern int operation_8c232480(void);
extern void memcpy_8c12b77c(Save *, char *, int);
extern void memset_8c12b880(Save *, int, int);
extern void decode_record_collection(Save *);
extern void decode_record_collection_8c17faec(Save *);
extern Save *game_malloc_8c011ecc(int);
extern void call_8c011ed8(Save *);
extern void call_8c18e044(void *, void (*)(), int, int, int);
extern void operation_8c17e104();
extern void operation_8c191504(int);
extern char operation_8c04c338(void);
extern int operation_8c087b9c(void);
extern void call_8c36d3ca(Stamp *);
extern void call_8c36d4c0(Stamp *, char *);
void operation_8c17fc24(void)
{
    Stamp stamp;
    char *base;
    Save *buf;
    unsigned int saved;
    unsigned int crc;
    int i;
    int j;
    unsigned int k;
    g_8c4dbb20 = 0;
    g_8c4dbaf8.f00 = g_8c4dbaf8.f04 = operation_8c2324e0();
    base = g_8c4dbb14;
    memcpy_8c12b77c(g_8c4db9e8, base + 0x280, 0x3314);
    decode_record_collection(g_8c4db9e8);
    buf = game_malloc_8c011ecc(0x3314);
    if (buf != 0) {
        call_8c18e044((char *)buf + 4, operation_8c17e104, 0, 0x80, 0x64);
    }
    *buf = *g_8c4db9e8;
    saved = buf->crc;
    buf->crc = 0;
    crc = -1;
    for (i = 0; i < 0x16fc; i++) {
        crc ^= (unsigned char)((unsigned char *)buf)[i];
        for (j = 0; j < 8; j++) {
            if ((crc & 1) != 0) {
                crc = crc >> 1 ^ 0xedb88320;
            } else {
                crc >>= 1;
            }
        }
    }
    if (saved == (crc ^ 0xffffffff)) goto end;
    g_8c4dbaf8.f00 = g_8c4dbaf8.f04 = operation_8c2324c0();
    memcpy_8c12b77c(g_8c4db9e8, base + 0x280, 0x3314);
    decode_record_collection(g_8c4db9e8);
    *buf = *g_8c4db9e8;
    saved = buf->crc;
    buf->crc = 0;
    crc = -1;
    for (i = 0; i < 0x16fc; i++) {
        crc ^= (unsigned char)((unsigned char *)buf)[i];
        for (j = 0; j < 8; j++) {
            if ((crc & 1) != 0) {
                crc = crc >> 1 ^ 0xedb88320;
            } else {
                crc >>= 1;
            }
        }
    }
    if (saved == (crc ^ 0xffffffff)) goto end;
    g_8c4dbaf8.f00 = g_8c4dbaf8.f04 = operation_8c2324a0();
    memcpy_8c12b77c(g_8c4db9e8, base + 0x280, 0x3314);
    decode_record_collection_8c17faec(g_8c4db9e8);
    *buf = *g_8c4db9e8;
    saved = buf->crc;
    buf->crc = 0;
    crc = -1;
    for (k = 0; k < 0x1550; k++) {
        crc ^= (unsigned char)((unsigned char *)buf)[k];
        for (j = 0; j < 8; j++) {
            if ((crc & 1) != 0) {
                crc = crc >> 1 ^ 0xedb88320;
            } else {
                crc >>= 1;
            }
        }
    }
    if (saved == (crc ^ 0xffffffff)) {
        g_8c4dbb20 = 1;
        goto end;
    }
    g_8c4dbaf8.f00 = g_8c4dbaf8.f04 = operation_8c232480();
    memcpy_8c12b77c(g_8c4db9e8, base + 0x280, 0x3314);
    decode_record_collection_8c17faec(g_8c4db9e8);
    *buf = *g_8c4db9e8;
    saved = buf->crc;
    buf->crc = 0;
    crc = -1;
    for (k = 0; k < 0x1550; k++) {
        crc ^= (unsigned char)((unsigned char *)buf)[k];
        for (j = 0; j < 8; j++) {
            if ((crc & 1) != 0) {
                crc = crc >> 1 ^ 0xedb88320;
            } else {
                crc >>= 1;
            }
        }
    }
    if (saved == (crc ^ 0xffffffff)) {
        g_8c4dbb20 = 1;
    } else {
        operation_8c191504(0);
        memset_8c12b880(g_8c4db9e8, 0, 0x3314);
        g_8c4db9e8->f3204 = -0x1e;
        g_8c4db9e8->f3206 = -10;
        g_8c4db9e8->f3207 = operation_8c04c338();
        g_8c4db9e8->f3208 = operation_8c087b9c();
        call_8c36d3ca(&stamp);
        call_8c36d4c0(&stamp, g_8c4db9e8->f320c);
        g_8c4dbb20 = 0;
    }
end:
    call_8c011ed8(buf);
}
