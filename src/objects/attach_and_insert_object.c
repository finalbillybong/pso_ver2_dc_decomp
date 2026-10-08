/* Provisional reconstruction; preserve original ID-table and boundary behavior. */
#define attach_at ((void (*)(void *,int))0x8c01d610)
#define insert_at ((unsigned short (*)(void *))0x8c053e1c)
unsigned short attach_and_insert_object(void *object){
    attach_at(object,0);
    return insert_at(object);
}
