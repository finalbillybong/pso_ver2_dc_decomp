/* Provisional address-based name; preserve resource state, call ordering and signed dispatch conditions. */
extern void *shared_buffer;
extern int shared_state;
extern void *operator_new_8c18de4c(int);
void operation_193738(void){
    shared_buffer=operator_new_8c18de4c(0x3000);
    shared_state=0;
}
