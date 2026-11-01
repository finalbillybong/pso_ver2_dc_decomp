/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20c408
 * function: operation_8c20c408
 * language: c
 * reference size: 3892 bytes
 * compiled size: 3964 bytes (+1.8%)
 * differing lines: 1756 of 1534 reference instruction lines
 * differing bytes: 3540
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +72 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c5051f0 S_g8c5051f0;
typedef struct S_g8c505200 S_g8c505200;
typedef struct S_g8c50520c S_g8c50520c;
typedef struct S_g8c505218 S_g8c505218;
typedef struct S_g8c505218_0 S_g8c505218_0;
typedef struct S_g8c50521c S_g8c50521c;
typedef struct S_g8c505220 S_g8c505220;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv310 S_vv310;
typedef struct S_vv310_0 S_vv310_0;
typedef struct S_vv359 S_vv359;
typedef struct S_vv359_10 S_vv359_10;
typedef struct S_vv359_8 S_vv359_8;
typedef struct S_vv359_s8 S_vv359_s8;
struct Frame {
    int f00;
    int f04;
    char unknown8[0x18];
};
struct Object {
    short tag;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
};
struct Arg1 {
    char f00;
};
struct S_g8c505200 {
    char unknown0[0x690];
    int f690;
    char unknown694[0x8];
    int f69c;
    char unknown6a0[0x890];
    int ff30;
    int ff34;
    int ff38;
    char unknownf3c[0x258];
    int f1194;
    int f1198;
};
struct S_g8c505218 {
    S_g8c505218_0 *f00;
};
struct S_vv310 {
    S_vv310_0 *f00;
    int f04;
};
struct S_vv359_s8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv359 {
    char unknown0[0x8];
    S_vv359_8 *f08;
    char unknownc[0x4];
    S_vv359_10 *f10;
};
extern S_g8c5051f0 *g_8c5051f0;
extern S_g8c505200 *g_8c505200;
extern S_g8c50520c *g_8c50520c;
extern S_g8c505218 *g_8c505218;
extern S_g8c50521c *g_8c50521c;
extern S_g8c505220 *g_8c505220;
extern int operation_8c20b040(int);
extern void call_8c20b5b8(Object *, short, int, Arg1 *, Frame *);
extern void operation_8c20b404(int, int, void *);
extern int strlen_8c12b0cc(int);
extern void strncpy_8c12b154(void *, void *, int);
extern void operation_8c20b508(void *, void *);
extern int call_8c20c408(void *, Arg1 *, int);
extern int operation_8c20b458(void *, void *);
extern int operation_8c18ee00(char);
int operation_8c20c408(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    int v9;
    int v320;
    int v3;
    int v4;
    int v7;
    int t24;
    int v11;
    int v12;
    short v17;
    int t25;
    int v19;
    int v23;
    int v25;
    int v26;
    int v84;
    int v88;
    int v54;
    int v55;
    int v57;
    int v58;
    int v62;
    short v63;
    int v278;
    int v71;
    int v285;
    int v291;
    short v73;
    int v398;
    int v82;
    int v2;
    int v8;
    int v92;
    int v93;
    int v81;
    char *v72;
    int v91;
    int v107;
    int v108;
    int v99;
    int v111;
    int v112;
    int v275;
    int v121;
    int v122;
    int v400;
    int v125;
    int v126;
    int v417;
    int v137;
    int v138;
    int v10;
    int v41;
    int v161;
    int v162;
    int v163;
    int v164;
    int v90;
    int v98;
    int v110;
    int v124;
    int v177;
    int v178;
    int v136;
    int v180;
    int v181;
    int v198;
    int v199;
    int v200;
    int v201;
    int v208;
    unsigned char v209;
    short v160;
    int v211;
    int v212;
    int v216;
    int v217;
    int v171;
    int v219;
    int v220;
    int v224;
    int v225;
    int v240;
    short v247;
    int v175;
    int v179;
    int v256;
    int v257;
    int v210;
    int v272;
    int v276;
    int v277;
    int v218;
    int v281;
    int v282;
    int v280;
    int v283;
    int v284;
    int v287;
    int v294;
    int v288;
    int v289;
    int v321;
    int v325;
    int v329;
    int v301;
    int v302;
    int v303;
    int v304;
    S_vv310 *v310;
    int v312;
    int v314;
    int v311;
    int v317;
    int v335;
    int v322;
    int v397;
    int v323;
    int v68;
    int v326;
    int v78;
    int v327;
    int v249;
    int v330;
    int v331;
    int v252;
    int v345;
    int v346;
    int v347;
    int v348;
    S_vv359 *v359;
    int v361;
    int v384;
    int v362;
    int v364;
    int v360;
    int v368;
    int v372;
    int v377;
    short v382;
    int v387;
    int v1;
    int v391;
    int v392;
    int v120;
    int v146;
    int v401;
    int v402;
    int v403;
    int v404;
    int v134;
    short v274;
    int v324;
    int v328;
    int v430;
    int v431;
    int v434;
    int v437;
    int t1;
    int t2;
    int v399;
    int v416;
    int t5;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t11;
    int t9;
    int t10;
    int t14;
    int t12;
    int t13;
    int t15;
    int t18;
    int t16;
    int t17;
    int t21;
    int t22;
    int t19;
    int t20;
    int t23;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    (&frame)->f00 = 0;
    if (o->tag == 0) {
        a1->f00 = 0;
        return 1;
    }
    v437 = (int)o->tag;
    switch (o->f02) {
    case 1:
        v2 = (int)o->tag;
        v1 = (int)o->f04;
        t1 = operation_8c20b040(v1);
        call_8c20b5b8(o, v1, t1, a1, (Frame *)((&frame)));
        if (!(o->tag > 1)) {
            v8 = (int)v2;
            goto L_8c20d30c;
        }
        v3 = (int)(&frame)->f00;
        v4 = (int)(0x80 > (v3 + 4));
        v7 = (int)v3;
        if (v4 != 0) {
            *(char *)((char *)&a1->f00 + (v3)) = 0xa;
            *(char *)((char *)&a1->f00 + (v3 + 1)) = 0x3e;
            *(char *)((char *)&a1->f00 + (v3 + 2)) = 0x20;
            v7 = (int)(v3 + 3);
        }
        (&frame)->f00 = (int)(v7);
        t2 = operation_8c20b040((int)(o->f06));
        operation_8c20b404(t2, (int)a1, (void *)(&frame));
        v437 = (int)v2;
        break;
    case 2:
        v8 = (int)o->tag;
        if (o->tag > 2) {
            v8 = (int)2;
        }
        v9 = (int)0x463;
        v41 = (int)0;
        goto L_8c20c5b4;
        v10 = (int)0;
L_8c20c504:;
        if (v10 == 1) {
            v11 = (int)(&frame)->f00;
            v12 = (int)(0x80 > (v11 + 2));
            if (v12 != 0) {
                (&frame)->f00 = v11 + 1;
                *(char *)((char *)&a1->f00 + (v11)) = 0x20;
            }
        }
        v17 = (short)*(short *)((char *)&o->f04 + (v10 << 1));
        if ((short)0x457 <= (short)v17) {
            if ((short)0x462 >= (short)v17) {
                v23 = (int)*(int *)((char *)((char *)g_8c5051f0 - 0x115c) + ((short)v17 << 2));
                goto L_8c20c582;
            }
        }
        if ((short)v17 == (short)v9) {
            v23 = (int)0;
        } else {
            v19 = (int)*(int *)((*(short *)((char *)((char *)g_8c50520c + 0x0) + ((short)v17 << 1)) << 2) + (int)g_8c505200);
            v23 = (int)v19;
        }
L_8c20c582:;
        if (v23 != 0) {
            t3 = strlen_8c12b0cc(v23);
            v25 = (int)(&frame)->f00;
            v26 = (int)(0x80 > (t3 + v25 + 1));
            if (v26 != 0) {
                strncpy_8c12b154((void *)((int)a1 + v25), (void *)v23, t3);
                (&frame)->f00 += t3;
            }
        }
        v41 = (int)(v10 + 1);
L_8c20c5b4:;
        v10 = (int)v41;
        if (v8 > v41) {
            goto L_8c20c504;
        }
        v54 = (int)(&frame)->f00;
        v55 = (int)(0x80 > (v54 + 2));
        if (v55 != 0) {
            (&frame)->f00 = v54 + 1;
            *(char *)((char *)&a1->f00 + (v54)) = 0x3f;
        }
        if (!(o->tag > 2)) {
            goto L_8c20d30c;
        }
        v57 = (int)(&frame)->f00;
        v58 = (int)(0x80 > (v57 + 4));
        v62 = (int)v57;
        if (v58 != 0) {
            *(char *)((char *)&a1->f00 + (v57)) = 0xa;
            *(char *)((char *)&a1->f00 + (v57 + 1)) = 0x3e;
            *(char *)((char *)&a1->f00 + (v57 + 2)) = 0x20;
            v62 = (int)(v57 + 3);
        }
        (&frame)->f00 = (int)(v62);
        v63 = (short)o->f08;
        if ((short)v63 >= 0x457) {
            if (0x462 >= (short)v63) {
                v68 = (int)*(int *)((char *)((char *)g_8c5051f0 - 0x115c) + ((short)v63 << 2));
                goto L_8c20c676;
            }
        }
        if ((short)v63 == 0x463) {
            v68 = (int)0;
        } else {
            v68 = (int)*(int *)((*(short *)((char *)((char *)g_8c50520c + 0x0) + ((short)v63 << 1)) << 2) + (int)g_8c505200);
        }
L_8c20c676:;
        if (v68 == 0) {
            goto L_8c20d30c;
        }
        t4 = strlen_8c12b0cc(v68);
        v71 = (int)(0x80 > (t4 + (&frame)->f00 + 1));
        if (v71 == 0) {
            goto L_8c20d30c;
        }
        strncpy_8c12b154((void *)((int)a1 + (&frame)->f00), (void *)v68, t4);
        (&frame)->f00 += t4;
        v437 = (int)v8;
        break;
    case 3:
        v81 = (int)o->tag;
        if (v81 > 1) {
            v72 = (char *)v81;
            operation_8c20b508((void *)o, (void *)(&(&frame)->f04));
            t5 = call_8c20c408((void *)(&(&frame)->f04), a1, a2);
            (&frame)->f00 = (int)(t5);
            v8 = (int)v72;
            goto L_8c20d30c;
        }
        v73 = (short)o->f04;
        if ((short)v73 >= 0x457) {
            if (0x462 >= (short)v73) {
                v78 = (int)*(int *)((char *)((char *)g_8c5051f0 - 0x115c) + ((short)v73 << 2));
                goto L_8c20c73e;
            }
        }
        if ((short)v73 == 0x463) {
            v78 = (int)0;
        } else {
            v78 = (int)*(int *)((*(short *)((char *)((char *)g_8c50520c + 0x0) + ((short)v73 << 1)) << 2) + (int)g_8c505200);
        }
L_8c20c73e:;
        if (v78 == 0) {
            v8 = (int)o->tag;
            goto L_8c20d30c;
        }
        t6 = strlen_8c12b0cc(v78);
        v82 = (int)(0x80 > (t6 + (&frame)->f00 + 1));
        if (v82 == 0) {
            v8 = (int)v81;
            goto L_8c20d30c;
        }
        strncpy_8c12b154((void *)((int)a1 + (&frame)->f00), (void *)v78, t6);
        (&frame)->f00 += t6;
        v437 = (int)v81;
        break;
    case 4:
        v99 = (int)o->tag;
        v98 = (int)o->f04;
        if (o->f04 != 0x1b8) {
            if (o->f04 >= 0x457) {
                if (0x462 >= o->f04) {
                    v88 = (int)*(int *)((char *)((char *)g_8c5051f0 - 0x115c) + (o->f04 << 2));
                    goto L_8c20c7ea;
                }
            }
            if (o->f04 == 0x463) {
                v88 = (int)0;
            } else {
                v84 = (int)*(int *)((*(short *)((char *)((char *)g_8c50520c + 0x0) + (o->f04 << 1)) << 2) + (int)g_8c505200);
                v88 = (int)v84;
            }
L_8c20c7ea:;
            v99 = (int)o->tag;
            v98 = (int)o->f04;
            if (v88 != 0) {
                v91 = (int)o->tag;
                v90 = (int)o->f04;
                t7 = strlen_8c12b0cc(v88);
                v92 = (int)(&frame)->f00;
                v93 = (int)(0x80 > (t7 + v92 + 1));
                if (v93 != 0) {
                    strncpy_8c12b154((void *)((int)a1 + v92), (void *)v88, t7);
                    (&frame)->f00 += t7;
                }
                v98 = (int)v90;
                v99 = (int)v91;
            }
        }
        v146 = (int)0;
        if ((short)v98 == 0x1b7) {
            v107 = (int)(&frame)->f00;
            v108 = (int)(0x80 > (v107 + 2));
            if (v108 != 0) {
                (&frame)->f00 = v107 + 1;
                *(char *)((char *)&a1->f00 + (v107)) = 0x2c;
            }
            v110 = (int)g_8c505200->f69c;
            if (v110 != 0) {
                t8 = strlen_8c12b0cc(v110);
                v111 = (int)(&frame)->f00;
                v112 = (int)(0x80 > (t8 + v111 + 1));
                if (v112 != 0) {
                    strncpy_8c12b154((void *)((int)a1 + v111), (void *)v110, t8);
                    (&frame)->f00 += t8;
                }
            }
            v120 = (int)2;
            v146 = (int)v120;
            v98 = (int)v110;
        } else {
            if ((short)v98 >= 0x457) {
                if (0x462 >= (short)v98) {
                    v121 = (int)(&frame)->f00;
                    v122 = (int)(0x80 > (v121 + 2));
                    if (v122 != 0) {
                        (&frame)->f00 = v121 + 1;
                        *(char *)((char *)&a1->f00 + (v121)) = 0x2c;
                    }
                    v124 = (int)g_8c505200->f690;
                    if (v124 != 0) {
                        t9 = strlen_8c12b0cc(v124);
                        v125 = (int)(&frame)->f00;
                        v126 = (int)(0x80 > (t9 + v125 + 1));
                        if (v126 != 0) {
                            strncpy_8c12b154((void *)((int)a1 + v125), (void *)v124, t9);
                            (&frame)->f00 += t9;
                        }
                    }
                    v134 = (int)2;
                    v98 = (int)v124;
                    goto L_8c20c95a;
                }
            }
            if ((short)v98 == 0x463) {
                v136 = (int)g_8c505200->f690;
                if (v136 != 0) {
                    t10 = strlen_8c12b0cc(v136);
                    v137 = (int)(&frame)->f00;
                    v138 = (int)(0x80 > (t10 + v137 + 1));
                    if (v138 != 0) {
                        strncpy_8c12b154((void *)((int)a1 + v137), (void *)v136, t10);
                        (&frame)->f00 += t10;
                    }
                }
                v146 = (int)2;
                v98 = (int)v136;
            }
        }
        v134 = (int)v146;
L_8c20c95a:;
        if (!(v99 > 1)) {
        } else {
            v160 = (short)o->f06;
            t11 = operation_8c20b458((void *)a1, (void *)(&frame));
            if (t11 > 0xf) {
                v161 = (int)(&frame)->f00;
                v162 = (int)(0x80 > (v161 + 2));
                if (v162 == 0) {
                    goto L_8c20c9ca;
                }
                (&frame)->f00 = v161 + 1;
                *(char *)((char *)&a1->f00 + (v161)) = 0xa;
            } else {
                v163 = (int)(&frame)->f00;
                v164 = (int)(0x80 > (v163 + 2));
                if (v164 != 0) {
                    (&frame)->f00 = v163 + 1;
                    *(char *)((char *)&a1->f00 + (v163)) = 0x20;
                }
            }
L_8c20c9ca:;
            if (v134 == 0) {
                if (v160 >= 0x457) {
                    if (0x462 >= v160) {
                        v175 = (int)*(int *)((char *)((char *)g_8c5051f0 - 0x115c) + (v160 << 2));
                        goto L_8c20ca22;
                    }
                }
                if (v160 == 0x463) {
                    v175 = (int)0;
                } else {
                    v171 = (int)*(int *)((*(short *)((char *)((char *)g_8c50520c + 0x0) + (v160 << 1)) << 2) + (int)g_8c505200);
                    v175 = (int)v171;
                }
L_8c20ca22:;
                if (v175 == 0) {
                    goto L_8c20cab2;
                }
                t12 = strlen_8c12b0cc(v175);
                v177 = (int)(&frame)->f00;
                v178 = (int)(0x80 > (t12 + v177 + 1));
                if (v178 == 0) {
                    v134 = (int)t12;
                    goto L_8c20cab2;
                }
                strncpy_8c12b154((void *)((int)a1 + v177), (void *)v175, t12);
                (&frame)->f00 += t12;
                v134 = (int)t12;
            } else {
                v179 = (int)*(int *)((*(short *)((char *)((char *)g_8c505218->f00 - 0x6ee) + (v160 << 1)) << 2) + (int)g_8c505200);
                if (v179 != 0) {
                    t13 = strlen_8c12b0cc(v179);
                    v180 = (int)(&frame)->f00;
                    v181 = (int)(0x80 > (t13 + v180 + 1));
                    if (v181 != 0) {
                        strncpy_8c12b154((void *)((int)a1 + v180), (void *)v179, t13);
                        (&frame)->f00 += t13;
                    }
                    v134 = (int)t13;
                }
            }
        }
L_8c20cab2:;
        if (!(v99 > 2)) {
        } else {
            t14 = operation_8c20b458((void *)a1, (void *)(&frame));
            if (t14 > 0xf) {
                v198 = (int)(&frame)->f00;
                v199 = (int)(0x80 > (v198 + 2));
                if (v199 == 0) {
                    goto L_8c20cb1e;
                }
                (&frame)->f00 = v198 + 1;
                *(char *)((char *)&a1->f00 + (v198)) = 0xa;
            } else {
                v200 = (int)(&frame)->f00;
                v201 = (int)(0x80 > (v200 + 2));
                if (v201 != 0) {
                    (&frame)->f00 = v200 + 1;
                    *(char *)((char *)&a1->f00 + (v200)) = 0x20;
                }
            }
L_8c20cb1e:;
            if (o->f08 >= 0x1b9) {
                if (0x31d >= o->f08) {
                    v208 = (int)(o->f08 + -0x1b9);
                    goto L_8c20cb46;
                }
            }
            v208 = (int)0;
L_8c20cb46:;
            v209 = (unsigned char)*(unsigned char *)((char *)((char *)g_8c505220 + 0x0) + (v208));
            if (v209 != 1) {
                if (v209 == 2) {
                    goto L_8c20cbc8;
                }
            } else {
                v210 = (int)g_8c505200->f1194;
                if (v210 != 0) {
                    t15 = strlen_8c12b0cc(v210);
                    v211 = (int)(&frame)->f00;
                    v212 = (int)(0x80 > (t15 + v211 + 1));
                    if (v212 != 0) {
                        strncpy_8c12b154((void *)((int)a1 + v211), (void *)v210, t15);
                        (&frame)->f00 += t15;
                    }
                    v134 = (int)t15;
                }
                v216 = (int)(&frame)->f00;
                v217 = (int)(0x80 > (v216 + 2));
                if (v217 != 0) {
                    (&frame)->f00 = v216 + 1;
                    *(char *)((char *)&a1->f00 + (v216)) = 0x20;
                    goto L_8c20cc1a;
L_8c20cbc8:;
                    v218 = (int)g_8c505200->f1198;
                    if (v218 != 0) {
                        t16 = strlen_8c12b0cc(v218);
                        v219 = (int)(&frame)->f00;
                        v220 = (int)(0x80 > (t16 + v219 + 1));
                        if (v220 != 0) {
                            strncpy_8c12b154((void *)((int)a1 + v219), (void *)v218, t16);
                            (&frame)->f00 += t16;
                        }
                        v134 = (int)t16;
                    }
                    v224 = (int)(&frame)->f00;
                    v225 = (int)(0x80 > (v224 + 2));
                    if (v225 != 0) {
                        (&frame)->f00 = v224 + 1;
                        *(char *)((char *)&a1->f00 + (v224)) = 0x20;
                    }
                }
            }
L_8c20cc1a:;
            if (o->f08 >= 0x457) {
                if (0x462 >= o->f08) {
                    v240 = (int)*(int *)((char *)((char *)g_8c5051f0 - 0x115c) + (o->f08 << 2));
                    goto L_8c20cc82;
                }
            }
            if (o->f08 == 0x463) {
                v240 = (int)0;
            } else {
                v240 = (int)*(int *)((*(short *)((char *)((char *)g_8c50520c + 0x0) + (o->f08 << 1)) << 2) + (int)g_8c505200);
            }
L_8c20cc82:;
            call_8c20b5b8(o, o->f08, v240, a1, (Frame *)((&frame)));
        }
        v252 = (int)o;
        if (v99 > 3) {
            v247 = (short)o->f0a;
            if ((short)v247 >= 0x457) {
                if (0x462 >= (short)v247) {
                    v252 = (int)*(int *)((char *)((char *)g_8c5051f0 - 0x115c) + ((short)v247 << 2));
                    goto L_8c20ccf6;
                }
            }
            if ((short)v247 == 0x463) {
                v252 = (int)0;
            } else {
                v249 = (int)*(int *)((*(short *)((char *)((char *)g_8c50520c + 0x0) + ((short)v247 << 1)) << 2) + (int)g_8c505200);
                v252 = (int)v249;
            }
L_8c20ccf6:;
            if (v252 != 0) {
                t17 = strlen_8c12b0cc(v252);
                v256 = (int)(&frame)->f00;
                v257 = (int)(0x80 > (t17 + v256 + 1));
                if (v257 != 0) {
                    strncpy_8c12b154((void *)((int)a1 + v256), (void *)v252, t17);
                    (&frame)->f00 += t17;
                }
                v134 = (int)t17;
            }
        }
        t18 = operation_8c18ee00(a1->f00);
        a1->f00 = t18;
        v437 = (int)v99;
        break;
    case 5:
        v274 = (short)o->f04;
        if (v274 >= (short)0x457) {
            if (0x462 >= v274) {
                v272 = (int)*(int *)((char *)((char *)g_8c5051f0 - 0x115c) + (v274 << 2));
                goto L_8c20cd9e;
            }
        }
        if (v274 == 0x463) {
            v272 = (int)0;
        } else {
            v272 = (int)*(int *)((*(short *)((char *)((char *)g_8c50520c + 0x0) + (v274 << 1)) << 2) + (int)g_8c505200);
        }
L_8c20cd9e:;
        v275 = (int)o->tag;
        call_8c20b5b8(o, v274, v272, a1, (Frame *)((&frame)));
        if (v274 == 0x1b4) {
            v291 = (int)0;
        } else {
            if (v274 == 0x1b7) {
                v276 = (int)(&frame)->f00;
                v277 = (int)(0x80 > (v276 + 2));
                v278 = (int)2;
                if (v277 != 0) {
                    (&frame)->f00 = v276 + 1;
                    *(char *)((char *)&a1->f00 + (v276)) = 0x2c;
                }
                v280 = (int)g_8c505200->f69c;
                if (v280 == 0) {
                    v294 = (int)v280;
                    goto L_8c20ceca;
                }
                t19 = strlen_8c12b0cc(v280);
                v281 = (int)(&frame)->f00;
                v282 = (int)(0x80 > (t19 + v281 + 1));
                if (v282 == 0) {
                    v294 = (int)v280;
                    goto L_8c20ceca;
                }
                strncpy_8c12b154((void *)((int)a1 + v281), (void *)v280, t19);
                (&frame)->f00 += t19;
                v294 = (int)v280;
                v291 = (int)v278;
            } else {
                if (v274 >= 0x457) {
                    if (0x462 >= v274) {
                        v283 = (int)(&frame)->f00;
                        v284 = (int)(0x80 > (v283 + 2));
                        v285 = (int)1;
                        if (v284 != 0) {
                            (&frame)->f00 = v283 + 1;
                            *(char *)((char *)&a1->f00 + (v283)) = 0x2c;
                        }
                        v287 = (int)g_8c505200->f690;
                        if (v287 == 0) {
                            v294 = (int)v287;
                            v278 = (int)v285;
                            goto L_8c20ceca;
                        }
                        t20 = strlen_8c12b0cc(v287);
                        v288 = (int)(&frame)->f00;
                        v289 = (int)(0x80 > (t20 + v288 + 1));
                        if (v289 == 0) {
                            v294 = (int)v287;
                            v278 = (int)v285;
                            goto L_8c20ceca;
                        }
                        strncpy_8c12b154((void *)((int)a1 + v288), (void *)v287, t20);
                        (&frame)->f00 += t20;
                        v294 = (int)v287;
                        v278 = (int)v285;
                        goto L_8c20ceca;
                    }
                }
                v291 = (int)3;
                t21 = operation_8c18ee00(a1->f00);
                a1->f00 = t21;
            }
        }
        v278 = (int)v291;
L_8c20ceca:;
        if (!(v275 > 1)) {
            v335 = (int)v294;
        } else {
            t22 = operation_8c20b458((void *)a1, (void *)(&frame));
            if (t22 > 0xf) {
                v301 = (int)(&frame)->f00;
                v302 = (int)(0x80 > (v301 + 2));
                if (v302 == 0) {
                    goto L_8c20cf26;
                }
                (&frame)->f00 = v301 + 1;
                *(char *)((char *)&a1->f00 + (v301)) = 0xa;
            } else {
                v303 = (int)(&frame)->f00;
                v304 = (int)(0x80 > (v303 + 2));
                if (v304 != 0) {
                    (&frame)->f00 = v303 + 1;
                    *(char *)((char *)&a1->f00 + (v303)) = 0x20;
                }
            }
L_8c20cf26:;
            v310 = (S_vv310 *)g_8c50521c;
            v311 = (int)v310->f04;
            v314 = (int)0;
            goto L_8c20cf54;
            v312 = (int)0;
L_8c20cf40:;
            if (*(short *)((char *)((char *)v310->f00 + 0x0) + (v312 << 1)) == o->f06) {
                v317 = (int)0;
            } else {
                v314 = (int)(v312 + 1);
L_8c20cf54:;
                v312 = (int)v314;
                if (v311 > v314) {
                    goto L_8c20cf40;
                }
                v317 = (int)1;
            }
            if (v317 == 0) {
                v335 = (int)o->f06;
            } else {
                if (v278 != 0) {
                    if (v278 == 1) {
                        goto L_8c20cfc4;
                    }
                    if (v278 == 2) {
                        goto L_8c20cfc4;
                    }
                    if (v278 == 3) {
                        goto L_8c20d014;
                    }
                    v335 = (int)o->f06;
                } else {
                    v320 = (int)g_8c505200->ff30;
                    v335 = (int)o->f06;
                    if (v320 != 0) {
                        v321 = (int)o->f06;
                        t23 = strlen_8c12b0cc(v320);
                        v322 = (int)(&frame)->f00;
                        v323 = (int)(0x80 > (t23 + v322 + 1));
                        v335 = (int)v321;
                        if (v323 != 0) {
                            strncpy_8c12b154((void *)((int)a1 + v322), (void *)v320, t23);
                            (&frame)->f00 += t23;
                            v335 = (int)v321;
                            goto L_8c20d04c;
L_8c20cfc4:;
                            v324 = (int)g_8c505200->ff34;
                            v335 = (int)o->f06;
                            if (v324 != 0) {
                                v325 = (int)o->f06;
                                t24 = strlen_8c12b0cc(v324);
                                v326 = (int)(&frame)->f00;
                                v327 = (int)(0x80 > (t24 + v326 + 1));
                                v335 = (int)v325;
                                if (v327 != 0) {
                                    strncpy_8c12b154((void *)((int)a1 + v326), (void *)v324, t24);
                                    (&frame)->f00 += t24;
                                    v335 = (int)v325;
                                    goto L_8c20d04c;
L_8c20d014:;
                                    v328 = (int)g_8c505200->ff38;
                                    v335 = (int)o->f06;
                                    if (v328 != 0) {
                                        v329 = (int)o->f06;
                                        t25 = strlen_8c12b0cc(v328);
                                        v330 = (int)(&frame)->f00;
                                        v331 = (int)(0x80 > (t25 + v330 + 1));
                                        if (v331 != 0) {
                                            strncpy_8c12b154((void *)((int)a1 + v330), (void *)v328, t25);
                                            (&frame)->f00 += t25;
                                        }
                                        v335 = (int)v329;
                                    }
                                }
                            }
                        }
                    }
                }
L_8c20d04c:;
                t26 = operation_8c20b458((void *)a1, (void *)(&frame));
                if (t26 > 0xf) {
                    v345 = (int)(&frame)->f00;
                    v346 = (int)(0x80 > (v345 + 2));
                    if (v346 == 0) {
                        goto L_8c20d0aa;
                    }
                    (&frame)->f00 = v345 + 1;
                    *(char *)((char *)&a1->f00 + (v345)) = 0xa;
                } else {
                    v347 = (int)(&frame)->f00;
                    v348 = (int)(0x80 > (v347 + 2));
                    if (v348 != 0) {
                        (&frame)->f00 = v347 + 1;
                        *(char *)((char *)&a1->f00 + (v347)) = 0x20;
                    }
                }
            }
L_8c20d0aa:;
            v372 = (int)0;
            if (v278 == 2) {
                v359 = (S_vv359 *)g_8c50521c;
                v360 = (int)((S_vv359_s8 *)((char *)v359 + 0x8))->f04;
                v364 = (int)0;
                goto L_8c20d0f2;
                v361 = (int)0;
L_8c20d0cc:;
                if (*(short *)((char *)((char *)v359->f08 + 0x0) + (v361 << 1)) == (short)v335) {
                    v362 = (int)*(int *)((*(short *)((char *)((char *)v359->f10 + 0x0) + (v361 << 1)) << 2) + (int)g_8c505200);
                    v368 = (int)v362;
                } else {
                    v364 = (int)(v361 + 1);
L_8c20d0f2:;
                    v361 = (int)v364;
                    if (v360 > v364) {
                        goto L_8c20d0cc;
                    }
                    v368 = (int)0;
                }
                v372 = (int)v368;
            }
            if (v372 != 0) {
                call_8c20b5b8(o, (short)v335, v372, a1, (Frame *)((&frame)));
            } else {
                if ((short)v335 >= 0x457) {
                    if (0x462 >= (short)v335) {
                        v377 = (int)*(int *)((char *)((char *)g_8c5051f0 - 0x115c) + ((short)v335 << 2));
                        goto L_8c20d15e;
                    }
                }
                if ((short)v335 == 0x463) {
                    v377 = (int)0;
                } else {
                    v377 = (int)*(int *)((*(short *)((char *)((char *)g_8c50520c + 0x0) + ((short)v335 << 1)) << 2) + (int)g_8c505200);
                }
L_8c20d15e:;
                call_8c20b5b8(o, (short)v335, v377, a1, (Frame *)((&frame)));
            }
        }
        v387 = (int)o;
        if (v275 > 2) {
            v382 = (short)o->f08;
            if ((short)v382 >= 0x457) {
                if (0x462 >= (short)v382) {
                    v387 = (int)*(int *)((char *)((char *)g_8c5051f0 - 0x115c) + ((short)v382 << 2));
                    goto L_8c20d1d2;
                }
            }
            if ((short)v382 == 0x463) {
                v387 = (int)0;
            } else {
                v384 = (int)*(int *)((*(short *)((char *)((char *)g_8c50520c + 0x0) + ((short)v382 << 1)) << 2) + (int)g_8c505200);
                v387 = (int)v384;
            }
L_8c20d1d2:;
            if (v387 != 0) {
                t27 = strlen_8c12b0cc(v387);
                v391 = (int)(&frame)->f00;
                v392 = (int)(0x80 > (t27 + v391 + 1));
                if (v392 != 0) {
                    strncpy_8c12b154((void *)((int)a1 + v391), (void *)v387, t27);
                    (&frame)->f00 += t27;
                }
            }
        }
        t28 = operation_8c18ee00(a1->f00);
        a1->f00 = t28;
        v437 = (int)v275;
        break;
    case 6:
        v400 = (int)o->tag;
        v397 = (int)v400;
        if (v400 > 3) {
            v397 = (int)3;
        }
        v398 = (int)-1;
        v416 = (int)0;
        v417 = (int)o->tag;
        goto L_8c20d2a4;
        v399 = (int)0;
L_8c20d234:;
        t29 = operation_8c20b040((int)(*(short *)((char *)&o->f04 + (v399 << 1))));
        operation_8c20b404(t29, (int)a1, (void *)(&frame));
        t30 = operation_8c20b458((void *)a1, (void *)(&frame));
        if (t30 > 0xf) {
            v401 = (int)(&frame)->f00;
            v402 = (int)(0x80 > (v401 + 2));
            if (v402 == 0) {
                goto L_8c20d2a2;
            }
            (&frame)->f00 = v401 + 1;
            *(char *)((char *)&a1->f00 + (v401)) = 0xa;
        } else {
            v403 = (int)(&frame)->f00;
            v404 = (int)(0x80 > (v403 + 2));
            if (v404 != 0) {
                (&frame)->f00 = v403 + 1;
                *(char *)((char *)&a1->f00 + (v403)) = 0x20;
            }
        }
L_8c20d2a2:;
        v416 = (int)(v399 + 1);
        v417 = (int)v400;
L_8c20d2a4:;
        v399 = (int)v416;
        if ((v397 + v398) > v416) {
            goto L_8c20d234;
        }
        t31 = operation_8c20b040((int)(*(short *)((char *)&o->f02 + (v397 << 1))));
        operation_8c20b404(t31, (int)a1, (void *)(&frame));
        if (v417 > 3) {
            v430 = (int)(&frame)->f00;
            v431 = (int)(0x80 > (v430 + 4));
            v434 = (int)v430;
            if (v431 != 0) {
                *(char *)((char *)&a1->f00 + (v430)) = 0xa;
                *(char *)((char *)&a1->f00 + (v430 + 1)) = 0x3e;
                *(char *)((char *)&a1->f00 + (v430 + 2)) = 0x20;
                v434 = (int)(v430 + 3);
            }
            (&frame)->f00 = (int)(v434);
            t32 = operation_8c20b040((int)(o->f0a));
            operation_8c20b404(t32, (int)a1, (void *)(&frame));
        }
        v437 = (int)v417;
    }
    v8 = (int)v437;
L_8c20d30c:;
    (&frame)->f00 += 1;
    *(char *)((char *)&a1->f00 + ((&frame)->f00)) = 0;
    return (int)((&frame)->f00);
}
