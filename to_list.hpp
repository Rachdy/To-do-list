#ifndef TO_DO_LIST_HPP
#define TO_DO_LIST_HPP

#include<iostream>
#include<string>
#include<vector>

class Task{
    public:
    
    std::string name_task="";
    bool finish=false;
    std::string category="";
    Task(const std::string newname, const std::string cat):name_task(newname), category(cat){}    
    void show_info();

};


class To_list{
    private:
    std::vector<Task> Tasks;
    public:
    void show_all_tasks();
  
    void add_task(const std::string nametask, const  std::string cat);
    void show_info(int index);
    void remove(int index);
    void make_done(int index );
    void change_task_name(int index ,  const std::string new_name );

    std::string  choose_category(); // Choose category for a task

};





#endif