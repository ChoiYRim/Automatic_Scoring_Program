#ifndef _HEADER_FOR_AUTOMATIC_SCORING_PROGRAM_
#define _HEADER_FOR_AUTOMATIC_SCORING_PROGRAM_

#include <unordered_map>
#include <string_view>
#include <algorithm>
#include <iostream>
#include <string>
#include <thread>
#include <memory>
#include <vector>
#include <chrono>
#include <mutex>

#include <time.t>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread_t>
#include <sys/stat.h>

// 서로 다른 프로세스들에서 동일한 파일 접근? -> 미리 저장해서 메모리에 올려놓자
// 상속 관계?

const uint8_t OPTION_E = 1<<1;
const uint8_t OPTION_P = 1<<2;
const uint8_t OPTION_T = 1<<3;
const uint8_t OPTION_H = 1<<4;
const uint8_t OPTION_C = 1<<5;

class Answer
{
};

class Student
{
};

#endif
