typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x28];
    int f2c;
    char unknown30[0x4];
    float f34;
    float f38;
    float f3c;
    char unknown40[0x4];
    float f44;
    float f48;
    float f4c;
    char unknown50[0x4];
    float f54;
    float f58;
    float f5c;
};
int operation_8c0f7928(Object *o)
{
    float v2;
    float v1;
    float v3;
    float v4;
    float v5;
    float v7;
    float v8;
    float v12;
    float v26;
    float v25;
    float v27;
    float v28;
    float v29;
    float v31;
    float v32;
    float v36;
    float v49;
    float v48;
    float v50;
    float v51;
    float v52;
    float v54;
    float v55;
    float v59;
    int v13;
    v1 = (float)o->f44;
    v2 = (float)o->f34;
    v13 = (int)1;
    if (v2 > v1) {
        v3 = (float)(v1 + o->f54);
        if (0.0f > v3) {
            v5 = (float)0.0f;
        } else {
            if (v2 > v3) {
                v4 = (float)v3;
            } else {
                v4 = (float)v2;
            }
            v5 = (float)v4;
        }
        o->f44 = v5;
        if (!(o->f44 < o->f34)) {
            goto L_8c0f79a2;
        }
        v13 = (int)0;
    } else {
        v7 = (float)(v1 + o->f54);
        if (v2 > v7) {
            v12 = (float)v2;
        } else {
            if (255.0f > v7) {
                v8 = (float)v7;
            } else {
                v8 = (float)255.0f;
            }
            v12 = (float)v8;
        }
        o->f44 = v12;
        if (o->f44 > o->f34) {
            v13 = (int)0;
        }
    }
L_8c0f79a2:;
    v25 = (float)o->f48;
    v26 = (float)o->f38;
    if (v26 > v25) {
        v27 = (float)(v25 + o->f58);
        if (0.0f > v27) {
            v29 = (float)0.0f;
        } else {
            if (v26 > v27) {
                v28 = (float)v27;
            } else {
                v28 = (float)v26;
            }
            v29 = (float)v28;
        }
        o->f48 = v29;
        if (!(o->f48 < o->f38)) {
            goto L_8c0f7a1a;
        }
        v13 = (int)0;
    } else {
        v31 = (float)(v25 + o->f58);
        if (v26 > v31) {
            v36 = (float)v26;
        } else {
            if (255.0f > v31) {
                v32 = (float)v31;
            } else {
                v32 = (float)255.0f;
            }
            v36 = (float)v32;
        }
        o->f48 = v36;
        if (o->f48 > o->f38) {
            v13 = (int)0;
        }
    }
L_8c0f7a1a:;
    v48 = (float)o->f4c;
    v49 = (float)o->f3c;
    if (v49 > v48) {
        v50 = (float)(v48 + o->f5c);
        if (0.0f > v50) {
            v52 = (float)0.0f;
        } else {
            if (v49 > v50) {
                v51 = (float)v50;
            } else {
                v51 = (float)v49;
            }
            v52 = (float)v51;
        }
        o->f4c = v52;
        if (!(o->f4c < o->f3c)) {
            goto L_8c0f7a92;
        }
        v13 = (int)0;
    } else {
        v54 = (float)(v48 + o->f5c);
        if (v49 > v54) {
            v59 = (float)v49;
        } else {
            if (255.0f > v54) {
                v55 = (float)v54;
            } else {
                v55 = (float)255.0f;
            }
            v59 = (float)v55;
        }
        o->f4c = v59;
        if (o->f4c > o->f3c) {
            v13 = (int)0;
        }
    }
L_8c0f7a92:;
    if (v13 != 0) {
        o->tag &= -0x81;
        return (int)(o->f2c);
    }
    v13 = 0xff00;
    v13 |= (unsigned char)(int)o->f44;
    return (v13 << 8 | (int)o->f48) << 8 | (int)o->f4c;
}
