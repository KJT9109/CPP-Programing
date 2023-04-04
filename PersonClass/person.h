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


typedef struct _QUESTION
{
    int unknown;

}question_info;

class Person
{
    private:
	MBTI_INFO MBTI;
	string myName;
	int IQ;
	int state; //TODO: state에 대한 정의 필요
	int sleepTime;
	int workTime;
	int salary;
	int company;
	int condition;
	int gradCard(school_info sch);

    public:
	int recv_question(question_info qst);
	int trans_question(question_info qst, Person who);
	int what_doing();
	int what_todo();
};

#endif
