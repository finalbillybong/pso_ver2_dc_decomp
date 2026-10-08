/* Provisional reconstruction; preserve original low-ID and field-transition behavior. */
void *lookup_low_id(int id){
    void *result;
    if(id==0xffff)result=0;
    else if(id>=12)result=0;
    else result=*(void **)(0x8c41ce2c+(id<<2));
    return result;
}
