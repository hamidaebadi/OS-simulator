#include "pcb.hpp";

//this class models a processe in operating systems
class ProcImg {
public:
    ProcImg(unsigned data_size, unsigned code_size ,ProcessControlBlock *pcb)
    :data_size_(data_size), code_size_(code_size), pcb_(pcb){};
    
private:
    unsigned  data_size_;
    unsigned code_size_;
    ProcessControlBlock *pcb_;
};