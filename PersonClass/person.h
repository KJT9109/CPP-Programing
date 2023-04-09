/*
 * person.h
 *
 *  Created on: 2023. 04. 04
 *      Author: Jitae
 */

#ifndef __PEOPLE_H__
#define __PEOPLE_H__

#include <iostream>
using namespace std;

/*! MBTI Information */
typedef enum _MBTI_INFO
{
    ISFJ = 0,
    INTJ,
    UNKNOWN,

} MBTI_INFO;

/** @defgroup School_information
 * @{
 */

/*! grade Information */
typedef struct _GRADE
{
    int first_grade;
    int second_grade;
    int third_grade;

}GRADE_INFO;

/*! school Information */
typedef struct _SCHOOL
{
    GRADE_INFO elemntary_school;
    GRADE_INFO middle_school;
    GRADE_INFO high_school;

}school_info;

/**
 *  @}
 */

typedef enum _CONDITION
{
    VERYGOOD = 0,
    GOOD,
    NORMAL,
    BAD,
    WORST
}PERSON_CONDITION;

typedef enum _STATE
{
    SLEEPING = 0, //TODO: CONDITION에 따라SLEEP TIME 결정 그리고 CONDITION UP
    WORKING, //TODO: NORMAL에서 내려가지 않음
    RESTING, //TODO: 휴식 중일 시 기분이 NORMAL이상 올라가지x
    EATING   //TODO: 먹는 음식에 따라 CONDITION up
}PERSON_STATE;

typedef struct _QUESTION
{
    int unknown;

}question_info;

class Person
{
    private:
	PERSON_CONDITION condition;
	PERSON_STATE state; 
	MBTI_INFO MBTI;
	string myName;
	int IQ;
	int sleepTime;
	int workTime;
	int salary;
	int company;
	int gradCard(school_info sch);

    public:
	int recv_question(question_info qst);
	int trans_question(question_info qst, Person who);
	int what_doing();
	int what_todo();
};

#endif
