/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#define free_at ((void (*)(void *))0x8c18de08)
void operation_193764(void){
    free_at(*(void **)0x8c4dc2f4);
    *(void **)0x8c4dc2f4=0;
}
