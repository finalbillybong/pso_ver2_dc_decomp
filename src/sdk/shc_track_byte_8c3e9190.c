typedef struct { char pad[0x50]; char v50; } Obj;
extern char byte_8c5bf06c[];
extern Obj *obj_8c5bef98;
extern int counter_8c5bf084;
void track_byte_8c3e9190(void)
{
    volatile char *b = byte_8c5bf06c;
    if (obj_8c5bef98->v50 != *b) {
        *b = obj_8c5bef98->v50;
        counter_8c5bf084++;
    }
}
