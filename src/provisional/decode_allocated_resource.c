#include "src/include/random_state.h"
/* Observed resource prefix; payload begins immediately after length and seed. */
typedef struct EncodedResource { unsigned int length,seed; } EncodedResource;
typedef char check_seed[(unsigned long)&((EncodedResource *)0)->seed==4?1:-1];
typedef char check_prefix[sizeof(EncodedResource)==8?1:-1];
extern RandomState *construct_at(RandomState *);
extern void seed_at(RandomState *,unsigned int);
extern void decode_at(RandomState *,void *,unsigned int);
extern void expand_at(const void *,void *);
extern void *allocate_at(unsigned int);
void *decode_allocated_resource(EncodedResource *input,unsigned int input_length,unsigned int *output_length) {
 RandomState random;
 unsigned int length=input->length,seed=input->seed;
 void *output=allocate_at(length);
 if(!output) return 0;
 construct_at(&random);
 seed_at(&random,seed);
 decode_at(&random,input+1,input_length-8);
 expand_at(input+1,output);
 if(output_length) *output_length=length;
 return output;
}
