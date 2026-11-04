/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1424e0
 * function: TBoss2Tentacle_update_8c1424e0
 * language: c
 * reference size: 1964 bytes
 * compiled size: 1964 bytes (+0.0%)
 * differing lines: 124 of 720 reference instruction lines
 * differing bytes: 138
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TBoss2Tentacle.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d9ea4 S_g8c4d9ea4;
typedef struct Object Object;
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_12c Arg0_12c;
typedef struct S_x95904 S_x95904;
typedef struct S_x96016 S_x96016;
typedef struct S_x98816 S_x98816;
typedef struct S_x99360 S_x99360;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
    char unknown2c[0x4];
    int f30;
    char unknown34[0xb0];
    int fe4;
    char unknowne8[0x2c];
    Arg0_114 *f114;
    float f118;
    float f11c;
    int f120;
    int f124;
    int f128;
    Arg0_12c *f12c;
    Vector3 f130;
    float f13c;
    float f140;
    char unknown144[0xc];
    int f150;
    float f154;
    int f158;
};
struct S_x98816 {
    Vector3 f00;
};
struct S_x99360 {
    Vector3 f00;
};
struct S_g8c4d9ea4 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
struct S_x95904 {
    float f00;
};
struct S_x96016 {
    float f00;
};
extern S_g8c4d9ea4 *g_8c4d9ea4;
extern char g_8c4da184[];
extern float njSin_8c37eb0c(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void njUnitMatrix_8c37b5c4(int);
extern void call_8c38a714(int, void *);
extern void call_8c3be280(int, Frame *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float normalize_xz_checked(void *);
extern float call_8c130334(float, float);
extern int operation_8c143048(void);
extern void operation_8c144884(void *, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void call_8c1422b8(Object *, float);
extern void operation_8c1424dc(Object *);
void TBoss2Tentacle_update_8c1424e0(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v7;
    float v21;
    float v22;
    float v26;
    float v27;
    int v30;
    int v29;
    int v40;
    int v43;
    int v54;
    int v55;
    float v83;
    float v84;
    int v86;
    int v87;
    int v89;
    float v92;
    float v93;
    float t1;
    float t2;
    float t3;
    int t4;
    if (o->f24 == o->f20) {
    } else {
        switch (o->f24) {
        case 0:
            o->f124 = 0;
            o->f120 = 0;
            break;
        case 1:
            o->f120 = (int)(*(int *)((o->f30 << 2) + 0x8c286268));
            o->f124 = 0;
            break;
        case 4:
            o->f120 = 0;
            o->f124 = 0x4000;
            break;
        case 2:
            o->f120 = (int)(*(int *)((o->f30 << 2) + 0x8c286268));
            o->f124 = 0x4000;
            o->f28 = 0;
            break;
        case 3:
            o->f120 = 0;
            o->f124 = 0;
            o->f28 = 0;
            v7 = (int)0;
            goto L_8c142612;
            v1 = (int)0;
L_8c1425ec:;
            v2 = (int)(v1 << 2);
            *(Vector3 *)&((S_x98816 *)((char *)(int *)((char *)o + 0x34) + v1 * 0xc))->f00 = *(Vector3 *)&((S_x99360 *)(v1 * 0xc + g_8c4da184))->f00;
            *(int *)((char *)((char *)o + 0xdc) + (v2)) = (int)(*(int *)((char *)0x8c4da22c + (v2)));
            v7 = (int)(v1 + 1);
L_8c142612:;
            v1 = (int)v7;
            if (0xe > v7) {
                goto L_8c1425ec;
            }
            o->f13c = 20.0f;
            o->f150 = 0;
            o->f140 = 0.0f;
            o->f154 = 1.0f;
            break;
        case 5:
            o->f120 = 0;
            o->f124 = 0x4000;
        }
        o->f20 = (int)(o->f24);
    }
    switch (o->f20) {
    case 0:
        v21 = (float)(float)(unsigned int)(g_8c4d9ea4->f04 + -1);
        o->f118 += o->f11c;
        v22 = (float)o->f118;
        if (!(v21 > v22)) {
            o->f118 = v22 - v21;
        }
        *(int *)((char *)o + 0x12c) += o->f128;
        t1 = njSin_8c37eb0c((void *)(o->f12c));
        o->f120 = (int)((t1 + 1.0f) * 1365.0f);
        if (((o->f30 & 1)) != 0) {
            return;
        }
        o->f120 = -(int)(o->f120);
        return;
    case 1:
        v26 = (float)(float)(unsigned int)(g_8c4d9ea4->f04 + -1);
        o->f118 += o->f11c;
        v27 = (float)o->f118;
        if (!(v26 > v27)) {
            o->f118 = v27 - v26;
        }
        *(int *)((char *)o + 0x124) += 0x280;
        v30 = (int)o->f124;
        v29 = (int)0x4000;
        if (!(v30 > v29)) {
            return;
        }
        o->f124 = (int)(v29);
        return;
    case 2:
        if (o->f120 > 0) {
            o->f120 -= 0x80;
            if (o->f120 >= 0) {
                goto L_8c1427e0;
            }
            o->f120 = 0;
        } else {
            o->f120 += 0x80;
            if (o->f120 >= 0) {
                o->f120 = 0;
            }
        }
L_8c1427e0:;
        if (o->f120 != 0) {
            return;
        }
        o->f24 = 3;
        return;
    case 3:
        (&frame)->f00.f00 = 0.0f;
        (&frame)->f00.f04 = 0.0f;
        (&frame)->f00.f08 = 0.0f;
        njPushMatrixEx_8c38ae68();
        njUnitMatrix_8c37b5c4(0);
        call_8c38a714(0, (void *)(o->f114));
        call_8c3be280(0, (Frame *)((&frame)), (void *)(((char *)o + 0x144)));
        njPopMatrixEx_8c38ad10();
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f130;
        vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x144)));
        t3 = normalize_xz_checked((void *)(&frame));
        t2 = call_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
        o->f120 = (int)(t2 * 65536.0f / 6.28318405f) + 0x8000;
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f130;
        if (o->f28 != 0) {
            if (o->f28 == 1) {
                goto L_8c142968;
            }
            if (o->f28 == 2) {
                goto L_8c142a60;
            }
            if (o->f28 == 3) {
                goto L_8c142aa8;
            }
            return;
        }
        o->f154 -= 0.1f;
        if (!(o->f154 > 0.1f)) {
            o->f154 = 0.1f;
            o->f150 = 0;
            o->f28 = 1;
        }
        v43 = (int)2;
        goto L_8c142952;
        v40 = (int)2;
L_8c14293c:;
        ((S_x95904 *)((char *)(int *)((char *)o + 0x34) + v40 * 0xc))->f00 = o->f154 * ((S_x96016 *)(v40 * 0xc + g_8c4da184))->f00;
        v43 = (int)(v40 + 1);
L_8c142952:;
        v40 = (int)v43;
        if (0xb >= v43) {
            goto L_8c14293c;
        }
        o->fe4 = 0x4000;
        return;
L_8c142968:;
        o->f13c += 8.0f;
        if (o->f13c > t3) {
            o->f13c = t3;
            o->f150 = 0;
            o->f28 = 2;
            t4 = operation_8c143048();
            if (t4 != 0) {
                operation_8c144884((void *)t4, (int)(&(&frame)->f0c));
            }
            play_se_8c05fbf8(0x30007, (void *)(&(&frame)->f0c), 0, 0);
        }
        if (!((t3 * 0.4f) > o->f13c)) {
            o->f140 = 1.0f;
        } else {
            o->f140 = o->f13c / (t3 * 0.4f);
        }
        v54 = (int)*(int *)((o->f30 << 2) + 0x8c286278);
        if (v54 > 0) {
            *(int *)((char *)o + 0x124) += 0x100;
            v55 = (int)o->f124;
            if (!(v55 > v54)) {
                goto L_8c142a46;
            }
            o->f124 = (int)(v54);
        } else {
            *(int *)((char *)o + 0x124) -= 0x100;
            if (v54 > o->f124) {
                o->f124 = (int)(v54);
            }
        }
L_8c142a46:;
        call_8c1422b8(o, t3);
        return;
L_8c142a60:;
        *(int *)((char *)o + 0x150) += 1;
        if (o->f150 > o->f158) {
            o->f150 = 0;
            o->f154 = 1.0f;
            o->f28 = 3;
        }
        operation_8c1424dc(o);
        return;
L_8c142aa8:;
        o->f13c -= 8.0f;
        if (20.0f > o->f13c) {
            o->f13c = 20.0f;
            o->f28 = 2;
            o->f24 = 4;
        }
        if (!((t3 * 0.4f) > o->f13c)) {
            o->f140 = 1.0f;
        } else {
            o->f140 = o->f13c / (t3 * 0.4f);
        }
        if (o->f124 > 0) {
            o->f124 -= 0x100;
            if (o->f124 >= 0) {
                goto L_8c142b40;
            }
            o->f124 = 0;
        } else {
            o->f124 += 0x100;
            if (o->f124 >= 0) {
                o->f124 = 0;
            }
        }
L_8c142b40:;
        call_8c1422b8(o, t3);
        return;
    case 4:
        v83 = (float)(float)(unsigned int)(g_8c4d9ea4->f04 + -1);
        o->f118 += o->f11c;
        v84 = (float)o->f118;
        if (!(v83 > v84)) {
            o->f118 = v84 - v83;
        }
        v86 = (int)*(int *)((o->f30 << 2) + 0x8c286268);
        if (v86 > 0) {
            *(int *)((char *)o + 0x120) += 0x80;
            v87 = (int)o->f120;
            if (!(v87 > v86)) {
                return;
            }
            o->f120 = (int)(v86);
            return;
        }
        *(int *)((char *)o + 0x120) -= 0x80;
        v89 = (int)o->f120;
        if (!(v86 > v89)) {
            return;
        }
        o->f120 = (int)(v86);
        return;
    case 5:
        v92 = (float)(float)(unsigned int)(g_8c4d9ea4->f04 + -1);
        o->f118 += o->f11c;
        v93 = (float)o->f118;
        if (!(v92 > v93)) {
            o->f118 = v93 - v92;
        }
        if (o->f124 > 0) {
            o->f124 -= 0x280;
            if (o->f124 >= 0) {
                goto L_8c142c60;
            }
            o->f124 = 0;
        } else {
            o->f124 += 0x280;
            if (o->f124 >= 0) {
                o->f124 = 0;
            }
        }
L_8c142c60:;
        if (o->f124 == 0) {
            o->f24 = 0;
        }
        return;
    }
}
