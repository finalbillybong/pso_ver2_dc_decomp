/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#define free_at ((void (*)(void *))0x8c105320)
void operation_193764_8c21ede8(void){
    free_at(*(void **)0x8c505980);
    *(void **)0x8c505980=0;
}
