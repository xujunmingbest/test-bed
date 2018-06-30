#pragma once
// c++log��װ.cpp : �������̨Ӧ�ó������ڵ㡣
//


/**
* �������log�ļ�����.
*/


#ifndef LOG_H    
#define LOG_H    

#include <fstream>    
#include <string>    
#include <ctime>    
#include <windows.h>
#include <iostream>
#include "_Mutex.h"

using namespace std;


#define LOGPATH  "log.txt"

//���ÿ���  
#define LOG_ENABLE  
class Mylog {
public:

	//��ȡ����ʱ�䣬��ʽ��"[2011-11-11 11:11:11] ";   
	static string _GetSystemTime()
	{
		time_t tNowTime;
		time(&tNowTime);
		tm* tLocalTime = localtime(&tNowTime);
		char szTime[30] = { '\0' };
		strftime(szTime, 30, "[%Y-%m-%d %H:%M:%S] ", tLocalTime);
		string strTime = szTime;
		return strTime;
	}

	static string _GetNowTime()
	{
		time_t tNowTime;
		time(&tNowTime);
		tm* tLocalTime = localtime(&tNowTime);
		char szTime[30] = { '\0' };
		strftime(szTime, 30, "%Y%m%d-%H%M%S", tLocalTime);
		string strTime = szTime;
		return strTime;
	}
private:
	ofstream fout;

	template <class T>
	inline void WriteArg(T t)
	{
		fout << t << " ";
	}

public:
	Mylog() {
		WriteLogBOE("BEGIN"); 
	}
	~Mylog() {
		WriteLogBOE("END");
	}

	template <class ...Args>
	void WriteDetail(const char* file, const char* func, int line, string MODEL, Args... args)
	{
		LogLock();
		fout.open(LOGPATH, ios::app);
		string fn(file);
		fn = string(fn, fn.find_last_of('\\') + 1, fn.length());
		fout << _GetSystemTime() << "[" << fn << ":" << func << ":" << line <<
			"] [" << MODEL << "]: ";
		int arr[] = { (WriteArg(args), 0)... };
		fout << ";" << endl;
		fout.close();
		LogUnLock();
	}

	template <class ...Args>
	void Fatal(const char* file, const char* func, int line, string MODEL, Args... args)
	{
		LogLock();
		fout.open(LOGPATH, ios::app);
		string fn(file);
		fn = string(fn, fn.find_last_of('\\') + 1, fn.length());
		fout << _GetSystemTime() << "[" << fn << ":" << func << ":" << line <<
			"] [" << MODEL << "]: ";
		int arr[] = { (WriteArg(args), 0)... };
		fout << ";" << endl;
		fout.close();
		LogUnLock();
		exit(-1);
	}

	void WriteLogBOE(string eb)
	{
		LogLock();
		char sz_Path[MAX_PATH] = { 0 };
		GetModuleFileNameA(NULL, sz_Path, MAX_PATH);
		string exeName(sz_Path);
		exeName = string(sz_Path, exeName.find_last_of('\\') + 1, exeName.length());
		ofstream fout(LOGPATH, ios::app);
		fout.seekp(ios::end);
		if (eb == "BEGIN") {
			fout << "--------------------" << _GetSystemTime() << "[" << exeName << "]" << "  [Begin]--------------------" << endl;
		}
		else if (eb == "END") {
			fout << "--------------------" << _GetSystemTime() << "[" << exeName << "]" << "  [End]  --------------------" << endl;
		}
		fout.close();
		LogUnLock();
	}
};

extern Mylog Mlog;
#define LOG_DETAIL(...)  Mlog.WriteDetail(__FILE__,__FUNCTION__,__LINE__,"DETAIL",__VA_ARGS__)
#define LOG_BEGIN        Mlog.WriteLogBOE("BEGIN")
#define LOG_DEBUG(...)   Mlog.WriteDetail(__FILE__,__FUNCTION__,__LINE__,"DEBUG",__VA_ARGS__)
#define LOG_ERROR(...)   Mlog.WriteDetail(__FILE__,__FUNCTION__,__LINE__,"ERROR",__VA_ARGS__)
#define LOG_EXCEPTION(...)   Mlog.WriteDetail(__FILE__,__FUNCTION__,__LINE__,"EXCEPTION",__VA_ARGS__)
#define LOG_WARN(...)    Mlog.WriteDetail(__FILE__,__FUNCTION__,__LINE__,"WARN",__VA_ARGS__)
#define LOG_FATAL(...)    Mlog.Fatal(__FILE__,__FUNCTION__,__LINE__,"FATAL",__VA_ARGS__)
#define LOG_END          Mlog.WriteLogBOE("END")



#endif

