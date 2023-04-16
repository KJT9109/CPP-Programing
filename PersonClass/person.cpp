/*
 * person.cpp
 *
 *  Created on: 2023. 04. 04
 *      Author: Jitae
 */

#include "person.h"


using namespace std;

Person_State State_List[] = {
    {SLEEPING, "Sleeping"},
    {WORKING, "Working"},
    {RESTING, "Resting"},
    {EATING, "Eating"}
};

Person:: Person() 
{
    myName = "UNKNOWN";
    age = 99;
    cout << "Who Are you ... ?" << "\r\n";
    cout <<  "Tracking: "<< myName << " age: "<< age <<"\r\n";
}

Person:: Person(string arg_name, int arg_age)
{
    myName = arg_name;
    age = arg_age;
    state = EATING;
    cout << "Congratulation !! " << myName << " is Come Back !! " << "\r\n";
    cout << "State : " << State_List[state].state_str << "\r\n";
    cout << "age : " << age << "\r\n";

}


Person:: ~Person()
{
    cout << myName << " is run away ..." << "\r\n";
    cout << myName << " Will be back ... " << " \r\n";
}

int Person:: recv_question(question_info qst)
{
    NOT_USED(qst);
    return 0;
}


int Person:: trans_question(question_info qst, Person who)
{
    NOT_USED(qst);
    NOT_USED(who);

    return 0;
}
