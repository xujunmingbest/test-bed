#include <mutex>
#include "_Mutex.h"
using namespace std;



//��־��
mutex log_mutex;
void LogLock() {
	log_mutex.lock();
}
void LogUnLock() {
	log_mutex.unlock();
}



