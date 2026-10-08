#ifndef PSO_BLEND_INPUT_H
#define PSO_BLEND_INPUT_H
/* Provisional pair of animation inputs and their frame positions. */
typedef struct BlendInput {void *first,*second;float first_frame,second_frame;} BlendInput;
typedef char check_BlendInput_first[(unsigned long)&((BlendInput *)0)->first == 0 ? 1 : -1];
typedef char check_BlendInput_second[(unsigned long)&((BlendInput *)0)->second == 4 ? 1 : -1];
typedef char check_BlendInput_first_frame[(unsigned long)&((BlendInput *)0)->first_frame == 8 ? 1 : -1];
typedef char check_BlendInput_second_frame[(unsigned long)&((BlendInput *)0)->second_frame == 12 ? 1 : -1];
typedef char check_BlendInput_size[sizeof(BlendInput)==16?1:-1];
#endif
