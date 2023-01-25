#include <vector>

//this class models Process Control Block
enum State{
    NEW,
    READY, 
    RUNNING,
    BLOCKED,
    EXITED
};


class ProcessControlBlock{

public:

private:

    //process identificatin data
    unsigned pid_;
    int parentPid_; 

    //Processor state information
    std::vector<int> registers_data_{};  //vectore for holding working-registers' data for this process
    unsigned pc_{0}; //program counter register data

    //
    State state_ {NEW};   //state of the process, defaults to NEW
};