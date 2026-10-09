#include "src/include/random_state.h"
typedef struct Record { char data[128]; } Record;
typedef struct Collection { int count; Record records[100]; char unknown12804[12]; unsigned int seed; char unknown12820[256]; } Collection;
typedef struct Seeds { unsigned int first,second; } Seeds;
typedef char check_layout[sizeof(Record)==128 && sizeof(Collection)==13076 && sizeof(Seeds)==8 && (unsigned long)&((Collection *)0)->records==4 && (unsigned long)&((Collection *)0)->seed==12816 && (unsigned long)&((Seeds *)0)->second==4 ? 1:-1];
extern RandomState random_state;
extern Seeds seeds;
extern void *allocate(unsigned int);
extern void release(void *),construct_array(void *,void *(*)(void *,int),void *(*)(void *,int),unsigned int,unsigned int);
extern void *construct_record(void *,int);
extern void seed_random(RandomState *,unsigned int),prepare_permutation(RandomState *),permute_inverse(RandomState *,void *,void *,unsigned int),subtract_random(RandomState *,void *,int),xor_random(RandomState *,void *,int);
static inline Collection *create_collection(void) {
    Collection *p=allocate(sizeof(Collection));
    if(p) construct_array(p->records,construct_record,0,sizeof(Record),100);
    return p;
}
void decode_record_collection(Collection *o) {
    Collection *first=create_collection();
    Collection *second=create_collection();
    *first=*o;*second=*o;
    seed_random(&random_state,seeds.second);
    prepare_permutation(&random_state);
    permute_inverse(&random_state,first,second,12820);
    *o=*second;
    release(second);release(first);
    seed_random(&random_state,seeds.first);
    subtract_random(&random_state,o,12820);
    seed_random(&random_state,o->seed);
    xor_random(&random_state,o,12816);
}
