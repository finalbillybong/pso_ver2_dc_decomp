typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c052d50(int a0, int a1)
{
    if (((a0 & a1 & 1)) == 0) {
        return 0;
    }
    if (((a0 & a1 & 6)) == 0) {
        return 0;
    }
    if (((a0 & 0x10)) != 0) {
        if (((a1 & 0x4000)) != 0) {
            goto L_8c052d90;
        }
    }
    if (((a1 & 0x10)) != 0) {
        if (((a0 & 0x4000)) != 0) {
L_8c052d90:;
            return 0;
        }
    }
    if (((a0 & 0x20)) != 0) {
        if (((a1 & 0x8000)) != 0) {
            goto L_8c052db8;
        }
    }
    if (((a1 & 0x20)) != 0) {
        if (((a0 & 0x8000)) != 0) {
L_8c052db8:;
            return 0;
        }
    }
    if (((a0 & 0x40)) != 0) {
        if (((a1 & 0x10000)) != 0) {
            goto L_8c052de0;
        }
    }
    if (((a1 & 0x40)) != 0) {
        if (((a0 & 0x10000)) != 0) {
L_8c052de0:;
            return 0;
        }
    }
    if (((a0 & 0x80)) != 0) {
        if (((a1 & 0x20000)) != 0) {
            goto L_8c052e0c;
        }
    }
    if (((a1 & 0x80)) != 0) {
        if (((a0 & 0x20000)) != 0) {
L_8c052e0c:;
            return 0;
        }
    }
    if (((a0 & 0x100)) != 0) {
        if (((a1 & 0x80000)) != 0) {
            goto L_8c052e34;
        }
    }
    if (((a1 & 0x100)) != 0) {
        if (((a0 & 0x80000)) != 0) {
L_8c052e34:;
            return 0;
        }
    }
    return 1;
}
