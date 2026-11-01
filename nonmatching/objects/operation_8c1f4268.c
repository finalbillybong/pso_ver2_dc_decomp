/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f4268
 * function: operation_8c1f4268
 * language: c
 * reference size: 640 bytes
 * compiled size: 656 bytes (+2.5%)
 * differing lines: 492 of 268 reference instruction lines
 * differing bytes: 595
 * provenance: generator draft (experimental generator, mode cast)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv324 S_vv324;
typedef struct S_vv325 S_vv325;
typedef struct S_vv338 S_vv338;
typedef struct S_x32784 S_x32784;
typedef struct S_x34352 S_x34352;
typedef struct S_x34576 S_x34576;
typedef struct S_x57680 S_x57680;
typedef struct S_x58576 S_x58576;
struct S_vv325 {
    char unknown0[0x4];
    int f04;
};
struct S_vv338 {
    short f00;
};
struct S_vv324 {
    char f00;
};
struct S_x57680 {
    char f00;
};
struct S_x58576 {
    char f00;
};
struct S_x32784 {
    char f00;
};
struct S_x34352 {
    char f00;
};
struct S_x34576 {
    char f00;
};
extern int call_8c1f33b8(int);
extern int call_8c1f765c(int);
extern int call_8c1f34f0(int);
extern int call_8c1f3534(int);
extern int call_8c1f3440(int, int);
void operation_8c1f4268(int a0, int a1, int a2, int a3)
{
    int v333;
    int v326;
    int v329;
    int v341;
    S_vv325 *v325;
    int v344;
    int v327;
    int v331;
    int v339;
    S_vv338 *v338;
    int v345;
    S_vv324 *v324;
    int v323;
    unsigned int v335;
    int v340;
    unsigned short v346;
    int t5;
    int t8;
    int v328;
    int v332;
    int v330;
    int v336;
    int t1;
    int t2;
    int t3;
    int t4;
    int t9;
    int t6;
    int t7;
    int t11;
    int v343;
    int t10;
    int v342;
    v324 = (S_vv324 *)a0;
    v326 = (int)a1;
    v328 = (int)a3;
    if (v328 >= 5) {
        v325 = (S_vv325 *)(void *)0x8c4e3824;
        v329 = (int)0;
        v335 = (unsigned int)0;
        if (!(v326 > 0)) {
            goto L_8c1f429c;
        }
L_8c1f4290:;
        v329 = (int)(v329 + 1);
        v339 = (int)(v335 + v325->f04);
        v335 = (unsigned int)v339;
        v325 = (S_vv325 *)((char *)v325 + 8);
        if (!(v329 >= v326)) {
            goto L_8c1f4290;
        }
L_8c1f429c:;
        v327 = (int)0;
        v333 = (int)v335;
        if (!(a2 > 0)) {
            goto L_8c1f42b0;
        }
L_8c1f42a4:;
        v327 = (int)(v327 + 1);
        v340 = (int)(v333 + v325->f04);
        v333 = (int)v340;
        v325 = (S_vv325 *)((char *)v325 + 8);
        if (!(v327 >= a2)) {
            goto L_8c1f42a4;
        }
L_8c1f42b0:;
        v323 = (int)(void *)0x8c4e374c;
        v338 = (S_vv338 *)&*(int *)((char *)0x8c4e374c + (v335 << 1));
        if (!(v335 >= v333)) {
            goto L_8c1f42c0;
        }
        goto L_8c1f44ce;
L_8c1f42c0:;
        if (v328 != 5) {
            goto L_8c1f42f0;
        }
        v341 = (int)(v338->f00 | 0x100);
        t1 = call_8c1f33b8(v341);
        t2 = call_8c1f765c(t1);
        v324->f00 = (unsigned int)(unsigned short)t2 >> 8;
        ((S_x57680 *)((int)v324 + 1))->f00 = t2;
        v323 = (int)((unsigned int)(unsigned short)t2 >> 8);
        v327 = (int)/* ? clobbered */ 0;
        v329 = (int)/* ? clobbered */ 0;
        v336 = (int)v341;
        v338 = (S_vv338 *)((char *)v338 + 2);
        goto L_8c1f4300;
L_8c1f42f0:;
        if (v328 != 6) {
            goto L_8c1f4300;
        }
        v323 = (int)v338->f00;
        v338 = (S_vv338 *)((char *)v338 + 2);
        ((S_x58576 *)(((char *)((int)v324 + 1) + 0x1)))->f00 = v323;
L_8c1f4300:;
        v335 = (unsigned int)(v335 + 1);
        if (!(v335 >= v333)) {
            goto L_8c1f42c0;
        }
        goto L_8c1f44ce;
    } else {
        v325 = (S_vv325 *)(void *)0x8c4e3824;
    }
    v342 = (int)0xde;
    v330 = (int)v342;
    v343 = (int)0xff00;
    v332 = (int)v343;
    v344 = (int)0;
    v345 = (int)&*(int *)((char *)&*(int *)((char *)((char *)v325 + 0x0) + (v326 << 3)) + (/* ? clobbered */ 0 << 3));
    v335 = (unsigned int)v345;
    v336 = (int)v344;
    v338 = (S_vv338 *)&*(int *)((char *)((char *)v325 + 0x0) + (v326 << 3));
    goto L_8c1f44c6;
L_8c1f436c:;
    v346 = (unsigned short)v338->f00;
    v331 = (int)(unsigned short)v346;
    if (v328 == 1) {
        if (((v331 & v332)) != 0) {
            v333 = (int)v346;
            goto L_8c1f43d8;
        }
        if (v331 != v330) {
            v333 = (int)v346;
            goto L_8c1f43b4;
        }
        t3 = call_8c1f34f0(v336);
        v333 = (int)v346;
        if (t3 == 0) {
            goto L_8c1f43b4;
        }
        if ((unsigned short)v336 != 0x2426) {
            goto L_8c1f43ae;
        }
        v333 = (int)0x2474;
        goto L_8c1f43d8;
L_8c1f43ae:;
        v333 = (int)(v336 + 1);
        goto L_8c1f43d8;
L_8c1f43b4:;
        if (v331 != 0xdf) {
            goto L_8c1f43d0;
        }
        t4 = call_8c1f3534(v336);
        if (t4 == 0) {
            goto L_8c1f43d0;
        }
        v333 = (int)(v336 + 2);
        goto L_8c1f43d8;
L_8c1f43d0:;
        t5 = call_8c1f33b8(v333);
        v333 = (int)t5;
L_8c1f43d8:;
        if (((unsigned short)v333 & v332) != 0x2500) {
            goto L_8c1f44a0;
        }
        v333 = (int)(v333 & 0x24ff);
        goto L_8c1f44a0;
    } else {
        v333 = (int)v346;
    }
    if (v328 == 2) {
        if (((v331 & v332)) != 0) {
            goto L_8c1f4466;
        }
        if (v331 != v330) {
            goto L_8c1f4422;
        }
        t6 = call_8c1f34f0(v336);
        if (t6 == 0) {
            goto L_8c1f4422;
        }
        if ((unsigned short)v336 != 0x2526) {
            goto L_8c1f441c;
        }
        v333 = (int)0x2574;
        goto L_8c1f4466;
L_8c1f441c:;
        v333 = (int)(v336 + 1);
        goto L_8c1f4466;
L_8c1f4422:;
        if (v331 != 0xdf) {
            goto L_8c1f445c;
        }
        t7 = call_8c1f3534(v336);
        if (t7 == 0) {
            goto L_8c1f445c;
        }
        v333 = (int)(v336 + 2);
        goto L_8c1f4466;
L_8c1f445c:;
        t8 = call_8c1f33b8((int)(0x100 | v333));
        v333 = (int)t8;
L_8c1f4466:;
        if (((unsigned short)v333 & v332) != 0x2400) {
            goto L_8c1f44a0;
        }
        v333 = (int)(v333 | 0x2500);
        goto L_8c1f44a0;
    }
    if (v328 == 3) {
        t10 = call_8c1f3440((int)(((char *)((char *)((int)v324 + 1) + 0x1) + 0x1) + -2 + -2 + -2 + -2), v333);
        goto L_8c1f44c4;
    }
    if (v328 != 4) {
        goto L_8c1f44a0;
    }
    if (((v331 & v332)) != 0) {
        goto L_8c1f44a0;
    }
    t9 = call_8c1f33b8((int)(0x100 | v333));
    v333 = (int)t9;
L_8c1f44a0:;
    if ((((unsigned short)v333 & v332)) != 0) {
        t11 = call_8c1f765c(v333);
        ((S_x32784 *)(((char *)((char *)((int)v324 + 1) + 0x1) + 0x1) + -2 + -2 + -2 + -2 + t10))->f00 = (unsigned int)(unsigned short)t11 >> 8;
        v336 = (int)v333;
        v333 = (int)t11;
    } else {
        v336 = (int)v333;
    }
    ((S_x34352 *)(((char *)(((char *)((char *)((int)v324 + 1) + 0x1) + 0x1) + -2 + -2 + -2 + -2 + t10) + 0x1)))->f00 = v333;
L_8c1f44c4:;
    v338 = (S_vv338 *)((char *)v338 + 8);
L_8c1f44c6:;
    if (!((int)v338 >= v335)) {
        goto L_8c1f436c;
    }
L_8c1f44ce:;
    ((S_x34576 *)(((char *)((char *)(((char *)((char *)((int)v324 + 1) + 0x1) + 0x1) + -2 + -2 + -2 + -2 + t10) + 0x1) + 0x1)))->f00 = 0;
}
