
#include "to_list.hpp"



// Tasks Methods

void To_list ::add_task(const std::string nametask, const  std::string cat){
    Tasks.push_back(Task(nametask, cat));
}


std::string  To_list::choose_category(){
    std::string cat="";
   std::cout<<"chose the catergerie:\n";
   std::cout<<"1-Work\n2-Fun\n3-Birthday\n";
   int c;
   std::cout<<"your choose just nummber:";
   std::cin>>c;
   switch(c){
    case 1:cat="Work";break;
    case 2:cat="Fun";break;
    case 3:cat="Birthday";break;
    default:
            std::cout << "Invalid choice. Setting category to 'Unknown'.\n";
            cat ="Unknown";
            break;
   }
   return cat;
}

void To_list:: make_done(int index ){
     if(0<=index && index<Tasks.size()){
        Tasks[index].finish=true;
    }
    else {
        std::cout<<"index is out of range of tasks\n";
    }
   
}
void Task::show_info(){
    std::cout<<"name of task :"<<name_task<<"\n";
    std::cout<<"catergorie of task :"<<category<<"\n";

    switch(finish){
        case true : std::cout<<"this task is done\n"; break;
        case false : std::cout<<"this task is not  done\n"; break;
    }
}

void To_list::change_task_name(int index , const std::string new_name )
{
    if(0<=index && index<Tasks.size()){
        Tasks[index].name_task = new_name;
    }
    else {
        std::cout<<"index is out of range of tasks\n";
    }
    
}
void To_list::show_all_tasks(){  
    if(Tasks.empty()){
        std::cout<<"No Tasks \n";
    }
    else{
    for(int i = 0;i<Tasks.size();i++){
        Tasks[i].show_info();
    }
    }
}

void To_list::remove(int index ){
    if(0<=index && index<Tasks.size()){
        Tasks.erase(Tasks.begin()+index);
    }
    else {
        std::cout<<"index is out of range of tasks\n";
    }
}
