/**
 * @brief ProcApi is for process management. This api provides
 * functions for process creation and termination. 
 * 
 */

class ProcApi{
    
public:
    ProcApi(/* args */);
    ~ProcApi();

    int create_process_(int pid);
    int terminate_process_(int pid);

private:
    /* data */
};
