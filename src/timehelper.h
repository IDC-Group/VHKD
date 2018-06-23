#ifndef HUL_TIME_HELPER_H_H_
#define HUL_TIME_HELPER_H_H_

#include <sys/time.h>
#include <unistd.h>
#include <string>

class TimeUsedCheck{
public:
	TimeUsedCheck(const std::string & functionName)
	{
		m_functionName = functionName;
		gettimeofday(&m_tv, NULL);
		m_timestamp = m_tv.tv_sec * 1000 * 1000 + m_tv.tv_usec;
	}	
	~TimeUsedCheck()
	{
		gettimeofday(&m_tv, NULL);
		int64_t tmp = m_tv.tv_sec * 1000 * 1000 + m_tv.tv_usec;
		printf("[%s] used %" PRId64 " micro second.\n", m_functionName.c_str(), tmp - m_timestamp);
	}
	
	int64_t m_timestamp;
	struct timeval m_tv;
	std::string m_functionName;
};


#endif