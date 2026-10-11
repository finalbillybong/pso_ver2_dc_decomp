typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c052e58(int a0, int a1)
{
    if (((a0 & 0x4000)) != 0) {
        if (((a1 & 0x200)) != 0) {
            goto L_8c052e80;
        }
    }
    if (((a0 & 0x200)) != 0) {
        if (((a1 & 0x4000)) != 0) {
L_8c052e80:;
            return 1;
        }
    }
    if (((a0 & 0x8000)) != 0) {
        if (((a1 & 0x400)) != 0) {
            goto L_8c052eac;
        }
    }
    if (((a0 & 0x400)) != 0) {
        if (((a1 & 0x8000)) != 0) {
L_8c052eac:;
            return 1;
        }
    }
    if (((a0 & 0x10000)) != 0) {
        if (((a1 & 0x800)) != 0) {
            goto L_8c052ed8;
        }
    }
    if (((a0 & 0x800)) != 0) {
        if (((a1 & 0x10000)) != 0) {
L_8c052ed8:;
            return 1;
        }
    }
    if (((a0 & 0x20000)) != 0) {
        if (((a1 & 0x1000)) != 0) {
            goto L_8c052f04;
        }
    }
    if (((a0 & 0x1000)) != 0) {
        if (((a1 & 0x20000)) != 0) {
L_8c052f04:;
            return 1;
        }
    }
    if (((a0 & 0x80000)) != 0) {
        if (((a1 & 0x2000)) != 0) {
            goto L_8c052f2c;
        }
    }
    if (((a0 & 0x2000)) != 0) {
        if (((a1 & 0x80000)) != 0) {
L_8c052f2c:;
            return 1;
        }
    }
    return 0;
}
